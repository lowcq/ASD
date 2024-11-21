#include <iostream>
using namespace std;

const int MAX_STOP = 1000; // Максимальное количество остановок

int main() {
    int n, m; // Количество остановок и маршрутов
    cin >> n >> m;

    int adjMatrix1[MAX_STOP][MAX_STOP] = { 0 }; // Матрица смежности для первого графа
    int adjMatrix2[MAX_STOP][MAX_STOP] = { 0 }; // Матрица смежности для второго графа

    // Обработка маршрутов
    for (int i = 0; i < m; ++i) {
        int k; // Количество остановок на маршруте
        cin >> k;

        int route[MAX_STOP]; // Массив для хранения остановок маршрута
        for (int j = 0; j < k; ++j) {
            cin >> route[j]; // Записываем остановки маршрута
        }

        // Заполнение первой матрицы смежности (связь между соседними остановками на маршруте)
        for (int j = 0; j < k - 1; ++j) {
            adjMatrix1[route[j] - 1][route[j + 1] - 1] = 1; // Связь от j к j+1
            adjMatrix1[route[j + 1] - 1][route[j] - 1] = 1; // Связь от j+1 к j (двусторонняя связь)
        }

        // Заполнение второй матрицы смежности (связь между любыми остановками на одном маршруте)
        for (int j = 0; j < k; ++j) {
            for (int l = j + 1; l < k; ++l) {
                adjMatrix2[route[j] - 1][route[l] - 1] = 1;
                adjMatrix2[route[l] - 1][route[j] - 1] = 1;
            }
        }
    }

    // Печать первой матрицы смежности
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == n - 1) {
                cout << adjMatrix1[i][j]; // Без пробела после последнего элемента
            }
            else {
                cout << adjMatrix1[i][j] << " "; // Пробелы между элементами
            }
        }
        cout << endl;
    }

    // Печать второй матрицы смежности
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == n - 1) {
                cout << adjMatrix2[i][j]; // Без пробела после последнего элемента
            }
            else {
                cout << adjMatrix2[i][j] << " "; // Пробелы между элементами
            }
        }
        cout << endl;
    }

    return 0;
}
