#pragma once
#define GLM_ENABLE_EXPERIMENTAL
#define GLM_FORCE_SWIZZLE
#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>
#include <chaiscript/chaiscript.hpp>
#include <string>
#include <stddef.h>
#include "../../../Log/loguru.hpp"
#include <glm/gtx/string_cast.hpp>

using namespace chaiscript;
using namespace glm;
using namespace std;

// Text types

inline void printl(const std::string& message)
{
	LOG_F(INFO, message.c_str());
}

inline void printl(const char* message)
{
	LOG_F(INFO, message);
}

// Boolean types

inline void printl(const bool value)
{
    LOG_F(INFO, "%d", value);
}

// Floating point types

inline void printl(const float value)
{
	LOG_F(INFO, "%f", value);
}

inline void printl(const double& value)
{
	LOG_F(INFO, "%lf", value);
}

inline void printl(const long double& value)
{
	LOG_F(INFO, "%Lf", value);
}

// Integer types

inline void printl(const int value)
{
	LOG_F(INFO, "%i", value);
}

inline void printl(const unsigned int value)
{
	LOG_F(INFO, "%ui", value);
}

inline void printl(const short value)
{
	LOG_F(INFO, "%hi", value);
}

inline void printl(const unsigned short value)
{
	LOG_F(INFO, "%hui", value);
}

inline void printl(const long value)
{
	LOG_F(INFO, "%li", value);
}

inline void printl(const unsigned long value)
{
	LOG_F(INFO, "%lui", value);
}

inline void printl(const long long& value)
{
	LOG_F(INFO, "%lli", value);
}

inline void printl(const unsigned long long& value)
{
	LOG_F(INFO, "%llui", value);
}

// Char types

inline void printl(const char value)
{
	LOG_F(INFO, "%c", value);
}

inline void printl(const unsigned char value)
{
	LOG_F(INFO, "%uc", value);
}

inline void printl(const char16_t& value)
{
	LOG_F(INFO, "%lc", value);
}

// GLM types

// Vec2 types

inline void printl(const glm::vec2& value)
{
	LOG_F(INFO, "vec2 x:%f, y:%f", value.x, value.y);
}

inline void printl(const glm::dvec2& value)
{
	LOG_F(INFO, "dvec2 x:%lf, y:%lf", value.x, value.y);
}

inline void printl(const glm::bvec2& value)
{
	LOG_F(INFO, "bvec2 x:%b, y:%d", value.x, value.y);
}

inline void printl(const glm::ivec2& value)
{
	LOG_F(INFO, "ivec2 x:%i, y:%i", value.x, value.y);
}

inline void printl(const glm::uvec2& value)
{
	LOG_F(INFO, "uvec2 x:%ui, y:%ui", value.x, value.y);
}

// Vec3 types

inline void printl(const glm::vec3& value)
{
	LOG_F(INFO, "vec3(x:%f, y:%f, z:%f)", value.x, value.y, value.z);
}

inline void printl(const glm::dvec3& value)
{
	LOG_F(INFO, "dvec2 x:%lf, y:%lf, z:%lf", value.x, value.y, value.z);
}

inline void printl(const glm::bvec3& value)
{
	LOG_F(INFO, "bvec2 x:%b, y:%d, z:%d", value.x, value.y, value.z);
}

inline void printl(const glm::ivec3& value)
{
	LOG_F(INFO, "ivec2 x:%i, y:%i, z:%i", value.x, value.y, value.z);
}

inline void printl(const glm::uvec3& value)
{
	LOG_F(INFO, "uvec2 x:%ui, y:%ui, z:%ui", value.x, value.y, value.z);
}

// Vec4 types

inline void printl(const glm::vec4& value)
{
	LOG_F(INFO, "vec4 x:%f, y:%f, z:%f, w:%f", value.x, value.y, value.z, value.w);
}

inline void printl(const glm::dvec4& value)
{
	LOG_F(INFO, "dvec2 x:%lf, y:%lf, z:%lf, w:%lf", value.x, value.y, value.z, value.w);
}

