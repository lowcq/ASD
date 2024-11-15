#include <iostream>
#include "conio.h"
using namespace std;

	
int fibonacchi(int n)
{
	if (n < 2)
	{
		return n;
	}
	else
	{
		return fibonacchi(n - 2) + fibonacchi(n - 1);
	}
}


	int main()
	{

		setlocale(LC_ALL, "Rus");
		
		int n;
		cout << "Введите число от 0 до 45" << endl;
		cin >> n;

		cout << fibonacchi(n);

		return 0;
	}