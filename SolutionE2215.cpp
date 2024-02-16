class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        int size1 = nums1.size();
        int size2 = nums2.size();
        unordered_map<int,int> mp;
        vector<int> v1;
        vector<int> v2;

        for(auto n : nums2)
            mp[n] = 1;
        
        for(auto n : nums1){
            if(mp[n] == 1){
                mp[n] = 2;
            }
            else{
                v1.push_back(n);
            }
        }

        for(auto n : nums2){
            if(mp[n] == 1)
                v2.push_back(n);
        }

    return {v1,v2};
    }
};
//Approach has flow the elemets are repeated in array , but should not be repeated in a result array;

