#include<iostream>
using namespace std;

int fib(int n)
{
	int counting=0;
	if (n == 1 || n == 2)
	{
		counting += 1;
		return 1;
	}
	else
	{
		counting += 1;
		return (fib(n - 1) + fib(n - 2));
	}
	cout << fib(n) << " " << counting << endl;
}

int fibonacci(int n)
{
	int cnt=2;

	long long* fibo = new long long[n + 1];
	fibo[0] = 1;
	fibo[1] = 1;
	for (int i = 3; i < n; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		cnt += 1;
	}
	
	cout << fibo[n]<<" "<<cnt;
	delete[] fibo;
	return fibo[n];
}
int main()
{
	int n;
	cin >> n;

	cout << "Àç±Í: " << fib(n) << endl;
	cout << "¹Ýº¹" << fibonacci(n);

	return 0;
}