#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a; 
    int n; 

    cout << "Введите число от 1 до 7" << endl;
    cin >> a;
    n = a;
    if ((a > 1) && (a <= 7))
    {
        while (n > 1)
        {
            n--;
            a = a * n;
        }
        cout << "Число перестановок равно : " << a << endl;
    }
    else if (a == 1)
    {
        cout << "Число перестановок равно : " << a << endl;
    }
    else
    {
        cout << "Число введено неверно" << endl;
    }
}

/* для хендбук:

int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    int n;
    cin >> a;
    n = a;
    if ((a > 1) && (a <= 7))
    {
        while (n > 1)
        {
            n--;
            a = a * n;
        }
        cout << a << endl;
    }
    else if (a == 1)
    {
        cout << a << endl;
    }
    }

*/