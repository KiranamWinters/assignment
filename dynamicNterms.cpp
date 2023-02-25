#include <iostream>

using namespace std;

int main()
{

	cout << "How many elements do you want: " << endl;
	int input, sum;
	cin >> input;
	// heap/runtime memory allocation
	int *array = new int[input];

	for (int i = 0; i < input; i++)
	{
		cout << "enter " << i + 1 << "st element: ";
		cin >> array[i];
	}
	for (int i = 0; i < input; i++)
	{
		sum += array[i];
	}
	cout << "sum of " << input << " terms are: " << sum;
	delete[] array;
	return 0;
}
