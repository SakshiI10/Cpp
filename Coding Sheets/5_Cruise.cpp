#include <iostream>
using namespace std;

int main()
{
    int T;
    int a1[25], a2[25], i, j;
    cin >> T;
    for(i=0; i<T; i++){
        scanf("%d", &a1[i]);
    }
    for(j=0; j<T; j++){
        scanf("%d", &a2[j]);
    }

    int k=0, sum=0, psum=0;
    while(k<T){
        sum = sum + (a1[k] - a2[k]);;
        k++;
        if(sum>psum){
            psum=sum;
        }
    }
    cout << psum;
    return 0;
}