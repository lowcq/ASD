#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n; // Нижнее число
    int factorial_n;
    int k; // верхнее число
    int factorial_k;
    int c;
    int rasnica_fact;
    int rasnica_fact_2;

    cout << "Введите 2 числа от 1 до 4" << endl;
    cin >> n >> k;

    factorial_n = n + k - 1;
    factorial_k = k;
    rasnica_fact = n - k;
    rasnica_fact_2 = rasnica_fact;

    if ((n > 1) && (n <= 4) && (k >= 1) && (k <= 4))
    {
        while (factorial_n > 1)
        {
            factorial_n--;
            n = (n+k-1) * factorial_n;
        }
        while (factorial_k > 1)
        {
            factorial_k--;
            k = k * factorial_k;
        }
        while (rasnica_fact_2 > 1)
        {
            rasnica_fact_2--;
            rasnica_fact = rasnica_fact * rasnica_fact_2;
        }

        cout << "Факториал числа n равен : " << n << endl;
        cout << "Факториал числа k равен : " << k << endl;
        cout << "Факториал числа rasnica_fact равен : " << rasnica_fact << endl;

        c = n / (k * rasnica_fact);
        cout << "Число сочетаний С равно : " << c << endl;
    }
    else if (n == k && n < 5 && n > 0 && k > 0)
    {
        n = 1;
        cout << "Число сочетаний равно : " << n << endl;
    }
    else
    {
        cout << "Одно из чисел введено неверно" << endl;
    }
}
