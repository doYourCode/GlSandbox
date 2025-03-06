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

inline void SetGlmTypes(ChaiScript* chaiscript);

inline void SetScalar(ChaiScript* chaiscript)
{
	////scalar
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float, float)>(&glm::max)), "max");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float, float)>(&glm::min)), "min");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::abs)), "abs");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::sign)), "sign");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::floor)), "floor");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::ceil)), "ceil");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::round)), "round");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::trunc)), "trunc");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::fract)), "fract");
	// Math
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::sqrt)), "sqrt");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::inversesqrt)), "inversesqrt");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::exp)), "exp");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::log)), "log");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::exp2)), "exp2");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::log2)), "log2");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float, float)>(&glm::pow)), "pow");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float, float, float)>(&glm::fma)), "fma");
	// Angle type conversion
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::degrees)), "degrees");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::radians)), "radians");
	// Trigonometry
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::sin)), "sin");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::cos)), "cos");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::tan)), "tan");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::asin)), "asin");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::acos)), "acos");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::atan)), "atan");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float, float)>(&glm::atan)), "atan");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::sinh)), "sinh");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::cosh)), "cosh");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::tanh)), "tanh");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::asin)), "asinh");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::acos)), "acosh");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float)>(&glm::atan)), "atanh");
	// Utility
	chaiscript->add(chaiscript::fun(static_cast<bool (*)(float)>(&glm::isnan)), "isnan");
	chaiscript->add(chaiscript::fun(static_cast<bool (*)(float)>(&glm::isinf)), "isinf");
	// Other
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float, float)>(&glm::mod)), "mod");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float, float)>(&glm::step)), "step");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float, float, float)>(&glm::smoothstep)), "smoothstep");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float, float, float)>(&glm::clamp)), "clamp");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float, float, float)>(&glm::mix)), "mix");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(float, float)>(&glm::dot)), "dot");
	// Pi related
	chaiscript->add(chaiscript::fun(&glm::pi<float>), "pi");
	chaiscript->add(chaiscript::fun(&glm::pi<float>), "half_tau");
	chaiscript->add(chaiscript::fun(&glm::half_pi<float>), "half_pi");
	chaiscript->add(chaiscript::fun(&glm::half_pi<float>), "quarter_tau");
	chaiscript->add(chaiscript::fun(&glm::two_pi<float>), "two_pi");
	chaiscript->add(chaiscript::fun(&glm::two_pi<float>), "tau");
	chaiscript->add(chaiscript::fun(&glm::three_over_two_pi<float>), "three_over_two_pi");
	chaiscript->add(chaiscript::fun(&glm::quarter_pi<float>), "quarter_pi");
}

