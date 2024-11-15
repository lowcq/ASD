#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    // Массив для хранения последних двух значений
    int F[2] = { 0, 1 };

    // Расчет по формуле
    for (int i = 2; i <= n; ++i) {
        int next = (F[0] + F[1]) % 10; // Следующее значение по модулю 10
        F[0] = F[1];  // Перемещаем F[i-1]
        F[1] = next;  // Обновляем F[i]
    }

    return F[1];
}

int main() 
{
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите число n: ";
    cin >> n;

    cout << "Последняя цифра числа Фибоначчи F(" << n << ") равна " << fibonacci(n) << endl;

    return 0;
}

//для хендбук
/*
* #include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    // Массив для хранения последних двух значений
    int F[2] = { 0, 1 };

    // Расчет по формуле
    for (int i = 2; i <= n; ++i) {
        int next = (F[0] + F[1]) % 10; // Следующее значение по модулю 10
        F[0] = F[1];  // Перемещаем F[i-1]
        F[1] = next;  // Обновляем F[i]
    }

    return F[1];
}

int main() 
{
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}
*/