#include <iostream>
using namespace std;

int main()
{
    int v, W;
    cin >> v >> W;
    float x = ((4 * v) - W) / 2;
    if (W >= 2 && W % 2 == 0 && v < W)
    {
        cout << "TW=" << x << " FW=" << v-x;
    }
    else
    {
        cout << "INVALID INPUT";
    }
    return 0;
}