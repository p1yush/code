long long int query(long long int n, long long int q) {
    long long x = n * 2 + 1;
    if(q == n + 1)
        return n;
    else if(q > n + 1)
        return x - q;
    else 
        return q - 1;
}