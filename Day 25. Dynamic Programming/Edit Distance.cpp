int solve(string & a , string & b, int i, int j, vector<vector<int>>& dp)
     {
         if(i==a.length())
            return b.length()-j;

        if(j== b.length())
            return a.length()-i;

        if(dp[i][j]!=-1)
            return dp[i][j];

        int ans=0;
        if(a[i]==b[j])
        {
            return solve(a, b, i+1,j+1, dp);
        }
        else
        {
            int insertans= 1+solve(a, b, i, j+1, dp);
            int deleteans= 1+ solve(a, b, i+1, j, dp);
            int replaceans= 1+solve(a, b, i+1, j+1, dp);
            ans= min(insertans, min(deleteans, replaceans));
        }
        return dp[i][j]=ans;
}

int editDistance(string str1, string str2)
{
    //write you code here
    vector<vector<int>>dp(str1.length(), vector<int>(str2.length(), -1));
        return solve(str1, str2, 0,0,dp);
}
