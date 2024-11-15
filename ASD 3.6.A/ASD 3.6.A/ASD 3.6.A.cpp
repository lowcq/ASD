#include <iostream>
#include <vector>

using namespace std;

// Функция для разбиения Ломуто
int partitionLomuto(vector<int>& arr, int small, int large)
{
    // Опорный элемент
    int p = arr[small];
    int i = small;

    for (int j = small + 1; j <= large; ++j)
    {
        if (arr[j] < p) 
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[small], arr[i]);
    return i;
}

// Основная функция для чтения входных данных и вызова разбиения
int main()
{
    // Ввод размера массива
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    vector<int> arr(size);

    // Ввод элементов массива
    cout << "Введите элементы массива: " << endl;
    for (int& x : arr) 
    {
        cin >> x;
    }

    //сортируем 
    int p = partitionLomuto(arr, 0, size - 1);

    // вывод рез
    for (const auto& x : arr) {
        cout << x << ' ';
    }
    cout << endl;

    return 0;
}