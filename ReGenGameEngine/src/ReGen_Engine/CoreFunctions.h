#pragma once
#include "vector"

namespace ReGenGames
{
#pragma region Vectors
	/*
	///<param name="x coordinate"></param> /// <returns></returns>
	///<param name="y coordinate"></param> /// <returns></returns>
	*/
	///<summary>2 Dimensional Vector of integer value.</summary>
	struct Vector2i
	{
		int x = 0, y = 0;
	};
	///<summary>2 Dimensional Vector of float value.</summary>
	struct Vector2f
	{
		float x = 0, y = 0;
	};
	///<summary>2 Dimensional Vector of double value.</summary>
	struct Vector2do
	{
		double x = 0, y = 0;
	};
	///<summary>3 Dimensional Vector of integer values.</summary>
	struct Vector3i
	{
		int x = 0, y = 0, z = 0;
	};
	///<summary>3 Dimensional Vector of float values.</summary>
	struct Vector3f
	{
		float x = 0, y = 0, z = 0;
	};
	///<summary>3 Dimensional Vector of double values.</summary>
	struct Vector3do
	{
		double x = 0, y = 0, z = 0;
	};
#pragma endregion
}