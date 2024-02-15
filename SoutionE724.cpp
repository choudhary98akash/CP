class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size();
        vector<int> prefixSum(size,0);
        vector<int> suffixSum(size,0);

        for(int i =1; i<size; i++){
            prefixSum[i] = prefixSum[i-1]+nums[i-1];
            suffixSum[size-i-1] = suffixSum[size-i]+nums[size-i];
        }

        for(int i =0; i<size; i++){
            if(prefixSum[i] == suffixSum[i]){
                return i;
            }
        }



        return -1;
    }
};