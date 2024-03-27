int countOfElements(int arr[], int n, int x) 
{
    vector<int> v;
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]<=x){
            count++;
        }
    }
    return count;
}