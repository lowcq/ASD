#include <iostream>
using namespace std;

const int MAX_SIZE = 100000; // макс размер массива

int main() {
    int q;
    cin >> q;

    int deq[MAX_SIZE]; // массив для хранения элементов
    int answer[MAX_SIZE]; // массив для хранения результатов
    int front = 0, back = 0; // указатели на начало и конец очереди

    for (int i = 0; i < q; ++i) {
        int query;
        cin >> query;

        if (query == 1) {
            int x;
            cin >> x;
            deq[back++] = x; // добавляет в очередь
        }
        else if (query == 2) {
            if (front < back) {
                front++; //  удаляет из очереди
            }
        }

        if (front == back) {
            answer[i] = -1;
        }
        else {
            answer[i] = deq[front];
        }
    }

    for (int i = 0; i < q; ++i) {
        cout << answer[i] << endl;
    }

    return 0;
}
