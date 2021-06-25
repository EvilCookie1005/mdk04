#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

int main()
{
    std::string str;
    size_t pas = 0;
    size_t comp = 0;
    std::getline(std::cin, str);
    std::stringstream stream(str);
    std::string str2;
    str.clear();
    while (stream >> str2)
    {
        if (str2 == "кризис")
        {
            str += " проблема";
            pas++;
        }
        else if (str2 == "компьютер")
        {
            comp++;
            str += " компьютер";
        }
        else
        {
            str += ' ' + str2;
        }
        str2.clear();
    }
    str.erase(str.begin());
    std::cout << str << std::endl << "Replaced " << pas << " words, computer found " << comp << " times";
}