inline void SetVec2(ChaiScript* chaiscript)
{
	// vec2
	chaiscript->add(chaiscript::user_type<glm::vec2>(), "vec2");

	// Constructors
	chaiscript->add(chaiscript::constructor<glm::vec2(float)>(), "vec2");
	chaiscript->add(chaiscript::constructor<glm::vec2(float, float)>(), "vec2");
	chaiscript->add(chaiscript::constructor<glm::vec2(const glm::vec2&)>(), "vec2");
	chaiscript->add(chaiscript::constructor<glm::vec2()>(), "vec2");

	// Member access
	chaiscript->add(chaiscript::fun(&glm::vec2::x), "x");
	chaiscript->add(chaiscript::fun(&glm::vec2::y), "y");

	/* 
	 * Math operators
	 * Since operators are member functions(not free functions), you cannot take its address directly.
	 * The lambda functions captures the operations explicitly, allowing it to be passed to ChaiScript.
	 */
	chaiscript->add(chaiscript::fun([](const glm::vec2& a, const glm::vec2& b) { return a + b; }), "+");
	chaiscript->add(chaiscript::fun([](const glm::vec2& a, const glm::vec2& b) { return a - b; }), "-");
	chaiscript->add(chaiscript::fun([](const glm::vec2& a) { return -a; }), "-"); // invert signal
	chaiscript->add(chaiscript::fun([](const glm::vec2& a, const glm::vec2& b) { return a * b; }), "*");
	chaiscript->add(chaiscript::fun([](float scalar, const glm::vec2& v) { return scalar * v; }), "*");
	chaiscript->add(chaiscript::fun([](const glm::vec2& v, float scalar) { return v * scalar; }), "*");
	chaiscript->add(chaiscript::fun([](const glm::vec2& a, const glm::vec2& b) { return a / b; }), "/");
	chaiscript->add(chaiscript::fun([](float scalar, const glm::vec2& v) { return scalar / v; }), "/");
	chaiscript->add(chaiscript::fun([](const glm::vec2& v, float scalar) { return v / scalar; }), "/");

	// Equality check operators
	chaiscript->add(chaiscript::fun([](const glm::vec2& a, const glm::vec2& b) { return all(glm::equal(a, b)); }), "==");
	chaiscript->add(chaiscript::fun([](const glm::vec2& a, const glm::vec2& b) { return all(glm::notEqual(a, b)); }), "!=");
	chaiscript->add(fun(static_cast<bvec2(*)(const vec2&, const vec2&)>(equal)), "equal");
	chaiscript->add(fun(static_cast<bvec2(*)(const vec2&, const vec2&)>(notEqual)), "notEqual");

	// Comparison operators
	chaiscript->add(chaiscript::fun([](const glm::vec2& a, const glm::vec2& b) { return all(glm::greaterThan(a, b)); }), ">");
	chaiscript->add(chaiscript::fun([](const glm::vec2& a, const glm::vec2& b) { return all(glm::greaterThanEqual(a, b)); }), ">=");
	chaiscript->add(fun(static_cast<bvec2(*)(const vec2&, const vec2&)>(greaterThan)), "greaterThan");
	chaiscript->add(fun(static_cast<bvec2(*)(const vec2&, const vec2&)>(greaterThanEqual)), "greaterThanEqual");
	chaiscript->add(chaiscript::fun([](const glm::vec2& a, const glm::vec2& b) { return all(glm::lessThan(a, b)); }), "<");
	chaiscript->add(chaiscript::fun([](const glm::vec2& a, const glm::vec2& b) { return all(glm::lessThanEqual(a, b)); }), "<=");
	chaiscript->add(fun(static_cast<bvec2(*)(const vec2&, const vec2&)>(lessThan)), "lessThan");
	chaiscript->add(fun(static_cast<bvec2(*)(const vec2&, const vec2&)>(lessThanEqual)), "lessThanEqual");

	// Available glm functions
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec2&)>(glm::length)), "length");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec2&, const glm::vec2&)>(glm::distance)), "distance");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&)>(glm::normalize)), "normalize");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, const glm::vec2&)>(glm::reflect)), "reflect");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, const glm::vec2&, float)>(glm::refract)), "refract");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec2&, const glm::vec2&)>(glm::dot)), "dot");

	// Component wise functions
	chaiscript->add(fun(static_cast<vec2(*)(const vec2&)>(abs)), "abs");
	chaiscript->add(fun(static_cast<vec2(*)(const vec2&)>(sign)), "sign");
	chaiscript->add(fun(static_cast<vec2(*)(const vec2&)>(floor)), "floor");
	chaiscript->add(fun(static_cast<vec2(*)(const vec2&)>(ceil)), "ceil");
	chaiscript->add(fun(static_cast<vec2(*)(const vec2&)>(round)), "round");
	chaiscript->add(fun(static_cast<vec2(*)(const vec2&)>(fract)), "fract");
	chaiscript->add(fun(static_cast<vec2(*)(const vec2&, const vec2&, const vec2&)>(fma)), "fma");

	chaiscript->add(fun(static_cast<vec2(*)(const vec2&, const vec2&)>(min)), "min");
	chaiscript->add(fun(static_cast<vec2(*)(const vec2&, float)>(min)), "min");
	chaiscript->add(fun(static_cast<vec2(*)(const vec2&, const vec2&)>(max)), "max");
	chaiscript->add(fun(static_cast<vec2(*)(const vec2&, float)>(max)), "max");
	chaiscript->add(fun(static_cast<vec2(*)(const vec2&, const vec2&)>(mod)), "mod");
	chaiscript->add(fun(static_cast<vec2(*)(const vec2&, float)>(mod)), "mod");

	chaiscript->add(fun(static_cast<vec2(*)(const vec2&, const vec2&, const vec2&)>(clamp)), "clamp");
	chaiscript->add(fun(static_cast<vec2(*)(const vec2&, float, float)>(clamp)), "clamp");

	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, const glm::vec2&, const glm::vec2&)>(glm::mix)), "mix");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, const glm::vec2&, float)>(glm::mix)), "mix");
	
	// Convert to string
	chaiscript->add(chaiscript::fun([](const glm::vec2& v) -> std::string { return "vec2("
		+ std::to_string(v.x) + ", "
		+ std::to_string(v.y) + ")"; }),
		"to_string");
}

