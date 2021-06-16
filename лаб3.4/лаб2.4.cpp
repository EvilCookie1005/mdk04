#include <iostream>
#include <string>
#include <cstring>
#include <future>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    string str{ "эти[вот эти]символы" };
    auto f1 = async(launch::async, static_cast<const char* (*)(const char*, int)>(strchr), str.c_str(), '[');
    auto f2 = async(launch::async, static_cast<const char* (*)(const char*, int)>(strrchr), str.c_str(), ']');
    auto p1 = f1.get() + 1;
    cout.write(p1, f2.get() - p1) << endl;
}