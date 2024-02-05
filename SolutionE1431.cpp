class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies =candies[0];
        int n = candies.size();
        vector<bool> result;
        for(int i =1; i<n; i++){
            maxCandies = max(maxCandies,candies[i]);
        }
        for(int i =0; i<n; i++){
            if(candies[i]+extraCandies>=maxCandies){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }


        return result;
    }
};