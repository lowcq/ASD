#include <iostream>
#include <algorithm>
#include <vector>

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

    int p = arr[0];
    vector<int> left;
    vector<int> right;

    for (int i = 1; i < size; ++i) {
        if (arr[i] < p) {
            left.push_back(arr[i]);
        }
        else {
            right.push_back(arr[i]);
        }
    }

    sort(left.begin(), left.end());

    cout << "Отсортированный массив: ";

    for (int num : left) {
        cout << num << " ";
    }
    cout << p << " "; // опорное число возвращается на своё место
    for (int num : right) {
        cout << num << " ";
    }
    cout << endl;
    cout << endl;

    delete[] arr;
    return 0;
}