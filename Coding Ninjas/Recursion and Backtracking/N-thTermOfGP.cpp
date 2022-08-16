int M = 1e9 + 7;

long long int pow(int x, int n) {
    if(n == 0) {
        return 1;
    } long long int ansb2 = pow(x, n/2)%M;
    long long int ans = (ansb2%M * ansb2%M)%M;
    return n&1 ? (ans%M * x%M)%M : ans%M;
}

int nthTermOfGP(int N, int A, int R) {
    return (A%M * pow(R, N - 1)%M)%M;
}