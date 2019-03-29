#pragma once
#include "vector"

namespace ReGenGames
{
#pragma region Vectors
	///<summary> 2 Dimensional Vector of integer value </summary>
	///<param name="x coordinate"></param> /// <returns></returns>
	typedef struct
	{
		int x, y;
	}Vector2i;
	///<summary> 2 Dimensional Vector of float value </summary>
	typedef struct
	{
		float x, y;
	}Vector2f;

	typedef struct
	{
		double x, y;
	}Vector2do;
	///<summary> 3 Dimensional Vector of integer values </summary>
	typedef struct
	{
		int x, y, z;
	}Vector3i;
	///<summary> 3 Dimensional Vector of float values </summary>
	typedef struct
	{
		float x, y, z;
	}Vector3f;
	///<summary> 3 Dimensional Vector of double values </summary>
	typedef struct
	{
		double x, y, z;
	}Vector3do;
#pragma endregion
}