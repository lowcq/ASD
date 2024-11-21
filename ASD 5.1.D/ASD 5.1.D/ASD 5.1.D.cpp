#include <iostream>
using namespace std;

// для вычислениячисла Фибоначчи
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
    long long n;
    cin >> n;

    int reducedIndex = (n + 2) % 60;

    int lastDigit = getFibonacciModulo(reducedIndex, 10);

    int result = (lastDigit - 1 + 10) % 10;

    cout << result << endl;

    return 0;
}