inline void SetVec3(ChaiScript* chaiscript)
{
	// vec3
	chaiscript->add(chaiscript::user_type<glm::vec3>(), "vec3");

	// Constructors
	chaiscript->add(chaiscript::constructor<glm::vec3(float)>(), "vec3");
	chaiscript->add(chaiscript::constructor<glm::vec3(float, float, float)>(), "vec3");
	chaiscript->add(chaiscript::constructor<glm::vec3(const glm::vec3&)>(), "vec3");
	chaiscript->add(chaiscript::constructor<glm::vec3()>(), "vec3");

	// Member access
	chaiscript->add(chaiscript::fun(&glm::vec3::x), "x");
	chaiscript->add(chaiscript::fun(&glm::vec3::y), "y");
	chaiscript->add(chaiscript::fun(&glm::vec3::z), "z");

	/*
	 * Math operators
	 * Since operators are member functions(not free functions), you cannot take its address directly.
	 * The lambda functions captures the operations explicitly, allowing it to be passed to ChaiScript.
	 */
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return a + b; }), "+");
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return a - b; }), "-");
	chaiscript->add(chaiscript::fun([](const glm::vec3& a) { return -a; }), "-"); // invert signal
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return a * b; }), "*");
	chaiscript->add(chaiscript::fun([](float scalar, const glm::vec3& v) { return scalar * v; }), "*");
	chaiscript->add(chaiscript::fun([](const glm::vec3& v, float scalar) { return v * scalar; }), "*");
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return a / b; }), "/");
	chaiscript->add(chaiscript::fun([](float scalar, const glm::vec3& v) { return scalar / v; }), "/");
	chaiscript->add(chaiscript::fun([](const glm::vec3& v, float scalar) { return v / scalar; }), "/");

	// Equality check operators
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return all(glm::equal(a, b)); }), "==");
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return all(glm::notEqual(a, b)); }), "!=");
	chaiscript->add(fun(static_cast<bvec3(*)(const vec3&, const vec3&)>(equal)), "equal");
	chaiscript->add(fun(static_cast<bvec3(*)(const vec3&, const vec3&)>(notEqual)), "notEqual");

	// Comparison operators
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return all(glm::greaterThan(a, b)); }), ">");
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return all(glm::greaterThanEqual(a, b)); }), ">=");
	chaiscript->add(fun(static_cast<bvec3(*)(const vec3&, const vec3&)>(greaterThan)), "greaterThan");
	chaiscript->add(fun(static_cast<bvec3(*)(const vec3&, const vec3&)>(greaterThanEqual)), "greaterThanEqual");
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return all(glm::lessThan(a, b)); }), "<");
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return all(glm::lessThanEqual(a, b)); }), "<=");
	chaiscript->add(fun(static_cast<bvec3(*)(const vec3&, const vec3&)>(lessThan)), "lessThan");
	chaiscript->add(fun(static_cast<bvec3(*)(const vec3&, const vec3&)>(lessThanEqual)), "lessThanEqual");

	// Available glm functions
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec3&)>(glm::length)), "length");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec3&, const glm::vec3&)>(glm::distance)), "distance");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&)>(glm::normalize)), "normalize");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::vec3&)>(glm::reflect)), "reflect");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::vec3&, float)>(glm::refract)), "refract");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec3&, const glm::vec3&)>(glm::dot)), "dot");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::vec3&)>(glm::cross)), "cross"); // Specific to vec3

	// Component wise functions
	chaiscript->add(fun(static_cast<vec3(*)(const vec3&)>(abs)), "abs");
	chaiscript->add(fun(static_cast<vec3(*)(const vec3&)>(sign)), "sign");
	chaiscript->add(fun(static_cast<vec3(*)(const vec3&)>(floor)), "floor");
	chaiscript->add(fun(static_cast<vec3(*)(const vec3&)>(ceil)), "ceil");
	chaiscript->add(fun(static_cast<vec3(*)(const vec3&)>(round)), "round");
	chaiscript->add(fun(static_cast<vec3(*)(const vec3&)>(fract)), "fract");
	chaiscript->add(fun(static_cast<vec3(*)(const vec3&, const vec3&, const vec3&)>(fma)), "fma");

	chaiscript->add(fun(static_cast<vec3(*)(const vec3&, const vec3&)>(min)), "min");
	chaiscript->add(fun(static_cast<vec3(*)(const vec3&, float)>(min)), "min");
	chaiscript->add(fun(static_cast<vec3(*)(const vec3&, const vec3&)>(max)), "max");
	chaiscript->add(fun(static_cast<vec3(*)(const vec3&, float)>(max)), "max");
	chaiscript->add(fun(static_cast<vec3(*)(const vec3&, const vec3&)>(mod)), "mod");
	chaiscript->add(fun(static_cast<vec3(*)(const vec3&, float)>(mod)), "mod");

	chaiscript->add(fun(static_cast<vec3(*)(const vec3&, const vec3&, const vec3&)>(clamp)), "clamp");
	chaiscript->add(fun(static_cast<vec3(*)(const vec3&, float, float)>(clamp)), "clamp");

	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::vec3&, const glm::vec3&)>(glm::mix)), "mix");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::vec3&, float)>(glm::mix)), "mix");

	// Convert to string
	chaiscript->add(chaiscript::fun([](const glm::vec3& v) -> std::string { return "vec3("
		+ std::to_string(v.x) + ", "
		+ std::to_string(v.y) + ", "
		+ std::to_string(v.z) + ")"; }),
		"to_string");
}

