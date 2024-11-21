#include <iostream>
using namespace std;

// для вычисления периода Пизано
long long getPisanoPeriod(long long m) 
{
    long long previous = 0, current = 1, next;
    for (long long i = 0; i < m * m; ++i) {
        next = (previous + current) % m;
        previous = current;
        current = next;
        // в случ нового циклп
        if (previous == 0 && current == 1)
            return i + 1;
    }
    return 0; 
}

// для вычисления n-го числа Фибоначчи по модулю m
long long getFibonacciModulo(long long n, long long m) 
{
    if (n <= 1)
        return n;

    long long previous = 0, current = 1, next;
    for (long long i = 2; i <= n; ++i) {
        next = (previous + current) % m;
        previous = current;
        current = next;
    }
    return current;
}

int main() 
{
    long long n, m;
    cin >> n >> m;

    // период Пизано
    long long pisanoPeriod = getPisanoPeriod(m);

    // остаток от деления n на период
    long long reducedN = n % pisanoPeriod;

    long long result = getFibonacciModulo(reducedN, m);

    cout << result << endl;

    return 0;
}


////
//int fibonacchi(int n)
//{
//	if (n <= 1)
//	{
//		return n;
//	}
//
//	int a = 0, b = 1, result;
//
//	for (int i = 2; i <= n; ++i)
//	{
//		result = a + b;
//		a = b;
//		b = result;
//	}
//	return result;
//}
//
//
//int main()
//{
//
//	setlocale(LC_ALL, "Rus");
//
//	int n;
//	cout << "Введите число от 0 до 45" << endl;
//	cin >> n;
//
//	fibonacchi(n);
//
//	int m;
//	cout << "Введите число m" << endl;
//	cin >> m;
//
//	int result;
//	result = fibonacchi(n) / m;
//	cout << result;
//
//	return 0;
//}