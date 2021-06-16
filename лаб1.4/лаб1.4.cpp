#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    srand((int)time(0));
    int n, k = 0, m = 0;
    cout << "Введите n: "; cin >> n;

    double* b = new double[n];

    for (int i = 0; i < n; i++)
    {
        b[i] = rand() % 21 - 10;
        if (b[i] < 0) k++;
        cout << b[i] << " ";
    }

    double* C = new double[k];

    for (int i = 0; i < n; i++)
        if (b[i] < 0) C[m++] =  b[i];

    cout << "\nМассив\n";
    for (int i = 0; i < m; i++)
        cout << C[i] << " ";

    for (int i = 0; i < k; ++i)
    {
        int pos = i;
        double tmp = C[i];
        for (int j = i + 1; j < k; ++j)
            if (C[j] < tmp) { pos = j;tmp = C[j]; }
        C[pos] = C[i];
        C[i] = tmp;
    }

    cout << "\nОтсортированный массив:\n";
    for (int i = 0; i < m; i++)
        cout << C[i] << " ";
    cout << endl;

    delete[]b;
    delete[]C;
    system("pause");
    return 0;
}
