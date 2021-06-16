#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int* array, dim;

    cout << "Введите колличество элементов в массиве:";
    cin >> dim;

    array = new int[dim];

    for (int i = 0; i < dim; i++)
    {
        cout << "Введите " << (i + 1) << " элемент ";
        cin >> array[i];

        if (array[i] == 0) array[i] = 1;
    }

    cout << "\n\n";

    for (int i = 0; i < dim; i++) 
        cout << array[i] << " ";

    cout << endl;


    delete[] array;
    system("pause");
}
