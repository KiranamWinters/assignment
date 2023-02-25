#include <iostream>
#include <conio.h>

using namespace std;

// prints even numbers to console
void printEven(int *arr, int size)
{
	cout << "Even numbers are:- " << endl;
	for (int i = 0; i < 3; i++)
	{
		// printing if array is divisable by 2, if it is print it to console
		if (arr[i] % 2 == 0)
		{
			cout << arr[i] << endl;
		}
	}
}
// printing odd number to console
void printOdd(int *arr, int size)
{
	cout << "Odd numbers are:- " << endl;
	for (int i = 0; i < size; i++)
	{
		// checking if array is divisable by 2 if not , print it to console
		if (arr[i] % 2 != 0)
		{

			cout << arr[i] << endl;
		}
	}
}

// printing max and min elements in an array
void maxMin(int *arr, int size)
{
	int max = arr[0];
	int min = arr[0];
	// loop that changes the max and min variable when it finds a value bigger/smaller than its current value;
	for (int i = 0; i < size; i++)
	{
		// changes value of max if the current element is bigger than the current value of max.
		if (arr[i] > max)
		{
			max = arr[i];
		}
		// changes value of min if the current element is bigger than the current value of min.
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Maximum element : " << max << endl;
	cout << "Minimum element : " << min << endl;
}
// return a integer pointer pointing to the first element in array
// n is the number of elements
int *makeArray(int n)
{
	cout << "Input Starts now: " << endl;
	// heap/runtime allocation
	int *arr = new int[n];
	// loop for taking input
	for (int i = 0; i < n; i++)
	{
		// taking input
		cin >> arr[i];
	}
	return arr;
}
// function that prints average value from the array.
void average(int *arr, int size)
{
	float avg = 0;
	for (int i = 0; i < size; i++)
	{
		avg += arr[i];
	}
	cout << "Sum of all element: " << avg << endl;
	avg = avg / size;
	cout << "The average is: " << avg << endl;
}
// function to remove array from array.
void removeElement(int *arr, int &size, int index)
{
	// loop that displaces and removes element
	for (int i = index; i < size; i++)
	{

		arr[i] = arr[i + 1];
	}
	arr[size - 1] = '\0';
	size = size - 1;
}
// function to remove repeated elements
void removeDublicate(int *arr, int &size)
{
	// nested loop that compares each element to all the other elements, and if both of them are the same number
	// it removes element using the previously defined removeELement function.
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] == arr[j] && i != j)
			{
				removeElement(arr, j, size);
			}
		}
	}
}
// a function that prints all element in console
void printElement(int *arr, int size)
{
	// simple loop to print array to console
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

// reverses the element and prints it
void printReverseElement(int *arr, int size)
{
	// backwardm iteration
	for (int i = size; i > 0; i--)
	{
		cout << arr[i] << endl;
	}
}

// function to print options
void printOptions()
{
	cout << "Here are Keys and there corresponding function" << endl;
	cout << "0 : Show Array" << endl;
	cout << "1 : Take Array" << endl;
	cout << "2 : Sum(all elements) and average" << endl;
	cout << "3 : Even values" << endl;
	cout << "4 : Odd values" << endl;
	cout << "5 : Max/min element" << endl;
	cout << "6 : Remove Element using Index" << endl;
	cout << "7 : Remove Dublicates" << endl;
	cout << "8 : Exit" << endl;
	cout << "9 : Print in reverse" << endl;
	cout << "Your choice: ";
}
int main()

{
	// variable that controls the start and stop of loop
	bool loop = true;
	// loop that runs until break conditon is met
	while (loop == true)
	{
		printOptions();
		// initialzing the array
		int *array;
		int choice;
		// pauses the loop to ask for input
		cin >> choice;
		// switch-case that implents all the defined functions
		switch (choice)
		{
		case 1:
			int n;
			cout << "Number of element in Array: ";
			cin >> n;
			array = makeArray(n);
			break;
		case 2:
			average(array, n);
			getch();
			break;
		case 3:
			printEven(array, n);
			getch();
			break;
		case 4:
			printOdd(array, n);
			getch();
			break;
		case 5:
			maxMin(array, n);
			getch();
			break;
		case 6:
			int index;
			cout << "Which element would you like to remove: " << endl;
			cin >> index;
			removeElement(array, n, index);
			break;
		case 7:
			removeDublicate(array, n);
			break;
		case 8:
			loop = false;
			break;
		case 9:
			printReverseElement(array, n);
			break;
		case 0:
			printElement(array, n);
			getch();
			break;
		}
	}
}
