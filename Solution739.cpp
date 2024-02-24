class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int counter = 0;
        int size = temperatures.size();
        vector<int> v1(size,0);
        for(int i =0; i<size; i++){
            counter = 0;
            for(int j =i+1; j<size; j++){
                counter++;
                if(temperatures[i]<temperatures[j]){
                    v1[i] = counter;
                    
                    break;
                }
                
            }
        }


        return v1;
    }
};  //time limit exceed and 47/48 cases
