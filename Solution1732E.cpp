// 1732. Find the Highest Altitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAltitude = 0;
        int size = gain.size();
        int sum =0;

        for( auto c : gain){
            sum += c;
            maxAltitude = max(maxAltitude,sum);
        }


        return maxAltitude;
    }
};