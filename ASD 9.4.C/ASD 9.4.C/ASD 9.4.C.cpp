#include <iostream>
using namespace std;

const int MAX_ELEMENTS = 300000; // ммаксимальный размер массива
const int MAX_VALUE = 300001;    // макс возможное значение + 1

class CustomStack {
public:
    CustomStack() : top(-1) {}

    void push(int value) {
        if (top < MAX_ELEMENTS - 1) {
            stack_data[++top] = value;
        }
    }

    int pop() {
        if (top >= 0) {
            return stack_data[top--];
        }
        return -1; // если стек пуст
    }

    bool isEmpty() const {
        return top == -1;
    }

    int topValue() const {
        if (top >= 0) {
            return stack_data[top];
        }
        return -1; // если стек пуст
    }

private:
    int stack_data[MAX_ELEMENTS];
    int top;
};

int main() {
    int num_elements, window_size;
    cin >> num_elements >> window_size;

    int input_array[MAX_ELEMENTS];
    for (int i = 0; i < num_elements; ++i) {
        cin >> input_array[i];
    }

    CustomStack main_stack;
    CustomStack temp_stack;
    long long total_sum = 0;
    int current_min = MAX_VALUE;

    // обработка первых элементов окна
    for (int i = 0; i < window_size; ++i) {
        temp_stack.push(input_array[i]);
        if (current_min > input_array[i]) {
            current_min = input_array[i];
        }
    }
    total_sum += current_min;
    current_min = MAX_VALUE;

    // обработка оставшихся элементов
    for (int i = window_size; i < num_elements; ++i) {
        if (main_stack.isEmpty()) {
            int min_in_stack = MAX_VALUE;
            while (!temp_stack.isEmpty()) {
                if (min_in_stack > temp_stack.topValue()) {
                    min_in_stack = temp_stack.topValue();
                }
                main_stack.push(min_in_stack);
                temp_stack.pop();
            }
            current_min = MAX_VALUE;
        }
        main_stack.pop();

        temp_stack.push(input_array[i]);
        if (current_min > input_array[i]) {
            current_min = input_array[i];
        }

        int min_value = current_min;
        if (!main_stack.isEmpty()) {
            min_value = min(min_value, main_stack.topValue());
        }
        total_sum += min_value;
    }

    cout << total_sum << endl;

    return 0;
}
