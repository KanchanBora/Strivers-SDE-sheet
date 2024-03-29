bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<bool>prev(k+1,0);
    vector<bool>curr(k+1,0);

    prev[0] =curr[0] =true;
    prev[arr[0]] = true;
    

    for(int ind=1;ind<n;ind++)
    {
        for(int target=1; target<=k; target++)
        {
            bool notake= prev[target];
            bool take= false;

            if(arr[ind]<= target)
                take= prev[target- arr[ind]];

            curr[target]= take|notake;
        }
        prev = curr;
    }
    return prev[k];
}
