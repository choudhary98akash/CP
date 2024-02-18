// class Solution {
// public:
//     string removeStars(string s) {
//         string result ="";
//         int i  =0;
//         vector<char> v1;

//         for(auto c : s){
//             if(c == '*'){
//                 v1.pop_back();
//             }    
//             else{
//                 v1.push_back(c);
//             }
//         }   
        
//         for(auto n : v1)
//             result = result + n;
 

//         return result;
//     }
// };

//My approach toojk too mauch of memory 31/64 caseas

// better one 
class Solution {
public:
    string removeStars(string &s) {
        string ret (s.size(), 0);
        int ind = 0;

        for(auto ch: s){
            if(ch=='*') ind--;
            else {ret[ind] = ch; ind++;}
        }

        ret.resize(ind);
        return ret;
    }
};