#include <iostream>
#include<string>
using namespace std;

int main(void) {

    system("chcp 1251 > nul");

    string str;

    cin >> str;

    for (int i = 2;i < str.size();i += 2)
    {
        cout << str[i];
    }

    system("pause > nul");
    return 0;

}
