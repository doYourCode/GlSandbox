#pragma once
#define GLM_ENABLE_EXPERIMENTAL
#define GLM_FORCE_SWIZZLE
#include <glm/glm.hpp>
#include <glm/gtc/constants.hpp>
#include <glm/gtc/quaternion.hpp>
#include <chaiscript/chaiscript.hpp>
#include <string>
#include <stddef.h>
#include "../../../Log/loguru.hpp"
#include <glm/gtx/string_cast.hpp>

inline void SetGlmTypes(chaiscript::ChaiScript* chaiscript);

inline void SetGlmConstants(chaiscript::ChaiScript* chaiscript)
{
	chaiscript->add(chaiscript::fun(&glm::e<float>), "e");
	chaiscript->add(chaiscript::fun(&glm::epsilon<float>), "epsilon");
	chaiscript->add(chaiscript::fun(&glm::euler<float>), "euler");
	chaiscript->add(chaiscript::fun(&glm::golden_ratio<float>), "golden_ratio");
	chaiscript->add(chaiscript::fun(&glm::half_pi<float>), "half_pi");
	chaiscript->add(chaiscript::fun(&glm::ln_ln_two<float>), "ln_ln_two");
	chaiscript->add(chaiscript::fun(&glm::ln_ten<float>), "ln_ten");
	chaiscript->add(chaiscript::fun(&glm::ln_two<float>), "ln_two");
	chaiscript->add(chaiscript::fun(&glm::one<float>), "one");
	chaiscript->add(chaiscript::fun(&glm::one_over_pi<float>), "one_over_pi");
	chaiscript->add(chaiscript::fun(&glm::one_over_root_two<float>), "one_over_root_two");
	chaiscript->add(chaiscript::fun(&glm::pi<float>), "pi");
	chaiscript->add(chaiscript::fun(&glm::quarter_pi<float>), "quarter_pi");
	chaiscript->add(chaiscript::fun(&glm::root_five<float>), "root_five");
	chaiscript->add(chaiscript::fun(&glm::root_half_pi<float>), "root_half_pi");
	chaiscript->add(chaiscript::fun(&glm::root_ln_four<float>), "root_ln_four");
	chaiscript->add(chaiscript::fun(&glm::root_pi<float>), "root_pi");
	chaiscript->add(chaiscript::fun(&glm::root_three<float>), "root_three");
	chaiscript->add(chaiscript::fun(&glm::root_two<float>), "root_two");
	chaiscript->add(chaiscript::fun(&glm::root_two_pi<float>), "root_two_pi");
	chaiscript->add(chaiscript::fun(&glm::third<float>), "third");
	chaiscript->add(chaiscript::fun(&glm::two_over_pi<float>), "two_over_pi");
	chaiscript->add(chaiscript::fun(&glm::two_over_root_pi<float>), "two_over_root_pi");
	chaiscript->add(chaiscript::fun(&glm::two_thirds<float>), "two_thirds");
	chaiscript->add(chaiscript::fun(&glm::zero<float>), "zero");
}

inline void SetScalar(chaiscript::ChaiScript* chaiscript)
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
}

inline void SetVec2(chaiscript::ChaiScript* chaiscript)
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
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec2(*)(const glm::vec2&, const glm::vec2&)>(&glm::equal)), "equal");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec2(*)(const glm::vec2&, const glm::vec2&)>(&glm::notEqual)), "notEqual");

	// Comparison operators
	chaiscript->add(chaiscript::fun([](const glm::vec2& a, const glm::vec2& b) { return all(glm::greaterThan(a, b)); }), ">");
	chaiscript->add(chaiscript::fun([](const glm::vec2& a, const glm::vec2& b) { return all(glm::greaterThanEqual(a, b)); }), ">=");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec2(*)(const glm::vec2&, const glm::vec2&)>(&glm::greaterThan)), "greaterThan");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec2(*)(const glm::vec2&, const glm::vec2&)>(&glm::greaterThanEqual)), "greaterThanEqual");
	chaiscript->add(chaiscript::fun([](const glm::vec2& a, const glm::vec2& b) { return glm::all(glm::lessThan(a, b)); }), "<");
	chaiscript->add(chaiscript::fun([](const glm::vec2& a, const glm::vec2& b) { return glm::all(glm::lessThanEqual(a, b)); }), "<=");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec2(*)(const glm::vec2&, const glm::vec2&)>(&glm::lessThan)), "lessThan");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec2(*)(const glm::vec2&, const glm::vec2&)>(&glm::lessThanEqual)), "lessThanEqual");

	// Available glm functions
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec2&)>(&glm::length)), "length");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec2&, const glm::vec2&)>(&glm::distance)), "distance");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&)>(&glm::normalize)), "normalize");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, const glm::vec2&)>(&glm::reflect)), "reflect");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, const glm::vec2&, float)>(&glm::refract)), "refract");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec2&, const glm::vec2&)>(&glm::dot)), "dot");

	// Component wise functions
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&)>(&glm::abs)), "abs");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&)>(&glm::sign)), "sign");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&)>(&glm::floor)), "floor");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&)>(&glm::ceil)), "ceil");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&)>(&glm::round)), "round");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&)>(&glm::fract)), "fract");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, const glm::vec2&, const glm::vec2&)>(&glm::fma)), "fma");

	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, const glm::vec2&)>(&glm::min)), "min");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, float)>(&glm::min)), "min");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, const glm::vec2&)>(&glm::max)), "max");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, float)>(&glm::max)), "max");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, const glm::vec2&)>(&glm::mod)), "mod");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, float)>(&glm::mod)), "mod");

	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, const glm::vec2&, const glm::vec2&)>(&glm::clamp)), "clamp");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, float, float)>(&glm::clamp)), "clamp");

	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, const glm::vec2&, const glm::vec2&)>(&glm::mix)), "mix");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec2(*)(const glm::vec2&, const glm::vec2&, float)>(&glm::mix)), "mix");
}

