
  class Solution {
public:
    string reverseWords(string s) {
        string sol = "";
        int size = s.size();
        string word ="";
        stack<char> st;
        vector<string> ans;
        for(int i =size-1; i>=0; i--){
            while(s[i]!=' '){
                st.push(s[i]);
                i--;
            if(i==-1)
                break;
            }
            while(!st.empty()){
                word +=st.top();
                st.pop();
            }
            cout<<word<<endl;
            word ="";
        }
    return sol;
        
    }
};  