inline void printl(const glm::bvec4& value)
{
	LOG_F(INFO, "bvec2 x:%b, y:%d, z:%d, w:%d", value.x, value.y, value.z, value.w);
}

inline void printl(const glm::ivec4& value)
{
	LOG_F(INFO, "ivec2 x:%i, y:%i, z:%i, w:%i", value.x, value.y, value.z, value.w);
}

inline void printl(const glm::uvec4& value)
{
	LOG_F(INFO, "uvec2 x:%ui, y:%ui, z:%ui, w:%ui", value.x, value.y, value.z, value.w);
}

// Quaternion types

inline void printl(const glm::quat& value)
{
	LOG_F(INFO,
		"quat w:%f, x:%f, y:%f, z:%f", value.w, value.x, value.y, value.z);
}

inline void printl(const glm::dquat& value)
{
	LOG_F(INFO,
		"dquat w:%lf, x:%lf, y:%lf, z:%lf", value.w, value.x, value.y, value.z);
}

// Matrix types

// mat2
inline void printl(const glm::mat2& value)
{
    LOG_F(INFO,
        R"(mat2:
        a0:%f, a1:%f
        b0:%f, b1:%f)",
        value[0][0], value[0][1],
        value[1][0], value[1][1]);
}

// mat2x2
/*
inline void printl(const glm::mat2x2& value)
{
    LOG_F(INFO,
        R"(mat2x2:
        a0:%f, a1:%f
        b0:%f, b1:%f)",
        value[0][0], value[0][1],
        value[1][0], value[1][1]);
}
*/

// mat2x3
inline void printl(const glm::mat2x3& value)
{
    LOG_F(INFO,
        R"(mat2x3:
        a0:%f, a1:%f, a2:%f
        b0:%f, b1:%f, b2:%f)",
        value[0][0], value[0][1], value[0][2],
        value[1][0], value[1][1], value[1][2]);
}

// mat2x4
inline void printl(const glm::mat2x4& value)
{
    LOG_F(INFO,
        R"(mat2x4:
        a0:%f, a1:%f, a2:%f, a3:%f
        b0:%f, b1:%f, b2:%f, b3:%f)",
        value[0][0], value[0][1], value[0][2], value[0][3],
        value[1][0], value[1][1], value[1][2], value[1][3]);
}

// mat3
inline void printl(const glm::mat3& value)
{
    LOG_F(INFO,
        R"(mat3:
        a0:%f, a1:%f, a2:%f
        b0:%f, b1:%f, b2:%f
        c0:%f, c1:%f, c2:%f)",
        value[0][0], value[0][1], value[0][2],
        value[1][0], value[1][1], value[1][2],
        value[2][0], value[2][1], value[2][2]);
}

// mat3x2
inline void printl(const glm::mat3x2& value)
{
    LOG_F(INFO,
        R"(mat3x2:
        a0:%f, a1:%f
        b0:%f, b1:%f
        c0:%f, c1:%f)",
        value[0][0], value[0][1],
        value[1][0], value[1][1],
        value[2][0], value[2][1]);
}

// mat3x3
/*
inline void printl(const glm::mat3x3& value)
{
    LOG_F(INFO,
        R"(mat3x3:
        a0:%f, a1:%f, a2:%f
        b0:%f, b1:%f, b2:%f
        c0:%f, c1:%f, c2:%f)",
        value[0][0], value[0][1], value[0][2],
        value[1][0], value[1][1], value[1][2],
        value[2][0], value[2][1], value[2][2]);
}
*/

// mat3x4
inline void printl(const glm::mat3x4& value)
{
    LOG_F(INFO,
        R"(mat3x4:
        a0:%f, a1:%f, a2:%f, a3:%f
        b0:%f, b1:%f, b2:%f, b3:%f
        c0:%f, c1:%f, c2:%f, c3:%f)",
        value[0][0], value[0][1], value[0][2], value[0][3],
        value[1][0], value[1][1], value[1][2], value[1][3],
        value[2][0], value[2][1], value[2][2], value[2][3]);
}

