class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = -1;
        int prev = 102;
        int size = nums.size();

        for(int j =0; j<size; j++){
            if(nums[j]!=prev){
                nums[++i] = nums[j];
            }
            prev = nums[j];
        }

        return i+1;
    }
};