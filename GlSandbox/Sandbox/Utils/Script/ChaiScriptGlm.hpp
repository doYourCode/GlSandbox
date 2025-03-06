#pragma once
#define GLM_ENABLE_EXPERIMENTAL
#define GLM_FORCE_SWIZZLE
#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>
#include <chaiscript/chaiscript.hpp>
#include <string>
#include "../../../Log/loguru.hpp"
#include <glm/gtx/string_cast.hpp>

#include "SetLogFunctions.hpp"
#include "SetGlmTypes.hpp"

inline void SetGlmModule(chaiscript::ChaiScript* chaiscript)
{
	SetLogFunctions(chaiscript);

	SetGlmTypes(chaiscript);
}
