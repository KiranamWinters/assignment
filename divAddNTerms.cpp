#include <iostream>

using namespace std;

int main()
{

	int input;
	float sum = 0;
	cout << "Enter the number of n terms: ";
	cin >> input;
	for (int i = 1; i <= input; i++)
	{
		sum += 1.0 / i;
	}
	cout << "Sum of N terms is: " << sum;
	return 0;
}
