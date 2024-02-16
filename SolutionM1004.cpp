class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i =0;
        int j =0; 
        int ans = 0;
        int zeroCounter =0;
        int size = nums.size();

        while(j<size){
            if(nums[j] == 0){
                zeroCounter++;
            }
            
            if(zeroCounter<=k){
                ans = max(ans,j-i+1);
                j++;
                // cout<<"Under calc"<<endl;
            }
            else{
                if(nums[i]==0){
                    zeroCounter--;   
                }
                i++;
                j++;
            }
            // cout<<"Window size is "<<j-i<<" with zeros "<<zeroCounter<<endl;
            
            
        }
        return ans; 
    }
};