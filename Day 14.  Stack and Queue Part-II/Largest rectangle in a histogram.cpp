 #include<bits/stdc++.h>
 int largestRectangle(vector < int > & height) {
     // Write your code here.
     int n= height.size();
        stack<int>st;
        int leftsmall[n],rightsmall[n];

        for(int i=0;i<n;i++){
            while(!st.empty() && height[st.top()]>=height[i])
            {
                st.pop();
            }
            if(st.empty())
                leftsmall[i]=0;
            else
                leftsmall[i]=st.top()+1;

            st.push(i);
        }
        while(!st.empty())
            st.pop();

        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && height[st.top()]>=height[i])
            {
                st.pop();
            }
            if(st.empty())
                rightsmall[i]=n-1;
            else
                rightsmall[i]=st.top()-1;

            st.push(i);
        }
        int maxA=0;
        for(int i=0;i<n;i++){
            maxA= max(maxA,height[i]*(rightsmall[i]-leftsmall[i]+1));
        }
        return maxA;
 }
