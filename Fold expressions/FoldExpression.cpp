

template <typename Ty>
Ty sum14(Ty base) 
{ 
    return base; 
}

template <typename Ty, typename... Args>
auto sum14(Ty base, Args... args) 
{
    return base + sum14(args...);
}


template <typename... Ty>
auto sum17(Ty... args) 
{
    return (args + ...);
}


int main()
{
    // The C++14 way
    int result14 = sum14(1, 2, 3);
    // The C++17 way
    int result17 = sum17(1, 2, 3);

    return 0;
}

