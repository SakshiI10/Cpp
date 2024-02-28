long long int product(int a[], int n, long long int mod) {
    long long int product = 1;
    
    for (int i = 0; i < n; i++) {
        // Take modulo operation after each multiplication
        product = (product * a[i]) % mod;
    }
    
    return product;
}
