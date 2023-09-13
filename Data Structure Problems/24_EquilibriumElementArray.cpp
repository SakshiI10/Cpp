// Equilibrium index of an array.
// The equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.

#include <iostream>
using namespace std;

int eind(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int leftsum = 0, rightsum = 0;
        for (int j = 0; j < i; j++)
        {
            leftsum += arr[j];
        }
        for (int j = i + 1; j < size; j++)
        {
            rightsum += arr[j];
        }
        if (leftsum == rightsum)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = eind(arr, size);
    if (element != -1)
    {
        cout << "Equilibrium Element: " << element << endl;
    }
    else
    {
        cout << "No equilibrium index found." << endl;
    }
    return 0;
}

//use int function so that it will return only one value when return function is used.