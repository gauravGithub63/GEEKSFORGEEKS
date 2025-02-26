//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int>m;
        vector<string>ans;
        
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        int vote=INT_MIN;
        for(auto i:m)
        {
            vote=max(vote,i.second);
        }
        for(auto i:m)
        {
            if(i.second==vote)
            {
                ans.push_back(i.first);
                ans.push_back(to_string(i.second));
            }
        }
        return ans;
    }
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends