class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans;

        for(int i =0; i<size; i++){
            int index = abs(nums[i]);
            if(nums[index-1]>0){
                nums[index-1] = -nums[index-1];
            }
            else{
                ans.push_back(index);
            }
        }
        //17mins done
        return ans;
    }
};