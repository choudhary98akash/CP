class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i =0;
        int j =0; 
        int size = nums.size();

        while(i<size){
            if(nums[i] == 0){
                j= i+1;
                while(j<size && nums[j]==0){
                    j++;
                    if(j==size){
                    j--;
                    break;}
                }
                if(j<size){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;

                }

            }
            i++;
        }
    }
};