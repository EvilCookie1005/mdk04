#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int* a = new int;
    int* b = new int;
    int i;
    cin >> *a >> *b;
    i = *a;
    *a = *b;
    *b = i;
    cout << *a << " " << *b << endl;
    return 0;
}