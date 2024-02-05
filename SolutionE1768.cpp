class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string sol= "";
        int i =0;
        int j =0;
        int n = word1.size();
        int m = word2.size();

        while(i<word1.size() || j<word2.size()){
            if(i<n){
                sol.push_back(word1[i]);
                i++;
            }
            if(j<m){
                sol.push_back(word2[j]);
                j++;
            }
        }


        return sol;
    }
};