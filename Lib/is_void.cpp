
template<typename T>
struct my_is_void {
    static constexpr bool value = false;
};

template<>
struct my_is_void<void> {
    static constexpr bool value = true;
};

static_assert(my_is_void<void>::value, "void should be true");
static_assert(my_is_void<int>::value == false, "int should be false");