// mat4
inline void printl(const glm::mat4& value)
{
    LOG_F(INFO,
        R"(mat4:
        a0:%f, a1:%f, a2:%f, a3:%f
        b0:%f, b1:%f, b2:%f, b3:%f
        c0:%f, c1:%f, c2:%f, c3:%f
        d0:%f, d1:%f, d2:%f, d3:%f)",
        value[0][0], value[0][1], value[0][2], value[0][3],
        value[1][0], value[1][1], value[1][2], value[1][3],
        value[2][0], value[2][1], value[2][2], value[2][3],
        value[3][0], value[3][1], value[3][2], value[3][3]);
}

// mat4x2
inline void printl(const glm::mat4x2& value)
{
    LOG_F(INFO,
        R"(mat4x2:
        a0:%f, a1:%f
        b0:%f, b1:%f
        c0:%f, c1:%f
        d0:%f, d1:%f)",
        value[0][0], value[0][1],
        value[1][0], value[1][1],
        value[2][0], value[2][1],
        value[3][0], value[3][1]);
}

// mat4x3
inline void printl(const glm::mat4x3& value)
{
    LOG_F(INFO,
        R"(mat4x3:
        a0:%f, a1:%f, a2:%f
        b0:%f, b1:%f, b2:%f
        c0:%f, c1:%f, c2:%f
        d0:%f, d1:%f, d2:%f)",
        value[0][0], value[0][1], value[0][2],
        value[1][0], value[1][1], value[1][2],
        value[2][0], value[2][1], value[2][2],
        value[3][0], value[3][1], value[3][2]);
}

// mat4x4
/*
inline void printl(const glm::mat4x4& value)
{
    LOG_F(INFO,
        R"(mat4x4:
        a0:%f, a1:%f, a2:%f, a3:%f
        b0:%f, b1:%f, b2:%f, b3:%f
        c0:%f, c1:%f, c2:%f, c3:%f
        d0:%f, d1:%f, d2:%f, d3:%f)",
        value[0][0], value[0][1], value[0][2], value[0][3],
        value[1][0], value[1][1], value[1][2], value[1][3],
        value[2][0], value[2][1], value[2][2], value[2][3],
        value[3][0], value[3][1], value[3][2], value[3][3]);
}
*/

// dmat2
inline void printl(const glm::dmat2& value)
{
    LOG_F(INFO,
        R"(dmat2:
        a0:%f, a1:%f
        b0:%f, b1:%f)",
        value[0][0], value[0][1],
        value[1][0], value[1][1]);
}

// dmat2x2
/*
inline void printl(const glm::dmat2x2& value)
{
    LOG_F(INFO,
        R"(dmat2x2:
        a0:%f, a1:%f
        b0:%f, b1:%f)",
        value[0][0], value[0][1],
        value[1][0], value[1][1]);
}
*/

// dmat2x3
inline void printl(const glm::dmat2x3& value)
{
    LOG_F(INFO,
        R"(dmat2x3:
        a0:%f, a1:%f, a2:%f
        b0:%f, b1:%f, b2:%f)",
        value[0][0], value[0][1], value[0][2],
        value[1][0], value[1][1], value[1][2]);
}

// dmat2x4
inline void printl(const glm::dmat2x4& value)
{
    LOG_F(INFO,
        R"(dmat2x4:
        a0:%f, a1:%f, a2:%f, a3:%f
        b0:%f, b1:%f, b2:%f, b3:%f)",
        value[0][0], value[0][1], value[0][2], value[0][3],
        value[1][0], value[1][1], value[1][2], value[1][3]);
}

// dmat3
inline void printl(const glm::dmat3& value)
{
    LOG_F(INFO,
        R"(dmat3:
        a0:%f, a1:%f, a2:%f
        b0:%f, b1:%f, b2:%f
        c0:%f, c1:%f, c2:%f)",
        value[0][0], value[0][1], value[0][2],
        value[1][0], value[1][1], value[1][2],
        value[2][0], value[2][1], value[2][2]);
}

// dmat3x2
inline void printl(const glm::dmat3x2& value)
{
    LOG_F(INFO,
        R"(dmat3x2:
        a0:%f, a1:%f
        b0:%f, b1:%f
        c0:%f, c1:%f)",
        value[0][0], value[0][1],
        value[1][0], value[1][1],
        value[2][0], value[2][1]);
}

