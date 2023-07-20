#include<bits/stdc++.h>

int maxIncreasingDumbbellsSum(vector<int> &rack, int n)
{   
    vector<int>dp(n,-1);
    for(int i=0;i<n;i++)
    {
        dp[i]=rack[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(rack[j]<rack[i])
                {
                    dp[i]= max(dp[i],dp[j]+rack[i]);
                }
        }
    }
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        maxi= max(maxi, dp[i]);
    }
    return maxi;
}
