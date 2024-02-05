class Solution {
public:
    string reverseVowels(string s) {
        int size = s.size();
        stack<char> st;
        for(int i =0; i<size; i++){
            if(s[i]== 'a' ||s[i]== 'i' ||s[i]== 'e' ||s[i]== 'o' ||s[i]== 'u' || s[i]== 'A' ||s[i]== 'I' ||s[i]== 'O' ||s[i]== 'U' ||s[i]== 'E'){
                st.push(s[i]);
            }

        }

        for(int i =0; i<size; i++){
            if(s[i]== 'a' ||s[i]== 'i' ||s[i]== 'e' ||s[i]== 'o' ||s[i]== 'u' || s[i]== 'A' ||s[i]== 'I' ||s[i]== 'O' ||s[i]== 'U' ||s[i]== 'E'){
                s[i] = st.top();
                st.pop();
               
            }

        }


    return s;
    }
};