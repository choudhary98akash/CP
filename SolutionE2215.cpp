class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v1;
        vector<int> v2;
        unordered_map<int,int> mp;

        for(auto n : nums1){
            mp[n] = 1;
        }
       
        for(auto n : nums2){
            if(mp[n] ==0 ){
                mp[n] = 2;
            }
            else if(mp[n] == 1){
                mp[n] = 3;
            }
        }
        for(auto n : mp){
           if(n.second == 1){
               v1.push_back(n.first);
           }
           else if(n.second == 2){
               v2.push_back(n.first);
           }

        }


        return {v1,v2};

    }
};