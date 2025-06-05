#include <cstddef>
template<typename T>
struct my_is_null_pointer {
    static constexpr bool value = false;
};

template<>
struct my_is_null_pointer<std::nullptr_t> {
    static constexpr bool value = true;
};

// static_assert(my_is_null_pointer<std::nullptr_t>::value);
// static_assert(!my_is_null_pointer<int>::value);