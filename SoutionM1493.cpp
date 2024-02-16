class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i =0;
        int j =0; 
        int ans = 0;
        int zeroCounter =0;
        int size = nums.size();
        int k = 1;

        while(j<size){
            if(nums[j] == 0){
                zeroCounter++;
            }
            
            if(zeroCounter<=k){
                ans = max(ans,j-i);
            }
            else{
                if(nums[i]==0){
                    zeroCounter--;   
                }
                i++;
            }
            j++;
        }
        return ans;  
    }
};