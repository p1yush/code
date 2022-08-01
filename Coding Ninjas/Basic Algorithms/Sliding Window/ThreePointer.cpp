int threePointer(vector<int>& X, vector<int>& Y, vector<int>& Z)
{   
    int ans = 10000;   
    int p1 = 0, p2 = 0, p3 = 0;    
    while(p1 < X.size() && p2 < Y.size() && p3 < Z.size())    
    {        
        ans = min(ans, max(abs(X[p1] - Y[p2]), max(abs(Y[p2] - Z[p3]), abs(Z[p3 ]- X[p1])))); 
        if(X[p1] <= Y[p2] and X[p1] <= Z[p3])               
            p1++;               
        else if(Y[p2] <= X[p1] and Y[p2] <= Z[p3])       
            p2++;           
        else           
            p3++;        
    }   
    return ans;   
}
