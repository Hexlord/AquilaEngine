#pragma once

// Link library dependencies
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "d3dcompiler.lib")
#pragma comment(lib, "winmm.lib")

// System includes
#include <windows.h>

// DirectX includes
#define DIRECTINPUT_VERSION 0x0800
#include <d3d11.h>
#include <d3dcompiler.h>
#include <DirectXMath.h>
#include <DirectXColors.h>
#include <dinput.h>

// STL includes
#include <iostream>
#include <string>
#include <algorithm>
#include <execution>
#include <random>
#include <map>
#define SPP_USE_SPP_ALLOC 1
#include <sparsepp/spp.h>

#define IMGUI_API
#include "imgui/imgui.h"
#include "imgui/imgui_impl_dx11.h"

#undef min
#undef max
#include "entt/entt.hpp"

#include <RandomUtils.h>

// Safely release a COM object.
template<typename T>
inline void SafeRelease(T& ptr)
{
	if (ptr != NULL)
	{
		ptr->Release();
		ptr = NULL;
	}
}