#include "chaiscript/chaiscript_basic.hpp"
#include "chaiscript/chaiscript_stdlib.hpp"
#include "chaiscript/language/chaiscript_parser.hpp"
#include "chaiscript/dispatchkit/boxed_number.hpp"
#include "chaiscript/language/chaiscript_algebraic.hpp"

namespace chaiscript
{
    // chaiscript_stdlib.hpp interface implementation.

    [[nodiscard]] ModulePtr Std_Lib::library()
    {
        auto lib = std::make_shared<Module>();
        bootstrap::Bootstrap::bootstrap(*lib);

        bootstrap::standard_library::vector_type<std::vector<Boxed_Value>>("Vector", *lib);
        bootstrap::standard_library::string_type<std::string>("string", *lib);
        bootstrap::standard_library::map_type<std::map<std::string, Boxed_Value>>("Map", *lib);
        bootstrap::standard_library::pair_type<std::pair<Boxed_Value, Boxed_Value>>("Pair", *lib);

#ifndef CHAISCRIPT_NO_THREADS
        bootstrap::standard_library::future_type<std::future<chaiscript::Boxed_Value>>("future", *lib);
        lib->add(chaiscript::fun(
            [](const std::function<chaiscript::Boxed_Value()>& t_func) { return std::async(std::launch::async, t_func); }),
            "async");
#endif

        json_wrap::library(*lib);

        lib->eval(ChaiScript_Prelude::chaiscript_prelude() /*, "standard prelude"*/);

        return lib;
    }

    // boxed_number.hpp interface implementation.

    Boxed_Number::Common_Types Boxed_Number::get_common_type(const Boxed_Value& t_bv)
    {
        const Type_Info& inp_ = t_bv.get_type_info();

        if (inp_ == user_type<int>()) {
            return get_common_type(sizeof(int), true);
        }
        else if (inp_ == user_type<double>()) {
            return Common_Types::t_double;
        }
        else if (inp_ == user_type<long double>()) {
            return Common_Types::t_long_double;
        }
        else if (inp_ == user_type<float>()) {
            return Common_Types::t_float;
        }
        else if (inp_ == user_type<char>()) {
            return get_common_type(sizeof(char), std::is_signed<char>::value);
        }
        else if (inp_ == user_type<unsigned char>()) {
            return get_common_type(sizeof(unsigned char), false);
        }
        else if (inp_ == user_type<unsigned int>()) {
            return get_common_type(sizeof(unsigned int), false);
        }
        else if (inp_ == user_type<long>()) {
            return get_common_type(sizeof(long), true);
        }
        else if (inp_ == user_type<long long>()) {
            return get_common_type(sizeof(long long), true);
        }
        else if (inp_ == user_type<unsigned long>()) {
            return get_common_type(sizeof(unsigned long), false);
        }
        else if (inp_ == user_type<unsigned long long>()) {
            return get_common_type(sizeof(unsigned long long), false);
        }
        else if (inp_ == user_type<std::int8_t>()) {
            return Common_Types::t_int8;
        }
        else if (inp_ == user_type<std::int16_t>()) {
            return Common_Types::t_int16;
        }
        else if (inp_ == user_type<std::int32_t>()) {
            return Common_Types::t_int32;
        }
        else if (inp_ == user_type<std::int64_t>()) {
            return Common_Types::t_int64;
        }
        else if (inp_ == user_type<std::uint8_t>()) {
            return Common_Types::t_uint8;
        }
        else if (inp_ == user_type<std::uint16_t>()) {
            return Common_Types::t_uint16;
        }
        else if (inp_ == user_type<std::uint32_t>()) {
            return Common_Types::t_uint32;
        }
        else if (inp_ == user_type<std::uint64_t>()) {
            return Common_Types::t_uint64;
        }
        else if (inp_ == user_type<wchar_t>()) {
            return get_common_type(sizeof(wchar_t), std::is_signed<wchar_t>::value);
        }
        else if (inp_ == user_type<char16_t>()) {
            return get_common_type(sizeof(char16_t), std::is_signed<char16_t>::value);
        }
        else if (inp_ == user_type<char32_t>()) {
            return get_common_type(sizeof(char32_t), std::is_signed<char32_t>::value);
        }
        else {
            throw chaiscript::detail::exception::bad_any_cast();
        }
    }
}
