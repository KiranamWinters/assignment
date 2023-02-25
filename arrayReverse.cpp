#include <iostream>

using namespace std;
// accepting all data types
template <typename type>
void reverseArray(type *arr, int size)
{
    int temp[size];
    // copying parameter array into a temporary array
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    // assigning the array in the reverse order
    // i.e when i = 0 and size = 12| arr[0] = arr[12-0-1]
    // arr[0] gets assgined the value of arr[11]
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[size - i - 1];
    }
}

int main()
{
    int arr[12] = {12, 31, 31, 32, 32, 21, 3, 12, 31, 23, 21, 42};
    int size = sizeof(arr) / sizeof(int);

    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
