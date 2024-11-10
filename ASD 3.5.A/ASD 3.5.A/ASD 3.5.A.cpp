#include <iostream>
#include <algorithm> // для сортировки

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int size;

    cout << "Введите размер массива: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Введите элемент массива: " << endl;

    for (int i = 0; i < size; ++i)
    {
        cout << "элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Введенный массив: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + size);
    cout << "Отсортированный массив: ";

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}

/* Вариант для хендбук:

#include <iostream>
#include <algorithm> // для сортировки

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int size;

    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr + size);

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
} */