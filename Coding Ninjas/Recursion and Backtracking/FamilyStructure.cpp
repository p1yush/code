string solve(int n, long long k)
{
   if(n == 1 || k == 1)
       return "Male";
   long long par = (k + 1) / 2;
   string ans = solve(n - 1, par);
   if(k == 2 * par - 1)
      return ans;    
   else {
       if(ans=="Female")
           return "Male";
   }
   return "Female";
}

string kthChildNthGeneration(long long n, long long int k)
{
return solve(n, k);
}