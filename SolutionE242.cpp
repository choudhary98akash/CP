 bool isAnagram(string s, string t) {
    {
        vector<int> sFreq(26, 0);
        vector<int> tFreq(26, 0);
        for(char c : s) {
            sFreq[c-'a']++;
        }
        for(char c : t) {
            tFreq[c-'a']++;
        }
        if(sFreq==tFreq) {
            return true;
        }
        else {
            return false;
        }
    }
};

//solved on 20thjune

class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char,int> sMap;
        unordered_map<char,int> tMap;

        for(auto n : s){
            sMap[n]++;
        }


        for(auto n : t){
            tMap[n]++;
        }

        if(sMap.size()!=tMap.size()){
            return false;
        }

        for(auto c : sMap){
            if(c.second!=tMap[c.first]){
                return false;
            }
        }


        return true;

    }
};