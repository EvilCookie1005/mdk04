#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::string str1 = "enikiba", str2 = "benikia";
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());
    std::cout << std::boolalpha << (str1 == str2) << std::endl;
}