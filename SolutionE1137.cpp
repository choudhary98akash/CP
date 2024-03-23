class Solution {
public:
    int mat[38];
    int tribonacci(int n) {
        if(n == 0 || n<0){
            return 0;
        }
        else if(n == 1 || n == 2){
            return 1;
        }
        else if(mat[n]!=0){
            return mat[n];
        }
        
        return mat[n] = tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    }
};