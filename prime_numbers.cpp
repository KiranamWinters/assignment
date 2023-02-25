#include <iostream>

using namespace std;

// returns true if given number is prime, otherwise returns false
bool isPrime(int number)
{

	for (int i = number - 1; i > 1; i--)
	{
		if (number % i == 0)
		{
			return false;
			break;
		}
		else if (i == 2 and number % i != 0)
		{
			return true;
		}
	}
}

void isPrime()
{
	for (int i = 100; i > 1; i--)
	{
		if (isPrime(i))
		{
			cout << i << endl;
		}
	}
}
int main()
{
	if (isPrime(8))
	{
		cout << "true";
	}
	else
	{
		cout << "false" << endl;
	}

	isPrime();
	cin.get();
	return 0;
}
