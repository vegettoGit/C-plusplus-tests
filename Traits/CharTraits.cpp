
#include <string>

struct my_char_traits : public std::char_traits<char>
{
    static bool eq(char c1, char c2)
    {
        return toupper(c1) == toupper(c2);
    }

    static bool ne(char c1, char c2)
    {
        return toupper(c1) != toupper(c2);
    }

    static bool lt(char c1, char c2)
    {
        return toupper(c1) <  toupper(c2);
    }

    static int compare(const char* s1, const char* s2, size_t n)
    {
        return _memicmp(s1, s2, n);
    }

    static const char* find(const char* s, int n, char a) 
    {
        while (n-- > 0 && toupper(*s) != toupper(a)) 
        {
            ++s;
        }
        return s;
    }
};

typedef std::basic_string<char, my_char_traits> my_string;

int main()
{
    my_string hello("Hello");
    my_string hello2("hello");

    std::string hello3("Hello");
    std::string hello4("hello");

    int myEquals = hello.compare(hello2);
    int myEquals2 = hello3.compare(hello4);
    
    return 0;
}

