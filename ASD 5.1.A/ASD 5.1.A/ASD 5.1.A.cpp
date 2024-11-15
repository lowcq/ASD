#include <iostream>

using namespace std;

	
int fibonacchi(int n)
{
	if (n <= 1)
	{
		return n;
	}

	int a = 0, b = 1, result;

	for (int i = 2; i <= n; ++i)
	{
		result = a + b;
		a = b;
		b = result;
	}
	return result;
}


	int main()
	{

		setlocale(LC_ALL, "Rus");

		int n;
		cout << "Введите число от 0 до 45" << endl;
		cin >> n;

		fibonacchi(n);

		cout << fibonacchi(n);

		return 0;
	}


	// для хендбука
	/*
	#include <iostream>

using namespace std;

	
int fibonacchi(int n)
{
	if (n <= 1)
	{
		return n;
	}

	int a = 0, b = 1, result;

	for (int i = 2; i <= n; ++i)
	{
		result = a + b;
		a = b;
		b = result;
	}
	return result;
}


	int main()
	{

		setlocale(LC_ALL, "Rus");

		int n;
		cout << "Введите число от 0 до 45" << endl;
		cin >> n;

		fibonacchi(n);

		cout << fibonacchi(n);

		return 0;
	}
*/