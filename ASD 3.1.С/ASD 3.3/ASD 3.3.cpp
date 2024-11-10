#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n; // Нижнее число
    int k; // верхнее число
    int factorial_n; // (k+n-1)!
    int factorial_k; // k!
    int n_1; // (n-1)
    int factorial_n1; // (n-1)!
    int itog; // C

    cout << "Введите 2 (n,k) числа от 1 до 4" << endl;
    cin >> n >> k;

    factorial_k = k;
    n_1 = n - 1;
    factorial_n1 = n_1;

    if ((n > 1) && (n <= 4) && (k >= 1) && (k <= 4))
    {
        n = k + n - 1;
        factorial_n = n;

        while (factorial_n > 1)
        {
            factorial_n--;
            n = n * factorial_n;

        }

        cout << "fact k+n - 1 Равно " << n << endl;

        while (factorial_k > 1)
        {
            factorial_k--;
            k = k * factorial_k;
        }

        cout << "k! равен " << k << endl;

        while (factorial_n1 > 1)
        {
            factorial_n1--;
            n_1 = n_1 * factorial_n1;
        }

        cout << "n-1! равен " << n_1 << endl;

        itog = n / (k * n_1);
        cout << "число перестановок равно  " << itog << endl;
    }
    else if (n == 1)
    {
        itog = 1;
        cout << itog << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

/*
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n; // Нижнее число
    int k; // верхнее число
    int factorial_n; // (k+n-1)!
    int factorial_k; // k!
    int n_1; // (n-1)
    int factorial_n1; // (n-1)!
    int itog; // C

    cin >> n >> k;

    factorial_k = k;
    n_1 = n - 1;
    factorial_n1 = n_1;

    if ((n > 1) && (n <= 4) && (k >= 1) && (k <= 4))
    {
        n = k + n - 1;
        factorial_n = n;

        while (factorial_n > 1)
        {
            factorial_n--;
            n = n * factorial_n;

        }


        while (factorial_k > 1)
        {
            factorial_k--;
            k = k * factorial_k;
        }


        while (factorial_n1 > 1)
        {
            factorial_n1--;
            n_1 = n_1 * factorial_n1;
        }

        itog = n / (k * n_1);
        cout << itog << endl;
    }
    else if (n == 1)
    {
        itog = 1;
        cout << itog << endl;
    }
    else
    {

    }
}
*/
