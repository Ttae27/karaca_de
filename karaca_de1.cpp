#include <iostream>
#include <string>

void strrev(std::string &str)
{
    int len = str.length();
    int j = len;
    std::string tmp;

    for (int i = 0;i < len;i++)
    {
        tmp += str[j - 1];
        j--;
    }
    str = tmp;
}

int main()
{
    std::string str;

    std::cin >> str;
    strrev(str);
    for (int i = 3;i < str.length();i++)
    {
        if (str[i] == '0')
            str[i] = 'a';
        else if (str[i] == '1')
            str[i] = 'e';
        else if (str[i] == '2')
            str[i] = 'i';
        else if (str[i] == '3')
            str[i] = 'o';
        else if (str[i] == '4')
            str[i] = 'u';
    }
    std::cout << &str[3] << "\n";
}