#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, string> dictionary; // Словарь для хранения пар "ключ-значение"
    const int MAX_QUERIES = 100000; // Максимальное количество запросов
    const int MAX_STRING_LENGTH = 100; // Максимальная длина строки
    char results[MAX_QUERIES][MAX_STRING_LENGTH]; // Массив для хранения ответов
    int result_count = 0; // Счетчик ответов

    int query_count;
    cin >> query_count;

    for (int query_index = 0; query_index < query_count; ++query_index) {
        char operation[MAX_STRING_LENGTH];
        cin >> operation;

        if (operation[0] == '1') { // Добавление в словарь
            char key[MAX_STRING_LENGTH], value[MAX_STRING_LENGTH];
            cin >> key >> value;
            dictionary[key] = value;
        }
        else if (operation[0] == '2') { // Поиск значения по ключу
            char search_key[MAX_STRING_LENGTH];
            cin >> search_key;

            auto iterator = dictionary.find(search_key);
            if (iterator != dictionary.end()) {
                snprintf(results[result_count], MAX_STRING_LENGTH, "%s", iterator->second.c_str());
            }
            else {
                snprintf(results[result_count], MAX_STRING_LENGTH, "-1");
            }
            result_count++;
        }
    }

    for (int index = 0; index < result_count; ++index) {
        cout << results[index] << '\n';
    }

    return 0;
}
