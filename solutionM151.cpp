// My Solution to the problem 
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

// Enhanced solution ot the problem
class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string word;
        string reversedString;
        int loop=0;
    while (iss >> word) {
        if (!reversedString.empty()) {
            reversedString = word + " " + reversedString;
        } else {
            reversedString = word;
        }
    }

    return reversedString;
    }
};