inline void SetVec3(chaiscript::ChaiScript* chaiscript)
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
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return glm::all(glm::equal(a, b)); }), "==");
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return glm::all(glm::notEqual(a, b)); }), "!=");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec3(*)(const glm::vec3&, const glm::vec3&)>(&glm::equal)), "equal");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec3(*)(const glm::vec3&, const glm::vec3&)>(&glm::notEqual)), "notEqual");

	// Comparison operators
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return glm::all(glm::greaterThan(a, b)); }), ">");
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return glm::all(glm::greaterThanEqual(a, b)); }), ">=");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec3(*)(const glm::vec3&, const glm::vec3&)>(&glm::greaterThan)), "greaterThan");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec3(*)(const glm::vec3&, const glm::vec3&)>(&glm::greaterThanEqual)), "greaterThanEqual");
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return glm::all(glm::lessThan(a, b)); }), "<");
	chaiscript->add(chaiscript::fun([](const glm::vec3& a, const glm::vec3& b) { return glm::all(glm::lessThanEqual(a, b)); }), "<=");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec3(*)(const glm::vec3&, const glm::vec3&)>(&glm::lessThan)), "lessThan");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec3(*)(const glm::vec3&, const glm::vec3&)>(&glm::lessThanEqual)), "lessThanEqual");

	// Available glm functions
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec3&)>(&glm::length)), "length");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec3&, const glm::vec3&)>(&glm::distance)), "distance");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&)>(&glm::normalize)), "normalize");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::vec3&)>(&glm::reflect)), "reflect");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::vec3&, float)>(&glm::refract)), "refract");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec3&, const glm::vec3&)>(&glm::dot)), "dot");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::vec3&)>(&glm::cross)), "cross"); // Specific to vec3

	// Component wise functions
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&)>(&glm::abs)), "abs");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&)>(&glm::sign)), "sign");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&)>(&glm::floor)), "floor");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&)>(&glm::ceil)), "ceil");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&)>(&glm::round)), "round");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&)>(&glm::fract)), "fract");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::vec3&, const glm::vec3&)>(&glm::fma)), "fma");

	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::vec3&)>(&glm::min)), "min");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, float)>(&glm::min)), "min");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::vec3&)>(&glm::max)), "max");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, float)>(&glm::max)), "max");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::vec3&)>(&glm::mod)), "mod");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, float)>(&glm::mod)), "mod");

	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::vec3&, const glm::vec3&)>(&glm::clamp)), "clamp");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, float, float)>(&glm::clamp)), "clamp");

	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::vec3&, const glm::vec3&)>(&glm::mix)), "mix");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::vec3&, float)>(&glm::mix)), "mix");
}

