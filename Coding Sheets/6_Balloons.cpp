#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    char arr[50];
    if (N >= 0 && N <= 3)
    {
        cout << "Invalid Input";
    }

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0)
        {
            cout << arr[i];
            break;
        }
    }
    return 0;
}