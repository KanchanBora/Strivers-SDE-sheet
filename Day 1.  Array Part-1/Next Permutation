#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
        int l,k;
        for(k= n-2;k>=0;k--)
        {
            if(permutation[k]<permutation[k+1])
            {
                break;
            }
        }

        if(k<0)
        {
            reverse(permutation.begin(),permutation.end());
            return permutation;
        }
        
        for(l= n-1; l>k; l--)
        {
            if(permutation[l]> permutation[k])
            {
                 swap(permutation[k],permutation[l]);
                  break;
            }
        }
        reverse(permutation.begin()+k+1,permutation.end());
    return permutation;
}
