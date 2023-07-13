#include <bits/stdc++.h>

void adder(vector<int>& t,int v,int e,int x,unordered_map<int,vector<int>> con,vector<int>& vis){
    vis[x] = 1;
    t.push_back(x);

    for(int i=0;i<con[x].size();i++){
        if(!vis[con[x][i]]){
            adder(t,v,e,con[x][i],con,vis);
        }
    }
    return;
}

vector<vector<int>> depthFirstSearch(int v, int e, vector<vector<int>> &edges)
{
    vector<vector<int>> ans;
    vector<int> vis(v,0);

    unordered_map<int,vector<int>> con;
    
    for(int i=0;i<e;i++){
        int a,b;
        a = edges[i][0];
        b = edges[i][1];
        con[a].push_back(b);
        con[b].push_back(a);
    }

    for(int i=0;i<v;i++){
        if(!vis[i]){
            vector<int> t;
            adder(t,v,e,i,con,vis);
            sort(t.begin(),t.end());
            ans.push_back(t);
        }
    }
    return ans;
}
