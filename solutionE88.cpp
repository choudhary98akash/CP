class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int size = m+n-1;
        int i = m-1;
        int j = n-1;

        while(j>-1 && i>-1){
            if(nums1[i]>nums2[j]){
                nums1[size] = nums1[i--]; 
            }else{
                nums1[size] = nums2[j--];
            }
            size--;
        }

        while(j>-1){
            nums1[size--] = nums2[j--];
        }

    }
};