class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int counter = 0;
        int size = nums.size();
        int large = INT_MIN;
        for(int i =0; i<size-1; i++){
            if(nums[i]<nums[i+1] ){
                counter++;
                large = nums[i+1];
            }cout<<"Large is "<<large<<endl;
        }

        return counter>=2;
    }
};


solution 1 -> not working 

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int size = nums.size()-1;
        for(int i =0; i<size; i++){
            if(nums[i+1]>nums[i]){
                int j = i+1;
                int ele = nums[j]; 
                while(j<size){
                    if(nums[j+1]>ele)
                        return true;
                    j++;
                }
            }
        }
    return false;
    }
};

Solution 2 -. there is a condition in which code is not able to get.

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        int size = nums.size();

        for(int i =0; i<size; i++){
            for(int j = i+1; j<size; j++){
                if(nums[i]<nums[j]){
                    for(int k = j+1;k<size; k++){
                        if(nums[k]>nums[j])
                            return true;
                    }
                }
            }
        }
        return false;   
    }
};

Solution 3 -> Breute force ncube solution time out..  :(

class Solution {
public:
    bool increasingTriplet(std::vector<int>& nums) {
        if (nums.size() < 3) {
            return false;
        }
        int a = INT_MAX;
        int b = INT_MAX;

        for (int num : nums) {
            if (num <= a) {
                a = num;
            } else if (num <= b) {
                b = num;
            } else {
                return true;
            }
        }

        return false;
    }
};

The approach used in the increasingTriplet function is based on keeping track of two minimum values, a and b, while iterating through the array. Here's a step-by-step explanation:

    Initialize two variables, a and b, to INT_MAX.
    Iterate through the array, and for each element:
        If the element is less than or equal to a, update a with the element.
        If the element is greater than a but less than or equal to b, update b with the element.
        If the element is greater than both a and b, it means an increasing triplet is found, and the function returns true.
    If the loop completes without finding an increasing triplet, return false.

Intuition:

The algorithm relies on the fact that if there is an increasing triplet in the array, there must be two values, a and b, such that a < b. The algorithm keeps track of the two smallest values encountered (a and b). If it finds an element greater than both a and b, it means there is an increasing triplet.

Time Complexity:

The time complexity : O(n)

Space Complexity:

The space complexity : O(1),


Solution 4 thorough help 