// dmat3x3
/*
inline void printl(const glm::dmat3x3& value)
{
    LOG_F(INFO,
        R"(dmat3x3:
        a0:%f, a1:%f, a2:%f
        b0:%f, b1:%f, b2:%f
        c0:%f, c1:%f, c2:%f)",
        value[0][0], value[0][1], value[0][2],
        value[1][0], value[1][1], value[1][2],
        value[2][0], value[2][1], value[2][2]);
}
*/

// dmat3x4
inline void printl(const glm::dmat3x4& value)
{
    LOG_F(INFO,
        R"(dmat3x4:
        a0:%f, a1:%f, a2:%f, a3:%f
        b0:%f, b1:%f, b2:%f, b3:%f
        c0:%f, c1:%f, c2:%f, c3:%f)",
        value[0][0], value[0][1], value[0][2], value[0][3],
        value[1][0], value[1][1], value[1][2], value[1][3],
        value[2][0], value[2][1], value[2][2], value[2][3]);
}

// dmat4
inline void printl(const glm::dmat4& value)
{
    LOG_F(INFO,
        R"(dmat4:
        a0:%f, a1:%f, a2:%f, a3:%f
        b0:%f, b1:%f, b2:%f, b3:%f
        c0:%f, c1:%f, c2:%f, c3:%f
        d0:%f, d1:%f, d2:%f, d3:%f)",
        value[0][0], value[0][1], value[0][2], value[0][3],
        value[1][0], value[1][1], value[1][2], value[1][3],
        value[2][0], value[2][1], value[2][2], value[2][3],
        value[3][0], value[3][1], value[3][2], value[3][3]);
}

// dmat4x2
inline void printl(const glm::dmat4x2& value)
{
    LOG_F(INFO,
        R"(dmat4x2:
        a0:%f, a1:%f
        b0:%f, b1:%f
        c0:%f, c1:%f
        d0:%f, d1:%f)",
        value[0][0], value[0][1],
        value[1][0], value[1][1],
        value[2][0], value[2][1],
        value[3][0], value[3][1]);
}

// dmat4x3
inline void printl(const glm::dmat4x3& value)
{
    LOG_F(INFO,
        R"(dmat4x3:
        a0:%f, a1:%f, a2:%f
        b0:%f, b1:%f, b2:%f
        c0:%f, c1:%f, c2:%f
        d0:%f, d1:%f, d2:%f)",
        value[0][0], value[0][1], value[0][2],
        value[1][0], value[1][1], value[1][2],
        value[2][0], value[2][1], value[2][2],
        value[3][0], value[3][1], value[3][2]);
}

// dmat4x4
/*
inline void printl(const glm::dmat4x4& value)
{
    LOG_F(INFO,
        R"(dmat4x4:
        a0:%f, a1:%f, a2:%f, a3:%f
        b0:%f, b1:%f, b2:%f, b3:%f
        c0:%f, c1:%f, c2:%f, c3:%f
        d0:%f, d1:%f, d2:%f, d3:%f)",
        value[0][0], value[0][1], value[0][2], value[0][3],
        value[1][0], value[1][1], value[1][2], value[1][3],
        value[2][0], value[2][1], value[2][2], value[2][3],
        value[3][0], value[3][1], value[3][2], value[3][3]);
}
*/

// imat
inline void printl(const glm::imat2x2& value)
{
    LOG_F(INFO,
        R"(imat2:
        a0:%d, a1:%d
        b0:%d, b1:%d)",
        value[0][0], value[0][1],
        value[1][0], value[1][1]);
}

inline void printl(const glm::imat2x3& value)
{
    LOG_F(INFO,
        R"(imat2x3:
        a0:%d, a1:%d, a2:%d
        b0:%d, b1:%d, b2:%d)",
        value[0][0], value[0][1], value[0][2],
        value[1][0], value[1][1], value[1][2]);
}

