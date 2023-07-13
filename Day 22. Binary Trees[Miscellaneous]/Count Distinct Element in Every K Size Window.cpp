#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    // Write your code here
	unordered_map<int,int> m;
    vector<int> v;
    for(int i = 0;i<k;i++){
        m[arr[i]]++;
    }
    v.push_back(m.size());
   
    for(int i = k;i<arr.size();i++){
       
        m[arr[i-k]]--;
   
        if( m[arr[i-k]] == 0) {
         
            m.erase( arr[i-k]);
           
        }
        m[arr[i]]++;
        v.push_back(m.size());
    }
   
    return v;
}

