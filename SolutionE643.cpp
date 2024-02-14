class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int j =0;
        double result = 0;
        double sum =0;
        int size = nums.size();

        for(int i =0; i<k; i++){
            sum +=nums[i];
        }
        
        result = sum/k;
        // cout<<" REsult after the window "<<result<<endl;
        for(int i = k; i<size; i++){
            sum +=nums[i] - nums[j++];
            result = max(result,sum/k);
            // cout<<"Result after the"<<i<<" th move "<<result<<" and the sum is "<<sum<<endl;
        }

        return result;

    }
};