inline void printl(const glm::imat2x4& value)
{
    LOG_F(INFO,
        R"(imat2x4:
        a0:%d, a1:%d, a2:%d, a3:%d
        b0:%d, b1:%d, b2:%d, b3:%d)",
        value[0][0], value[0][1], value[0][2], value[0][3],
        value[1][0], value[1][1], value[1][2], value[1][3]);
}

inline void printl(const glm::imat3x3& value)
{
    LOG_F(INFO,
        R"(imat3:
        a0:%d, a1:%d, a2:%d
        b0:%d, b1:%d, b2:%d
        c0:%d, c1:%d, c2:%d)",
        value[0][0], value[0][1], value[0][2],
        value[1][0], value[1][1], value[1][2],
        value[2][0], value[2][1], value[2][2]);
}

inline void printl(const glm::imat3x2& value)
{
    LOG_F(INFO,
        R"(imat3x2:
        a0:%d, a1:%d
        b0:%d, b1:%d
        c0:%d, c1:%d)",
        value[0][0], value[0][1],
        value[1][0], value[1][1],
        value[2][0], value[2][1]);
}

inline void printl(const glm::imat3x4& value)
{
    LOG_F(INFO,
        R"(imat3x4:
        a0:%d, a1:%d, a2:%d, a3:%d
        b0:%d, b1:%d, b2:%d, b3:%d
        c0:%d, c1:%d, c2:%d, c3:%d)",
        value[0][0], value[0][1], value[0][2], value[0][3],
        value[1][0], value[1][1], value[1][2], value[1][3],
        value[2][0], value[2][1], value[2][2], value[2][3]);
}

inline void printl(const glm::imat4x4& value)
{
    LOG_F(INFO,
        R"(imat4:
        a0:%d, a1:%d, a2:%d, a3:%d
        b0:%d, b1:%d, b2:%d, b3:%d
        c0:%d, c1:%d, c2:%d, c3:%d
        d0:%d, d1:%d, d2:%d, d3:%d)",
        value[0][0], value[0][1], value[0][2], value[0][3],
        value[1][0], value[1][1], value[1][2], value[1][3],
        value[2][0], value[2][1], value[2][2], value[2][3],
        value[3][0], value[3][1], value[3][2], value[3][3]);
}

inline void printl(const glm::imat4x2& value)
{
    LOG_F(INFO,
        R"(imat4x2:
        a0:%d, a1:%d
        b0:%d, b1:%d
        c0:%d, c1:%d
        d0:%d, d1:%d)",
        value[0][0], value[0][1],
        value[1][0], value[1][1],
        value[2][0], value[2][1],
        value[3][0], value[3][1]);
}

inline void printl(const glm::imat4x3& value)
{
    LOG_F(INFO,
        R"(imat4x3:
        a0:%d, a1:%d, a2:%d
        b0:%d, b1:%d, b2:%d
        c0:%d, c1:%d, c2:%d
        d0:%d, d1:%d, d2:%d)",
        value[0][0], value[0][1], value[0][2],
        value[1][0], value[1][1], value[1][2],
        value[2][0], value[2][1], value[2][2],
        value[3][0], value[3][1], value[3][2]);
}

// umat
inline void printl(const glm::umat2x2& value)
{
    LOG_F(INFO,
        R"(imat2:
        a0:%d, a1:%d
        b0:%d, b1:%d)",
        value[0][0], value[0][1],
        value[1][0], value[1][1]);
}

inline void printl(const glm::umat2x3& value)
{
    LOG_F(INFO,
        R"(imat2x3:
        a0:%d, a1:%d, a2:%d
        b0:%d, b1:%d, b2:%d)",
        value[0][0], value[0][1], value[0][2],
        value[1][0], value[1][1], value[1][2]);
}

inline void printl(const glm::umat2x4& value)
{
    LOG_F(INFO,
        R"(imat2x4:
        a0:%d, a1:%d, a2:%d, a3:%d
        b0:%d, b1:%d, b2:%d, b3:%d)",
        value[0][0], value[0][1], value[0][2], value[0][3],
        value[1][0], value[1][1], value[1][2], value[1][3]);
}

