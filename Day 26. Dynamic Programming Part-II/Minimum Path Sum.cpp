#include <bits/stdc++.h> 
int minSumPath(vector<vector<int>> &grid) {
    int n = grid.size();
    int m = grid[0].size(); 

    vector<vector<int> > dp(n, vector<int>(m, 0));
    vector<int>prev(m,0);
    for(int i=0;i<n; i++)
    {
        vector<int>curr(m,0);
    for (int j = 0; j < m; j++)
    {
        if(i==0 && j==0 )
            curr[j]= grid[i][j];
        else {
          int up = grid[i][j];
          if (i > 0)
            up += prev[j];
          else
            up += 1e9;

          int left = grid[i][j];
          if (j > 0)
            left += curr[j - 1];
          else
            left += 1e9;

          curr[j] = min(left, up);
        }
    }
    prev = curr;
}
return prev[m - 1];
}
