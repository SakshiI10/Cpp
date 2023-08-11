//How to sort an array of dates in C++.

#include <iostream>
using namespace std;

int main()
{
    Date arr[] = {{20,  1, 2014},
                  {25,  3, 2010},
                  { 3, 12, 1676},
                  {18, 11, 1982},
                  {19,  4, 2015},
                  { 9,  7, 2015}};
    int n = sizeof(arr)/sizeof(arr[0]);
    return 0;
}