inline void printl(const glm::umat3x3& value)
{
    LOG_F(INFO,
        R"(imat3:
        a0:%d, a1:%d, a2:%d
        b0:%d, b1:%d, b2:%d
        c0:%d, c1:%d, c2:%d)",
        value[0][0], value[0][1], value[0][2],
        value[1][0], value[1][1], value[1][2],
        value[2][0], value[2][1], value[2][2]);
}

inline void printl(const glm::umat3x2& value)
{
    LOG_F(INFO,
        R"(imat3x2:
        a0:%d, a1:%d
        b0:%d, b1:%d
        c0:%d, c1:%d)",
        value[0][0], value[0][1],
        value[1][0], value[1][1],
        value[2][0], value[2][1]);
}

inline void printl(const glm::umat3x4& value)
{
    LOG_F(INFO,
        R"(imat3x4:
        a0:%d, a1:%d, a2:%d, a3:%d
        b0:%d, b1:%d, b2:%d, b3:%d
        c0:%d, c1:%d, c2:%d, c3:%d)",
        value[0][0], value[0][1], value[0][2], value[0][3],
        value[1][0], value[1][1], value[1][2], value[1][3],
        value[2][0], value[2][1], value[2][2], value[2][3]);
}

inline void printl(const glm::umat4x4& value)
{
    LOG_F(INFO,
        R"(imat4:
        a0:%d, a1:%d, a2:%d, a3:%d
        b0:%d, b1:%d, b2:%d, b3:%d
        c0:%d, c1:%d, c2:%d, c3:%d
        d0:%d, d1:%d, d2:%d, d3:%d)",
        value[0][0], value[0][1], value[0][2], value[0][3],
        value[1][0], value[1][1], value[1][2], value[1][3],
        value[2][0], value[2][1], value[2][2], value[2][3],
        value[3][0], value[3][1], value[3][2], value[3][3]);
}

inline void printl(const glm::umat4x2& value)
{
    LOG_F(INFO,
        R"(imat4x2:
        a0:%d, a1:%d
        b0:%d, b1:%d
        c0:%d, c1:%d
        d0:%d, d1:%d)",
        value[0][0], value[0][1],
        value[1][0], value[1][1],
        value[2][0], value[2][1],
        value[3][0], value[3][1]);
}

inline void printl(const glm::umat4x3& value)
{
    LOG_F(INFO,
        R"(imat4x3:
        a0:%d, a1:%d, a2:%d
        b0:%d, b1:%d, b2:%d
        c0:%d, c1:%d, c2:%d
        d0:%d, d1:%d, d2:%d)",
        value[0][0], value[0][1], value[0][2],
        value[1][0], value[1][1], value[1][2],
        value[2][0], value[2][1], value[2][2],
        value[3][0], value[3][1], value[3][2]);
}

