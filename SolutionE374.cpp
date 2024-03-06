// 374. Guess Number Higher or Lower
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long l = 1;
        long h = n;
        long mid ;

        while(l<=h){
            mid = (l+h)/2;
            int result = guess(mid);
            if(result == 0){
                return mid;
            }
            else if(result == -1){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }


        return 0;
    }
};