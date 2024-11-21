#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100000; // максразмер стека и резп
    int stack[MAX_SIZE];        // стек в виде массива
    int stack_top = -1;         // индекс верхнего элемента стека 
    int results[MAX_SIZE];      // массив для  ответов
    int result_count = 0;       // колвоо ответов

    int operations_count;
    cin >> operations_count;

    for (int operation_index = 0; operation_index < operations_count; ++operation_index) {
        char operation;
        cin >> operation;

        if (operation == '1') { // добавление в стек
            int value;
            cin >> value;
            stack[++stack_top] = value;
        }
        else if (operation == '2') { //  удаление из стека
            if (stack_top >= 0) {
                --stack_top;
            }
        }

        // Сохранение результата
        if (stack_top == -1) {
            results[result_count++] = -1; // пуст
        }
        else {
            results[result_count++] = stack[stack_top]; // верхний элемент
        }
    }

    for (int i = 0; i < result_count; ++i) {
        cout << results[i] << '\n';
    }

    return 0;
}
