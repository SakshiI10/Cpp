#include <iostream>
#include <algorithm>
using namespace std;

struct Height
{
    int feet;
    int inches;
};

int findMax(Height arr[], int n)
{
    // Function to convert height to inches
    auto toInches = [](const Height &h)
    {
        return h.feet * 12 + h.inches;
    };

    // Using max_element from algorithm library to find the maximum height
    auto maxElement = max_element(arr, arr + n, [&](const Height &h1, const Height &h2)
                                  { return toInches(h1) < toInches(h2); });

    // Calculating the maximum height in inches
    int maxHeight = toInches(*maxElement);
    return maxHeight;
}

int main()
{
    int n = 2;
    Height arr[] = {{1, 2}, {2, 1}};

    int result = findMax(arr, n);
    cout << "Maximum height: " << result << endl;
    return 0;
}