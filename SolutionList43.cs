//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends

    class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        if (S.empty()) {
            return ""; // Handle empty string case
        }
        
        string ans = "";
        ans += S[0]; // Initialize ans with the first character
        char last = S[0]; // Track the last added character
        
        for(int i = 1; i < S.size(); i++) {
            if(last != S[i]) { // Add only if current character is different from the last
                ans += S[i];
            }
            last = S[i]; // Update last character to current character
        }
        
        return ans;
    
};

};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code EndsL