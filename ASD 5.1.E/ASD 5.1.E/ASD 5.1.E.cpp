#include <iostream>
using namespace std;

// вычисление n-го числа Фибоначчи по модулю m
int getFibonacciModulo(long long n, int m) 
{
    if (n <= 1)
        return n;

    int previous = 0, current = 1, next;
    for (long long i = 2; i <= n; ++i) 
    {
        next = (previous + current) % m;
        previous = current;
        current = next;
    }
    return current;
}

int main() 
{
    long long m, n;
    cin >> m >> n;

    // индексы по модулю периода Пизано
    int reducedN = (n + 2) % 60;
    int reducedM = (m + 1) % 60;

    //  F_{(n + 2) % 60} и F_{(m + 1) % 60}
    int lastDigitN = getFibonacciModulo(reducedN, 10);
    int lastDigitM = getFibonacciModulo(reducedM, 10);

    int result = (lastDigitN - lastDigitM + 10) % 10;

    cout << result << endl;

    return 0;
}
