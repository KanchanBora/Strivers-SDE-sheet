#include<bits/stdc++.h>
int solve( string & a, string & b, int i, int j, vector<vector<int>> & dp)
     {
        if(i== a.length())
            return 0;

        if(j== b.length())
            return 0;

        if(dp[i][j]!=-1)
            return dp[i][j];

        int ans=0;
        if(a[i]==b[j])
        {
            ans= 1+ solve(a, b, i+1, j+1, dp);
        }
        else
        {
            ans= max(solve(a, b, i+1, j, dp), solve(a, b, i, j+1, dp));
        }
    return dp[i][j]= ans;
}

int lcs(string a, string b)
{
	//Write your code here
	 vector<vector<int>>dp(a.size(), vector<int>(b.size(),-1));
        return solve(a, b, 0,0, dp);
}


    
