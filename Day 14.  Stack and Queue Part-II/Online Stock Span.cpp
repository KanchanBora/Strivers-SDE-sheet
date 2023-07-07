#include <bits/stdc++.h> 
vector<int> findSpans(vector<int> &price) {
    // Write your code here.
    vector<int>ans;
    stack<pair<int,int>>s; //price and days
    
    for(auto p: price)
    {
        int days=1;
        while(!s.empty() && s.top().first<= p)
        {
            days+= s.top().second;
            s.pop();
        }
        s.push({p,days});
        ans.push_back(days);
    }
    return ans;  
}
