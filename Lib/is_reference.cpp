template<typename T>
struct my_is_reference {
    static constexpr bool value = false;
};

template<typename T>
struct my_is_reference<T&> {
    static constexpr bool value = true;
};

template<typename T>
struct my_is_reference<T&&> {
    static constexpr bool value = true;
};


static_assert(my_is_reference<int>::value == false);

static_assert(my_is_reference<int&>::value);

static_assert(my_is_reference<int&&>::value);