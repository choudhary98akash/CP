class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        set<int> set;
        for(auto n : arr){
            mp[n]++;
        }
        for(auto n : mp){
            set.insert(n.second);
        }

        return set.size() == mp.size();
    }
};