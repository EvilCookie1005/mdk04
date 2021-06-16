#include <iostream>

using namespace std;


char* func(char* strSource, char* strDest, int n)
{
    int spaceCount = 0;
    int index = 0;

    for (int i = 0; i < n - 1; ++i)
    {
        if (strSource[i] == ' ')
            ++spaceCount;

        if (i == 0 && strSource[i] != ' ')
            strDest[index++] = strSource[i];

        if (i == 0 && spaceCount > 0)
        {
            strDest[index++] = strSource[i + 1];
            spaceCount = 0;
        }

        if (i > 0 && spaceCount > 0)
        {
            strDest[index++] = strSource[i + 1];
            spaceCount = 0;
        }
    }

    strDest[index] = 0;
    return strDest;
}

int main()
{
    setlocale(LC_ALL, "rus");

    char str[] = "Вывести первые буквы";
    int size = strlen(str) + 1;

    char* dest = new char[size];

    for (int i = 0; i < size; ++i)
        dest[i] = 0;

    dest = func(str, dest, size);

    int i = 0;
    for (; dest[i] != '\0'; i++)
        cout << dest[i] << ' ';

    cout << endl;

    delete[] dest;

    return 0;
}