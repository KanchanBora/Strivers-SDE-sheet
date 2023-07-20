#include <bits/stdc++.h>
using namespace std;

long countWaysToMakeChange(int *denominations, int n, int value)
{
    //Write your code here
    
    vector<long>prev(value+1,0);
    vector<long>curr(value+1,0);

    for(int t=0;t<= value; t++)
    {
        prev[t]=(t % denominations[0] ==0 );
    }

    for(int ind=1; ind<n; ind++)
    {
        for(int t=0;t<= value; t++)
        {
            long notake= prev[t];
            long take= 0;
            if(denominations[ind]<= t)take= curr[t- denominations[ind]];
            curr[t]= take + notake;
        }
        prev= curr;
    }
    return prev[value];
}

