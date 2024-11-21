#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int size;
    cin >> size;

    vector<int> numbers(size);
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    int left_index = 0;
    int right_index = 1;
    int temp_index = 0;

    // Поиск минимальной разности
    for (int i = 2; i < size; ++i) {
        int diff = numbers[i] - numbers[temp_index];
        int prev_diff = numbers[right_index] - numbers[left_index];

        if (numbers[i] > numbers[right_index] || diff > prev_diff) {
            if (numbers[right_index] < numbers[left_index]) {
                left_index = right_index;
            }

            if (numbers[left_index] > numbers[temp_index]) {
                left_index = temp_index;
            }
            right_index = i;
        }
        else if (numbers[i] < numbers[left_index] && numbers[i] < numbers[temp_index]) {
            temp_index = i;
        }
    }

    cout << left_index + 1 << ' ' << right_index + 1 << '\n';

    // Поиск максимальной разности
    left_index = 1;
    right_index = 0;
    int temp_max_index = 0;

    for (int i = 2; i < size; ++i) {
        int diff_max = numbers[temp_max_index] - numbers[i];
        int prev_max_diff = numbers[right_index] - numbers[left_index];

        if (numbers[i] < numbers[left_index] || diff_max > prev_max_diff) {
            if (numbers[left_index] > numbers[right_index]) {
                right_index = left_index;
            }

            if (numbers[right_index] < numbers[temp_max_index]) {
                right_index = temp_max_index;
            }
            left_index = i;
        }
        else if (numbers[i] > numbers[right_index] && numbers[i] > numbers[temp_max_index]) {
            temp_max_index = i;
        }
    }

    cout << right_index + 1 << ' ' << left_index + 1 << '\n';

    return 0;
}
