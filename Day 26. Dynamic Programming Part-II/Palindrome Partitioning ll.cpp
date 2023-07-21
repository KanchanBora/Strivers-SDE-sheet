#include<bits/stdc++.h>

bool check(int begin,int end,string s){
   while(begin<end){
       if(s[begin]!=s[end]){
           return false;
       }
       begin++;
       end--;
   }
   return true;
}

int palindromePartitioning(string str) {
   int n= str.size();
   vector<int>dp(n+1,0);
   dp[n]=0;

   for(int i=n-1; i>=0; i--)
   {
       int mincost= INT_MAX;
       for(int j=i;j<n;j++)
       {
           if(check(i,j,str))
           {
               int cost= 1+dp[j+1];
               mincost= min(mincost,cost);
           }
       }
       dp[i]= mincost;
   }
return dp[0]-1;
}
