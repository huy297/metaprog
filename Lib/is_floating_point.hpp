// template<typename T>
// struct my_is_floating_point{
//     static constexpr bool value = false;
// };

// template<>
// struct my_is_floating_point<float> {
//     static constexpr bool value = true;
// };

// template<>
// struct my_is_floating_point<double> {
//     static constexpr bool value = true;
// }

#include "is_same.hpp"

template<typename T>
struct my_is_floating_point{
    static constexpr bool value = 
        my_is_same<T, float>::value || my_is_same<T, double>::value;
};

// static_assert(my_is_floating_point<int>::value == false);

// static_assert(my_is_floating_point<double>::value);

// static_assert(my_is_floating_point<float>::value);