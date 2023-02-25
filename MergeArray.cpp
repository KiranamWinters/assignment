#include <iostream>

using namespace std;

int main()
{
    // first array declaration and entry
    int nElement, n;
    cout << "How many element do you want?" << endl;
    cin >> nElement;
    int *array1 = new int[nElement];
    int i, k;
    cout << "Enter " << nElement << " Elements" << endl;
    for (i = 0; i < nElement; i++)
    {
        cout << "Element no ----> " << i + 1 << endl;
        cin >> array1[i];
    }

    // second array declaration and entry
    int kElement;
    cout << endl;
    cout << "How many Element do you want: " << endl;
    cin >> kElement;
    int *array2 = new int[kElement];
    cout << "Enter " << kElement << " no of elements" << endl;
    for (k = 0; k < kElement; k++)
    {
        cout << "Element no ----> " << k + i + 1 << endl;
        cin >> array2[k];
    }

    // Creation and merging of two arrays
    int *mergedArray = new int[nElement + kElement];
    for (n = 0; n < i; n++)
    {
        mergedArray[n] = array1[n];
    }

    for (n = i; n < nElement + kElement; n++)
    {
        mergedArray[n] = array2[n - i];
    }

    cout << endl;
    cout << "Total number of element: " << nElement + kElement << endl;
    for (int x = 0; x < nElement + kElement; x++)
    {
        cout << mergedArray[x] << endl;
    }

    // Deletion of arrays
    delete[] array1;
    delete[] array2;
    delete[] mergedArray;
}