inline void SetVec4(ChaiScript* chaiscript)
{
	// vec4
	chaiscript->add(chaiscript::user_type<glm::vec4>(), "vec4");

	// Constructors
	chaiscript->add(chaiscript::constructor<glm::vec4(float)>(), "vec4");
	chaiscript->add(chaiscript::constructor<glm::vec4(float, float, float, float)>(), "vec4");
	chaiscript->add(chaiscript::constructor<glm::vec4(const glm::vec4&)>(), "vec4");
	chaiscript->add(chaiscript::constructor<glm::vec4()>(), "vec4");

	// Member access
	chaiscript->add(chaiscript::fun(&glm::vec4::x), "x");
	chaiscript->add(chaiscript::fun(&glm::vec4::y), "y");
	chaiscript->add(chaiscript::fun(&glm::vec4::z), "z");
	chaiscript->add(chaiscript::fun(&glm::vec4::w), "w");

	/*
	 * Math operators
	 * Since operators are member functions(not free functions), you cannot take its address directly.
	 * The lambda functions captures the operations explicitly, allowing it to be passed to ChaiScript.
	 */
	chaiscript->add(chaiscript::fun([](const glm::vec4& a, const glm::vec4& b) { return a + b; }), "+");
	chaiscript->add(chaiscript::fun([](const glm::vec4& a, const glm::vec4& b) { return a - b; }), "-");
	chaiscript->add(chaiscript::fun([](const glm::vec4& a) { return -a; }), "-"); // invert signal
	chaiscript->add(chaiscript::fun([](const glm::vec4& a, const glm::vec4& b) { return a * b; }), "*");
	chaiscript->add(chaiscript::fun([](float scalar, const glm::vec4& v) { return scalar * v; }), "*");
	chaiscript->add(chaiscript::fun([](const glm::vec4& v, float scalar) { return v * scalar; }), "*");
	chaiscript->add(chaiscript::fun([](const glm::vec4& a, const glm::vec4& b) { return a / b; }), "/");
	chaiscript->add(chaiscript::fun([](float scalar, const glm::vec4& v) { return scalar / v; }), "/");
	chaiscript->add(chaiscript::fun([](const glm::vec4& v, float scalar) { return v / scalar; }), "/");

	// Equality check operators
	chaiscript->add(chaiscript::fun([](const glm::vec4& a, const glm::vec4& b) { return all(glm::equal(a, b)); }), "==");
	chaiscript->add(chaiscript::fun([](const glm::vec4& a, const glm::vec4& b) { return all(glm::notEqual(a, b)); }), "!=");
	chaiscript->add(fun(static_cast<bvec4(*)(const vec4&, const vec4&)>(equal)), "equal");
	chaiscript->add(fun(static_cast<bvec4(*)(const vec4&, const vec4&)>(notEqual)), "notEqual");

	// Comparison operators
	chaiscript->add(chaiscript::fun([](const glm::vec4& a, const glm::vec4& b) { return all(glm::greaterThan(a, b)); }), ">");
	chaiscript->add(chaiscript::fun([](const glm::vec4& a, const glm::vec4& b) { return all(glm::greaterThanEqual(a, b)); }), ">=");
	chaiscript->add(fun(static_cast<bvec4(*)(const vec4&, const vec4&)>(greaterThan)), "greaterThan");
	chaiscript->add(fun(static_cast<bvec4(*)(const vec4&, const vec4&)>(greaterThanEqual)), "greaterThanEqual");
	chaiscript->add(chaiscript::fun([](const glm::vec4& a, const glm::vec4& b) { return all(glm::lessThan(a, b)); }), "<");
	chaiscript->add(chaiscript::fun([](const glm::vec4& a, const glm::vec4& b) { return all(glm::lessThanEqual(a, b)); }), "<=");
	chaiscript->add(fun(static_cast<bvec4(*)(const vec4&, const vec4&)>(lessThan)), "lessThan");
	chaiscript->add(fun(static_cast<bvec4(*)(const vec4&, const vec4&)>(lessThanEqual)), "lessThanEqual");

	// Available glm functions
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec4&)>(glm::length)), "length");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec4&, const glm::vec4&)>(glm::distance)), "distance");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&)>(glm::normalize)), "normalize");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, const glm::vec4&)>(glm::reflect)), "reflect");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, const glm::vec4&, float)>(glm::refract)), "refract");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec4&, const glm::vec4&)>(glm::dot)), "dot");

	// Component wise functions
	chaiscript->add(fun(static_cast<vec4(*)(const vec4&)>(abs)), "abs");
	chaiscript->add(fun(static_cast<vec4(*)(const vec4&)>(sign)), "sign");
	chaiscript->add(fun(static_cast<vec4(*)(const vec4&)>(floor)), "floor");
	chaiscript->add(fun(static_cast<vec4(*)(const vec4&)>(ceil)), "ceil");
	chaiscript->add(fun(static_cast<vec4(*)(const vec4&)>(round)), "round");
	chaiscript->add(fun(static_cast<vec4(*)(const vec4&)>(fract)), "fract");
	chaiscript->add(fun(static_cast<vec4(*)(const vec4&, const vec4&, const vec4&)>(fma)), "fma");

	chaiscript->add(fun(static_cast<vec4(*)(const vec4&, const vec4&)>(min)), "min");
	chaiscript->add(fun(static_cast<vec4(*)(const vec4&, float)>(min)), "min");
	chaiscript->add(fun(static_cast<vec4(*)(const vec4&, const vec4&)>(max)), "max");
	chaiscript->add(fun(static_cast<vec4(*)(const vec4&, float)>(max)), "max");
	chaiscript->add(fun(static_cast<vec4(*)(const vec4&, const vec4&)>(mod)), "mod");
	chaiscript->add(fun(static_cast<vec4(*)(const vec4&, float)>(mod)), "mod");

	chaiscript->add(fun(static_cast<vec4(*)(const vec4&, const vec4&, const vec4&)>(clamp)), "clamp");
	chaiscript->add(fun(static_cast<vec4(*)(const vec4&, float, float)>(clamp)), "clamp");

	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, const glm::vec4&, const glm::vec4&)>(glm::mix)), "mix");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, const glm::vec4&, float)>(glm::mix)), "mix");

	// Convert to string
	chaiscript->add(chaiscript::fun([](const glm::vec4& v) -> std::string { return "vec4("
		+ std::to_string(v.x) + ", "
		+ std::to_string(v.y) + ", "
		+ std::to_string(v.z) + ", "
		+ std::to_string(v.w) + ")"; }),
		"to_string");
}

