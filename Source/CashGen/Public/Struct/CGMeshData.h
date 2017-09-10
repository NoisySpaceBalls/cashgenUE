#pragma once
#include "cashgen.h"
#include "RuntimeMeshComponent.h"
#include "CGTerrainConfig.h"
#include "CGMeshdata.generated.h"

/** Defines the data required for a single procedural mesh section */
USTRUCT(BlueprintType)
struct FCGMeshData
{
	GENERATED_USTRUCT_BODY()
	TArray<FRuntimeMeshVertexSimple> MyVertexData;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mesh Data Struct")
	TArray<int32> MyTriangles;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mesh Data Struct")
	TArray<FVector> HeightMap;
	
};