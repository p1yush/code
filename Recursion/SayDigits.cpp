void convert(int n, string name[]) {
   if (n == 0)
      return;
   int digit = n % 10;
   cout << name[digit] << " ";
   convert(n / 10, name);
}

void solve() {
   string name[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
   int n;
   cin >> n;
   convert(n, name);
}
