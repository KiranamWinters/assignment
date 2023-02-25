#include <iostream>

using namespace std;

int main()
{
	cout << "Enter Number: ";
	int number;
	cin >> number;
	cout << "Factors are: " << endl;
	for (int i = number - 1; i > 1; i--)
	{
		if (number % i == 0)
		{
			cout << i << endl;
		}
	}
}
