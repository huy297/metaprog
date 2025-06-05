template<typename T>
struct my_is_integral {
    static constexpr bool value = false;
};

template<>
struct my_is_integral<int> {
    static constexpr bool value = true;
};

template<>
struct my_is_integral<long long> {
    static constexpr bool value = true;
};

// static_assert(my_is_integral<int>::value);

// static_assert(my_is_integral<long long>::value);

// static_assert(my_is_integral<float>::value == false);