inline void SetQuat(ChaiScript* chaiscript)
{
	// quat
	chaiscript->add(chaiscript::user_type<glm::quat>(), "quat");

	// Constructors
	chaiscript->add(chaiscript::constructor<glm::quat()>(), "quat");
	chaiscript->add(chaiscript::constructor<glm::quat(float, float, float, float)>(), "quat");
	chaiscript->add(chaiscript::constructor<glm::quat(const glm::quat&)>(), "quat");

	// Member access
	chaiscript->add(chaiscript::fun(&glm::quat::x), "x");
	chaiscript->add(chaiscript::fun(&glm::quat::y), "y");
	chaiscript->add(chaiscript::fun(&glm::quat::z), "z");
	chaiscript->add(chaiscript::fun(&glm::quat::w), "w");

	/*
	 * Math operators
	 * Since operators are member functions (not free functions), you cannot take their address directly.
	 * The lambda functions capture the operations explicitly, allowing them to be passed to ChaiScript.
	 */
	chaiscript->add(chaiscript::fun([](const glm::quat& a, const glm::quat& b) { return a + b; }), "+");
	chaiscript->add(chaiscript::fun([](const glm::quat& a, const glm::quat& b) { return a - b; }), "-");
	chaiscript->add(chaiscript::fun([](const glm::quat& a) { return -a; }), "-"); // invert signal
	chaiscript->add(chaiscript::fun([](const glm::quat& a, const glm::quat& b) { return a * b; }), "*");
	chaiscript->add(chaiscript::fun([](float scalar, const glm::quat& q) { return scalar * q; }), "*");
	chaiscript->add(chaiscript::fun([](const glm::quat& q, float scalar) { return q * scalar; }), "*");
	//chaiscript->add(chaiscript::fun([](const glm::quat& a, const glm::quat& b) { return a / b; }), "/");
	//chaiscript->add(chaiscript::fun([](float scalar, const glm::quat& q) { return scalar / q; }), "/");
	chaiscript->add(chaiscript::fun([](const glm::quat& q, float scalar) { return q / scalar; }), "/");

	// Equality check operators
	chaiscript->add(chaiscript::fun([](const glm::quat& a, const glm::quat& b) { return a == b; }), "==");
	chaiscript->add(chaiscript::fun([](const glm::quat& a, const glm::quat& b) { return a != b; }), "!=");

	// Quaternion-specific operations
	chaiscript->add(chaiscript::fun(static_cast<glm::quat(*)(const glm::quat&)>(glm::conjugate)), "conjugate");
	chaiscript->add(chaiscript::fun(static_cast<glm::quat(*)(const glm::quat&)>(glm::inverse)), "inverse");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::quat&)>(glm::length)), "length");
	chaiscript->add(chaiscript::fun(static_cast<glm::quat(*)(const glm::quat&)>(glm::normalize)), "normalize");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::quat&, const glm::quat&)>(glm::dot)), "dot");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::quat&)>(glm::angle)), "angle");
	chaiscript->add(chaiscript::fun(static_cast<vec3 (*)(const glm::quat&)>(glm::axis)), "axis");
	chaiscript->add(chaiscript::fun([](float angle, const glm::vec3& axis) { return glm::angleAxis(angle, axis); }), "angleAxis");
	
	// Roll, Pitch, Yaw (extracted from eulerAngles)
	chaiscript->add(chaiscript::fun([](const glm::quat& q) { return glm::roll(q); }), "roll");
	chaiscript->add(chaiscript::fun([](const glm::quat& q) { return glm::pitch(q); }), "pitch");
	chaiscript->add(chaiscript::fun([](const glm::quat& q) { return glm::yaw(q); }), "yaw");
	
	// Rotate a vector by a quaternion
	chaiscript->add(chaiscript::fun([](const glm::quat& q, float angle, const glm::vec3& axis) { return glm::rotate(q, angle, axis); }), "rotate");
	
	// Extract Euler angles (roll, pitch, yaw) from a quaternion
	chaiscript->add(chaiscript::fun([](const glm::quat& q) { return glm::eulerAngles(q); }), "eulerAngles");
	
	// Spherical and linear interpolation (slerp, lerp)
	chaiscript->add(chaiscript::fun(static_cast<glm::quat(*)(const glm::quat&, const glm::quat&, float)>(glm::slerp)), "slerp");
	chaiscript->add(chaiscript::fun(static_cast<glm::quat(*)(const glm::quat&, const glm::quat&, float)>(glm::lerp)), "lerp");
	
	// Convert to string
	chaiscript->add(chaiscript::fun([](const glm::quat& q) -> std::string { return "quat("
		+ std::to_string(q.x) + ", "
		+ std::to_string(q.y) + ", "
		+ std::to_string(q.z) + ", "
		+ std::to_string(q.w) + ")"; }),
		"to_string");
}

