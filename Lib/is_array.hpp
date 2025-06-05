#include <cstddef>

template<typename T>
struct my_is_array {
    static constexpr bool value = false;
};

template<typename T, size_t N>
struct my_is_array<T[N]> {
    static constexpr bool value = true;
};

template<typename T>
struct my_is_array<T[]> {
    static constexpr bool value = true;
};

// static_assert(my_is_array<int>::value == false);
// static_assert(my_is_array<int[5]>::value);        
// static_assert(my_is_array<double[3]>::value);      
// static_assert(my_is_array<float[]>::value);   