#include "FlockingManager.h"
#include "Agent.h"

#define AGENT_COUNT 10    

void UFlockingManager::Init(UWorld* world, UStaticMeshComponent* mesh) {
    UE_LOG(LogTemp, Warning, TEXT("MANAGER INIT"));

    World = world;

    float incr = (PI * 2.f) / AGENT_COUNT;
    for (int i = 0; i < AGENT_COUNT; i++) {
        if (World != nullptr) {
            FRotator rotation = FRotator();

            FVector location = FVector(0.0, 0.0, 1000.0);
            location.X = FMath::Sin(incr * i) * 150.f;
            location.Z = FMath::Cos(incr * i) * 150.f;

            AAgent* agent = World->SpawnActor<AAgent>(location, rotation);
            agent->Init(mesh, i);
            Agents.Add(agent);
        }
    }

    initialized = true;
    
}

void UFlockingManager::Flock() {
    for (int i = 0; i < AGENT_COUNT; i++) {
        FVector vectorToMove;

        //Find Center of Mass
        FVector centerOfMass;
        for (int j = 0; j < AGENT_COUNT; j++) {
            if (j != i) {
                FVector position = Agents[j]->GetActorLocation();
                centerOfMass = centerOfMass + position;
            }
        }
        centerOfMass = ((centerOfMass / AGENT_COUNT - 1) / 10);




        //Keep Distance
        FVector distance;
        for (int j = 0; j < AGENT_COUNT; j++) {
            if (j != i) {
                FVector jVec = Agents[j]->GetActorLocation();
                FVector iVec = Agents[i]->GetActorLocation();
                if (abs(iVec.X - jVec.X) < 100 && abs(iVec.Y - jVec.Y) < 100 && abs(iVec.Z - jVec.Z) < 100) {
                    distance.X += (iVec.X - jVec.X);
                    distance.Y += (iVec.Y - jVec.Y);
                    distance.Z += (iVec.Z - jVec.Z);
                }
            }
        }




        //Percieved Velocity
        FVector perVelocity;
        for (int j = 0; j < AGENT_COUNT; j++) {
            if (j != i) {
                perVelocity += Agents[j]->Velocity;
            }
        }

        perVelocity = (perVelocity / AGENT_COUNT - 1) / 8;

        //Bounding Box
        double Xmin = 1500.0;
        double Xmax = 1500.0;
        double Ymin = 1500.0;
        double Ymax = 1500.0;
        double Zmin = 1500.0;
        double Zmax = 1500.0;

        FVector bounding;
        if (Agents[i]->GetActorLocation().X < Xmin) {
            bounding.X = 50;
        }
        else if (Agents[i]->GetActorLocation().X > Xmax) {
            bounding.X = -50;
        }
        if (Agents[i]->GetActorLocation().Y < Ymin) {
            bounding.Y = 50;
        }
        else if (Agents[i]->GetActorLocation().Y > Ymax) {
            bounding.Y = -50;
        }
        if (Agents[i]->GetActorLocation().Z < Zmin) {
            bounding.Z = 50;
        }
        else if (Agents[i]->GetActorLocation().Z > Zmax) {
            bounding.Z = -50;
        }

        vectorToMove = centerOfMass + distance + perVelocity + bounding;


        //Limit Speed
        float Limit = 10;
        float mag = vectorToMove.Size();
        if (mag > Limit) {
            vectorToMove = vectorToMove / mag;
            vectorToMove = vectorToMove * Limit;
        }


        

        Agents[i]->Velocity = vectorToMove;
    }
    
}
