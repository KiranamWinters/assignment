#include <iostream>

// replaces LOG(x) with cout<<x<<endl
#define LOG(x) cout << x << endl

using namespace std;

// function that returns the factorial, calculated using recursion
// In recursion the function is called over and over again and the value of parameter n is set to decrement each time the function is called, Till it reaches 1 by which point the program return a 1
int factoWR(int n)
{
	if (n == 0 | n == 1)
	{
		return 1;
	}
	else
	{
		return n * factoWR(n - 1);
	}
}

// function that return the factorial, calculated using iteration
int factoWI(int n)
{

	int result = 1;

	for (int i = n; i > 0; i--)
	{
		result *= i;
	}

	return result;
}

int main()
{
	int n = 10;
	cout << "Factorial result using Recursion" << factoWR(n) << endl;
	cout << "Factorial result using Iteration" << factoWI(n) << endl;

	return 0;
}
