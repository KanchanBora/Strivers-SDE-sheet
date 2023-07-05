#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
   sort(intervals.begin(),intervals.end());
   vector<vector<int>> mergeIntervals;
   int n= intervals.size();
   for(int i=0; i< n; i++)
   {
        if(mergeIntervals.empty() || intervals[i][0]> mergeIntervals.back()[1])
            {
            mergeIntervals.push_back(intervals[i]);
            }
 
        else 
            {
              mergeIntervals.back()[1]= max(mergeIntervals.back()[1], intervals[i][1]);
            }
    }
        return mergeIntervals;
}
