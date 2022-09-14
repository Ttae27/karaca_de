#include <iostream>
#include <string>

int main()
{
    std::string str;

    std::cin >> str;
    int         i = (int)str.length() - 4;
    while(i >= 0)
    {
        if (str[i] == '0')
            std::cout << 'a';
        else if (str[i] == '1')
            std::cout << 'e';
        else if (str[i] == '2')
            std::cout << 'i';
        else if (str[i] == '3')
            std::cout << 'o';
        else if (str[i] == '4')
            std::cout << 'u';
        else
            std::cout << str[i];
        i--;
    }
}