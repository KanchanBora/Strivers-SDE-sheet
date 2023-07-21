#include<bits/stdc++.h>
int cutRod(vector<int> &price, int n)
{
    // Write your code here.
    vector<int>prev(n+1,0);
    vector<int>curr(n+1,0);

    for(int N=0;N<=n; N++)
    {
        prev[N]= N *price[0];
    }
    for(int ind=1;ind<n; ind++)
    {
        for(int N=0;N<=n; N++)
        {
            int notake= 0+prev[N];
            int take= INT_MIN;
            int rodlen= ind +1;
            if (rodlen<= N)
                {
                    take= price[ind]+ prev[N- rodlen];
                }
            prev[N]= max(take, notake);
        }
       
    }
    return prev[n];
}

    /*int dp[n];
    dp[0]=price[0];
    for(int i=1;i<n;i++)
    {
        int m=price[i];
        for(int j=i-1;j>=0;j--)
        {
            m=max(price[i-j-1]+dp[j],m);
        }
        dp[i]=m;
    }
    return dp[n-1];
    */

