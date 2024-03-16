class Solution {
public:
    vector<vector<int>> result;
    set<vector<int>> set1;
    bool unique(vector<int> &v, int k){
        unordered_set<int> set2;

        for(auto n : v){
            set2.insert(n);
        }

        return set2.size() == k;
    }

    void func(int k ,int i , int n, vector<int> &v1,int sum){
        if(i>k){
            return ;
        }
        else if(i == k){
            for(int j =1; j<=9;j++){
                v1.push_back(j);
                sum +=j;
                if(sum == n && unique(v1,k)){
                    result.push_back(v1);
                }
                sum -=j;
                v1.pop_back();

            }
        }else{
            for(int j =1; j<=9; j++){
                v1.push_back(j);
                sum+=j;
                func(k,i+1,n,v1,sum);
                sum-=j;
                v1.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int> v1;
        int sum =0;

        func(k,1,n,v1,sum);
        
        for(auto v : result){
            sort(v.begin(),v.end());
            set1.insert(v);
        }

        result.clear();
        
        for(auto v : set1){
            result.push_back(v);
        }

        return result;
    }
};//out of time reach answer

