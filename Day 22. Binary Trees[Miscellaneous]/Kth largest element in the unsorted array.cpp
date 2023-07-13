#include<bits/stdc++.h>
int kthLargest(vector<int>& arr, int size, int K)
{
	// Write your code here.

    /*sort(arr.begin(),arr.end());
    return arr[size-K];*/

    priority_queue<int, vector<int>, greater<int>>pq;
    for(auto el:arr)
    {
        pq.push(el);
        if(pq.size()> K){
             pq.pop();
        } 
    }
        return pq.top();
}
