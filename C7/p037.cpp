// vid 23
// program that prints the first letter of each word

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>

std::string ReadString();
void PrintFirstLetter(std::string str);

int main()
{
    std::string Name = ReadString();
    std::cout << Name << "\n";
    PrintFirstLetter(Name);
}
void PrintFirstLetter(std::string str)
{
    bool isFirstLetter = true;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' && isFirstLetter)
            std::cout << str[i] << "\n";
        isFirstLetter = (str[i] == ' ' ? true : false);
    }
}
std::string ReadString()
{
    std::string str;
    printf("Enter Your Name : ");
    getline(std::cin, str);
    return str;
}