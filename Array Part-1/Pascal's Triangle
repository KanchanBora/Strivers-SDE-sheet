#include <bits/stdc++.h>
vector<long long> generate_row(long long r)
{
  long long ans=1;
  vector<long long> arr;
  arr.push_back(1);

  for(int i=1; i<r; i++)
  {
    ans= ans*( r-i);
    ans=ans/i;
    arr.push_back(ans);
  }
  return arr;
}

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long>>ans;
  for(int i=1;i<=n; i++)
  {
    ans.push_back(generate_row(i));
  }
  return ans;
}
