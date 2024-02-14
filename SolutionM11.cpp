class Solution {
public:
    int maxArea(vector<int>& height) {
        int Max = INT_MIN;
        int i = 0; int j = height.size()-1;

        while(i<j){
             Max = max(Max, ((j-i)*min(height[j],height[i])));
            if(height[i]<=height[j]){
                i++;
            }
            else{
                j--;
            }
        }

        return Max;
    }
};
// 11. Container With Most Water
