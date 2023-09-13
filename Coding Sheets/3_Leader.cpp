#include <iostream>
using namespace std;

int main()
{
    int arr[20], size, i, count = 1;
    printf("Enter size of an array: ");
    scanf("%d", &size);
    printf("Enter elements of an array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}