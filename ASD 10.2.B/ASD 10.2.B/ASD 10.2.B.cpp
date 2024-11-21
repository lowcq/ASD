#include <iostream>
using namespace std;

const int MAX_N = 1000; // макс количество строк
const int MAX_M = 1000; // макс количество столбцов

int main() {
    int n, m;
    cin >> n >> m;

    int room[MAX_N + 2][MAX_M + 2]; // массив для комнат 

    for (int i = 0; i < n + 2; ++i) {
        for (int j = 0; j < m + 2; ++j) {
            room[i][j] = -1; //  -1 (стены)
        }
    }

    for (int i = 1; i <= n; ++i) {
        char c;
        for (int j = 1; j <= m; ++j) {
            cin >> c;
            if (c == '.') {
                room[i][j] = 0; // свободное пространство
            }
        }
    }

    // направление движения
    const int drow[] = { -1, 0, 1, 0 };
    const int dcol[] = { 0, 1, 0, -1 };

    // изнаачальная позиция робота
    int start_row, start_col;
    cin >> start_row >> start_col;

    // колво шагов
    int amount_moves;
    cin >> amount_moves;

    // движения робота
    char* moves = new char[amount_moves];
    for (int i = 0; i < amount_moves; ++i) {
        cin >> moves[i];
    }

    int answer = 1; 

    room[start_row][start_col] = 1;

    int robot_row = start_row;
    int robot_col = start_col;

    int direction = 0; 


    for (int i = 0; i < amount_moves; ++i) {
        char step = moves[i];

        if (step == 'R') {
            direction = (direction + 1) % 4; //  направо
        }
        else if (step == 'L') {
            direction = (direction - 1 + 4) % 4; //  налево
        }
        else if (step == 'M') {
            //  вперед
            int next_row = robot_row + drow[direction];
            int next_col = robot_col + dcol[direction];

            if (room[next_row][next_col] != -1) { // если не в стене
                if (room[next_row][next_col] == 0) { // если клетка еще не посещена
                    room[next_row][next_col] = 1;
                    answer++;
                }

                // Обновляем позицию робота
                robot_row = next_row;
                robot_col = next_col;
            }
        }
    }

    // Выводим ответ
    cout << answer << endl;

    return 0;
}
