#include <iostream>
#include <algorithm> // для сортировки
#include <vector> // для управления памятью

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int count_posl;
    int total_size = 0;

    cin >> count_posl;

    if (count_posl <= 20 && count_posl > 0) {

        vector<int> combinedArray; // используем вектор для автоматического управления памятью

        // Ввод и обработка каждой последовательности
        for (int i = 0; i < count_posl; ++i)
        {
            int size;
            cin >> size;
            total_size += size;

            vector<int> arr(size);

            for (int j = 0; j < size; ++j)
            {
                cin >> arr[j];
            }

            sort(arr.begin(), arr.end());

            combinedArray.insert(combinedArray.end(), arr.begin(), arr.end()); // добавляем в общий массив
        }

        sort(combinedArray.begin(), combinedArray.end());

        for (int i = 0; i < total_size; ++i)
        {
            cout << combinedArray[i] << " ";
        }
        cout << endl;

    }
    else if (count_posl == 0) {
        cout << 0 << endl;
        return 0;
    }
    else {
        return 1;
    }

    return 0;
}