inline void SetVec4(chaiscript::ChaiScript* chaiscript)
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
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec4(*)(const glm::vec4&, const glm::vec4&)>(&glm::equal)), "equal");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec4(*)(const glm::vec4&, const glm::vec4&)>(&glm::notEqual)), "notEqual");

	// Comparison operators
	chaiscript->add(chaiscript::fun([](const glm::vec4& a, const glm::vec4& b) { return glm::all(glm::greaterThan(a, b)); }), ">");
	chaiscript->add(chaiscript::fun([](const glm::vec4& a, const glm::vec4& b) { return glm::all(glm::greaterThanEqual(a, b)); }), ">=");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec4(*)(const glm::vec4&, const glm::vec4&)>(&glm::greaterThan)), "greaterThan");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec4(*)(const glm::vec4&, const glm::vec4&)>(&glm::greaterThanEqual)), "greaterThanEqual");
	chaiscript->add(chaiscript::fun([](const glm::vec4& a, const glm::vec4& b) { return glm::all(glm::lessThan(a, b)); }), "<");
	chaiscript->add(chaiscript::fun([](const glm::vec4& a, const glm::vec4& b) { return glm::all(glm::lessThanEqual(a, b)); }), "<=");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec4(*)(const glm::vec4&, const glm::vec4&)>(&glm::lessThan)), "lessThan");
	chaiscript->add(chaiscript::fun(static_cast<glm::bvec4(*)(const glm::vec4&, const glm::vec4&)>(&glm::lessThanEqual)), "lessThanEqual");

	// Available glm functions
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec4&)>(&glm::length)), "length");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec4&, const glm::vec4&)>(&glm::distance)), "distance");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&)>(&glm::normalize)), "normalize");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, const glm::vec4&)>(&glm::reflect)), "reflect");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, const glm::vec4&, float)>(&glm::refract)), "refract");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::vec4&, const glm::vec4&)>(&glm::dot)), "dot");

	// Component wise functions
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&)>(&glm::abs)), "abs");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&)>(&glm::sign)), "sign");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&)>(&glm::floor)), "floor");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&)>(&glm::ceil)), "ceil");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&)>(&glm::round)), "round");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&)>(&glm::fract)), "fract");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, const glm::vec4&, const glm::vec4&)>(&glm::fma)), "fma");

	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, const glm::vec4&)>(&glm::min)), "min");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, float)>(&glm::min)), "min");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, const glm::vec4&)>(&glm::max)), "max");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, float)>(&glm::max)), "max");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, const glm::vec4&)>(&glm::mod)), "mod");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, float)>(&glm::mod)), "mod");

	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, const glm::vec4&, const glm::vec4&)>(&glm::clamp)), "clamp");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, float, float)>(&glm::clamp)), "clamp");

	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, const glm::vec4&, const glm::vec4&)>(&glm::mix)), "mix");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec4(*)(const glm::vec4&, const glm::vec4&, float)>(&glm::mix)), "mix");
}

inline void SetQuat(chaiscript::ChaiScript* chaiscript)
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
	chaiscript->add(chaiscript::fun(static_cast<glm::quat(*)(const glm::quat&)>(&glm::conjugate)), "conjugate");
	chaiscript->add(chaiscript::fun(static_cast<glm::quat(*)(const glm::quat&)>(&glm::inverse)), "inverse");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::quat&)>(&glm::length)), "length");
	chaiscript->add(chaiscript::fun(static_cast<glm::quat(*)(const glm::quat&)>(&glm::normalize)), "normalize");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::quat&, const glm::quat&)>(&glm::dot)), "dot");
	chaiscript->add(chaiscript::fun(static_cast<float (*)(const glm::quat&)>(&glm::angle)), "angle");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3 (*)(const glm::quat&)>(&glm::axis)), "axis");
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
	chaiscript->add(chaiscript::fun(static_cast<glm::quat(*)(const glm::quat&, const glm::quat&, float)>(&glm::slerp)), "slerp");
	chaiscript->add(chaiscript::fun(static_cast<glm::quat(*)(const glm::quat&, const glm::quat&, float)>(&glm::lerp)), "lerp");
}

inline void SetMat4(chaiscript::ChaiScript* chaiscript)
{
	// Registering mat4 and related functions to ChaiScript
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
	chaiscript->add(chaiscript::fun(static_cast<glm::mat4(*)(float, float, float, float, float, float)>(&glm::ortho)), "ortho");
	chaiscript->add(chaiscript::fun(static_cast<glm::mat4(*)(float, float, float, float)>(&glm::ortho)), "ortho");
	chaiscript->add(chaiscript::fun(static_cast<glm::mat4(*)(const glm::vec3&, const glm::vec3&, const glm::vec3&)>(&glm::lookAt)), "lookAt");
	chaiscript->add(chaiscript::fun(static_cast<glm::mat4(*)(float, float, float, float, float, float)>(&glm::frustum)), "frustum");
	chaiscript->add(chaiscript::fun(static_cast<glm::vec3(*)(const glm::vec3&, const glm::mat4&, const glm::mat4&, const glm::vec4&)>(&glm::unProject)), "unProject");
}

inline void SetGlmTypes(chaiscript::ChaiScript* chaiscript)
{
	SetGlmConstants(chaiscript);

	SetScalar(chaiscript);

	SetVec2(chaiscript);
	SetVec3(chaiscript);
	SetVec4(chaiscript);
	SetQuat(chaiscript);

	SetMat4(chaiscript);
}
