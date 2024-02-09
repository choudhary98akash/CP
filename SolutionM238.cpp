// 238. Product of Array Except Self
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int size = nums.size();

    vector<int> suf(size,1);
    vector<int> after(size,1);

    int pre = 1;
    int suffix =1;
    for(int i = 1; i<size; i++){
        suf[i] = pre * nums[i-1];
        pre = suf[i];
        int pos = size-i-1;
        if(pos>-1)

        after[pos] = suffix * nums[pos+1];
        suffix = after[pos];
    }

    for(int i =0; i<size; i++){
        nums[i] = suf[i] * after[i];
    }

    return nums;
    }
};


// Enhace solution 
// Yes, it is possible to solve the problem with O(1) space complexity by using the output array itself to store the left and right products at each position. Here's an updated solution:

// ```cpp
#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int size = nums.size();

        std::vector<int> output(size, 1);

        int pre = 1;
        for (int i = 0; i < size; i++) {
            output[i] *= pre;
            pre *= nums[i];
        }

        int suffix = 1;
        for (int i = size - 1; i >= 0; i--) {
            output[i] *= suffix;
            suffix *= nums[i];
        }

        return output;
    }
};
```

// This solution eliminates the need for separate left and right product arrays (`suf` and `after`), 
// and it uses the `output` array itself to store the final result. The first loop calculates the left products, 
// and the second loop calculates the right products while updating the output array. This way, the space complexity is O(1).