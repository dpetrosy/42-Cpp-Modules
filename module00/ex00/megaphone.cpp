#include <iostream>

void strToUpper(std::string& str)
{
    for (unsigned long int i = 0; i < str.length(); ++i)
        str[i] = std::toupper(str[i]);
}

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        std::string str;
        for (int i = 1; i < argc; ++i)
        {
            str = argv[i];
            strToUpper(str);
            std::cout << str;
        }
        std::cout << std::endl;
    }
    return 0;
}