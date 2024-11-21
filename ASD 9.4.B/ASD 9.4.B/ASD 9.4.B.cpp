#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 300000; // Максимальный размер массива (3 * 10^5)
    int total_elements;         // Количество элементов
    cin >> total_elements;


    if (total_elements < 1 || total_elements > MAX_SIZE) {
        cerr << "Invalid number of elements." << endl;
        return 1; 
    }

    int input_array[MAX_SIZE];   // массив для входных чисел
    int output_array[MAX_SIZE];  // массив для хранения результата
    int stack_array[MAX_SIZE];   // массив для стека значений
    int index_stack[MAX_SIZE];   // массив для индексов элементов в стеке
    int stack_top = -1;          // индекс верхнего элемента стека


    for (int i = 0; i < total_elements; ++i) {
        cin >> input_array[i];
        if (input_array[i] < 1 || input_array[i] > 300000) {
            cerr << "Invalid input value." << endl;
            return 1; 
        }
        output_array[i] = 0; 

    for (int current_index = 0; current_index < total_elements; ++current_index) {
        // снимаем элементы из стека, пока текущий элемент больше верхнего
        while (stack_top >= 0 && input_array[current_index] > stack_array[stack_top]) {
            int top_index = index_stack[stack_top];
            --stack_top;
            output_array[current_index] += output_array[top_index] + 1; // обновить счетчик
        }
        // добавл в стек
        ++stack_top;
        stack_array[stack_top] = input_array[current_index];
        index_stack[stack_top] = current_index;
    }

    for (int i = 0; i < total_elements; ++i) {
        cout << output_array[i] << " ";
    }
    cout << endl;

    return 0;
}
