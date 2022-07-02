long getMaximumProfit(long *values, int n)
{
     long long count = 0;
     int sell = 0, buy = 0;
     for(int i = 1; i < n; i++) {
         if(values[i] >= values[i - 1])
            sell++;
         else {
            count += values[sell] - values[buy];
            buy = i;
            sell = i;
         }
      }
    count += values[sell] - values[buy];
    return count;
}