inline void SetMat4(ChaiScript* chaiscript)
{
	// Registering glm::mat4 and related functions to ChaiScript
	chaiscript->add(chaiscript::user_type<glm::mat4>(), "mat4");
	chaiscript->add(chaiscript::constructor<glm::mat4()>(), "mat4");
	// Matrix constructors
	chaiscript->add(chaiscript::fun([](float diagonal) { return glm::mat4(diagonal); }), "mat4");
	chaiscript->add(chaiscript::fun([](const glm::vec4& col1, const glm::vec4& col2, const glm::vec4& col3, const glm::vec4& col4) {
		return glm::mat4(col1, col2, col3, col4);
		}), "mat4");

	// Matrix operations
	chaiscript->add(chaiscript::fun([](const glm::mat4& m1, const glm::mat4& m2) { return m1 * m2; }), "*");
	chaiscript->add(chaiscript::fun([](const glm::mat4& m, float scalar) { return m * scalar; }), "*");
	chaiscript->add(chaiscript::fun([](float scalar, const glm::mat4& m) { return scalar * m; }), "*");
	chaiscript->add(chaiscript::fun([](const glm::mat4& m, const glm::vec4& v) { return m * v; }), "*");

	// Matrix inverse and transpose
	chaiscript->add(chaiscript::fun(static_cast<glm::mat4(*)(const glm::mat4&)>(&glm::inverse)), "inverse");
	chaiscript->add(chaiscript::fun(static_cast<glm::mat4(*)(const glm::mat4&)>(&glm::transpose)), "transpose");

	// Matrix determinant
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::mat4&)>(&glm::determinant)), "determinant");

	// Matrix functions
	chaiscript->add(chaiscript::fun(static_cast<glm::mat4(*)(const glm::mat4&, const glm::vec3&)>(&glm::scale)), "scale");
	chaiscript->add(chaiscript::fun(static_cast<glm::mat4(*)(const glm::mat4&, float, const glm::vec3&)>(&glm::rotate)), "rotate");
	chaiscript->add(chaiscript::fun(static_cast<glm::mat4(*)(const glm::mat4&, const glm::vec3&)>(&glm::translate)), "translate");

	// Set and get matrix values
	chaiscript->add(chaiscript::fun([](glm::mat4& m, unsigned int col, unsigned int row) { return m[col][row]; }), "mat4_get");
	chaiscript->add(chaiscript::fun([](glm::mat4& m, unsigned int col, unsigned int row, float value) { m[col][row] = value; }), "mat4_set");

	// Other transformations
	chaiscript->add(chaiscript::fun(static_cast<glm::mat4(*)(float, float, float, float)>(&glm::perspective)), "perspective");
	chaiscript->add(chaiscript::fun(static_cast<glm::mat4(*)(float, float, float, float)>(&glm::ortho)), "ortho");
	chaiscript->add(chaiscript::fun(static_cast<glm::mat4(*)(const glm::vec3&, const glm::vec3&, const glm::vec3&)>(&glm::lookAt)), "lookAt");
	chaiscript->add(chaiscript::fun(static_cast<glm::mat4(*)(float, float, float, float, float, float)>(&glm::frustum)), "frustum");
}

inline void SetGlmTypes(ChaiScript* chaiscript)
{
	SetVec2(chaiscript);
	SetVec3(chaiscript);
	SetVec4(chaiscript);
	SetQuat(chaiscript);
	SetScalar(chaiscript);
	SetMat4(chaiscript);
}