inline void SetLogFunctions(ChaiScript* chaiscript)
{
	// LOGGING functions

    // C++ primitive types

	// Text
	chaiscript->add(fun(static_cast<void (*) (const string&)>(printl)), "printl");
	chaiscript->add(fun(static_cast<void (*) (const char*)>(printl)), "printl");

	// C++ types

    // Bool
    chaiscript->add(fun(static_cast<void (*) (const bool)>(printl)), "printl");

	// Float
	chaiscript->add(fun(static_cast<void (*) (const float)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*) (const double&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*) (const long double&)>(printl)), "printl");

    // Integer
    chaiscript->add(fun(static_cast<void (*)(const int)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const unsigned int)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const short)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const unsigned short)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const long)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const unsigned long)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const long long&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const unsigned long long&)>(printl)), "printl");

    // Char
    chaiscript->add(fun(static_cast<void (*)(const char)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const unsigned char)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const char16_t&)>(printl)), "printl");

    // GLM types

    // vec2
	chaiscript->add(fun(static_cast<void (*) (const const vec2&)>(printl)), "printl");
	chaiscript->add(fun(static_cast<void (*) (const const dvec2&)>(printl)), "printl");
	chaiscript->add(fun(static_cast<void (*) (const const bvec2&)>(printl)), "printl");
	chaiscript->add(fun(static_cast<void (*) (const const ivec2&)>(printl)), "printl");
	chaiscript->add(fun(static_cast<void (*) (const const uvec2&)>(printl)), "printl");

    // vec3
	chaiscript->add(fun(static_cast<void (*) (const const vec3&)>(printl)), "printl");
	chaiscript->add(fun(static_cast<void (*) (const const dvec3&)>(printl)), "printl");
	chaiscript->add(fun(static_cast<void (*) (const const bvec3&)>(printl)), "printl");
	chaiscript->add(fun(static_cast<void (*) (const const ivec3&)>(printl)), "printl");
	chaiscript->add(fun(static_cast<void (*) (const const uvec3&)>(printl)), "printl");

    // vec4
	chaiscript->add(fun(static_cast<void (*) (const const vec4&)>(printl)), "printl");
	chaiscript->add(fun(static_cast<void (*) (const const dvec4&)>(printl)), "printl");
	chaiscript->add(fun(static_cast<void (*) (const const bvec4&)>(printl)), "printl");
	chaiscript->add(fun(static_cast<void (*) (const const ivec4&)>(printl)), "printl");
	chaiscript->add(fun(static_cast<void (*) (const const uvec4&)>(printl)), "printl");

    // quaternion
	chaiscript->add(fun(static_cast<void (*) (const const quat&)>(printl)), "printl");
	chaiscript->add(fun(static_cast<void (*) (const const dquat&)>(printl)), "printl");

    // Matrices

    // mat2
    chaiscript->add(fun(static_cast<void (*)(const glm::mat2&)>(printl)), "printl");
    //chaiscript->add(fun(static_cast<void (*)(const glm::mat2x2&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::mat2x3&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::mat2x4&)>(printl)), "printl");

    // mat3
    chaiscript->add(fun(static_cast<void (*)(const glm::mat3&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::mat3x2&)>(printl)), "printl");
    //chaiscript->add(fun(static_cast<void (*)(const glm::mat3x3&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::mat3x4&)>(printl)), "printl");

    // mat4
    chaiscript->add(fun(static_cast<void (*)(const glm::mat4&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::mat4x2&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::mat4x3&)>(printl)), "printl");
    //chaiscript->add(fun(static_cast<void (*)(const glm::mat4x4&)>(printl)), "printl");

    // dmat2
    chaiscript->add(fun(static_cast<void (*)(const glm::dmat2&)>(printl)), "printl");
    //chaiscript->add(fun(static_cast<void (*)(const glm::dmat2x2&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::dmat2x3&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::dmat2x4&)>(printl)), "printl");

    // dmat3
    chaiscript->add(fun(static_cast<void (*)(const glm::dmat3&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::dmat3x2&)>(printl)), "printl");
    //chaiscript->add(fun(static_cast<void (*)(const glm::dmat3x3&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::dmat3x4&)>(printl)), "printl");

    // dmat4
    chaiscript->add(fun(static_cast<void (*)(const glm::dmat4&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::dmat4x2&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::dmat4x3&)>(printl)), "printl");
    //chaiscript->add(fun(static_cast<void (*)(const glm::dmat4x4&)>(printl)), "printl");

    // imat
    chaiscript->add(fun(static_cast<void (*)(const glm::imat2x2&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::imat2x3&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::imat2x4&)>(printl)), "printl");

    chaiscript->add(fun(static_cast<void (*)(const glm::imat3x2&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::imat3x3&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::imat3x4&)>(printl)), "printl");

    chaiscript->add(fun(static_cast<void (*)(const glm::imat4x2&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::imat4x3&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::imat4x4&)>(printl)), "printl");

    // umat
    chaiscript->add(fun(static_cast<void (*)(const glm::umat2x2&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::umat2x3&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::umat2x4&)>(printl)), "printl");

    chaiscript->add(fun(static_cast<void (*)(const glm::umat3x2&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::umat3x3&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::umat3x4&)>(printl)), "printl");

    chaiscript->add(fun(static_cast<void (*)(const glm::umat4x2&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::umat4x3&)>(printl)), "printl");
    chaiscript->add(fun(static_cast<void (*)(const glm::umat4x4&)>(printl)), "printl");

}
