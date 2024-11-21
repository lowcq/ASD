#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<string> uniqueNumbers;


    int size;
    cin >> size;

    for (int i = 0; i < size; ++i) {

        char operation;
        string number;

        cin >> operation >> number;

        // есл запрос типа '1' — добавить номер в множество
        if (operation == '1') {
            uniqueNumbers.insert(number);
        }
        else if (operation == '2') {
            // существует ли номер в множестве
            if (uniqueNumbers.find(number) != uniqueNumbers.end()) {
                cout << "1\n";
            }
            else {
                cout << "0\n";
            }
        }
    }

    return 0;
}
