#pragma once

#include <iostream>
#include <memory>
#include <utility>
#include <algorithm>
#include <functional>

#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

#include "ReGen_Engine/Log.h"
#include "ReGen_Engine/CoreFunctions.h"

// All replacement Data types
///<summary> 4 byte float value </summary>
typedef float floot;
///<summary> 8 byte integer </summary>
typedef long long elong;

#ifdef RG_PLATFORM_WINDOWS
	#include <Windows.h>
#endif