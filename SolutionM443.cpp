class Solution {
public:
    int compress(vector<char>& chars) {
        vector<pair<char,int>> pr;
        int index =-1;
        int size = chars.size();
        stack<char> temp;

        if(size<=1)
            return chars.size();
        
        pr.push_back({chars[0],1});
        index++;

        for(int i =1; i<size; i++){
            if(chars[i-1] == chars[i]){
                pr[index].second++;
            }
            else{
                pr.push_back({chars[i],1});
                index++;
            }
        }
        int j =0;
        for(auto c: pr)
            if(c.second<=1){
                chars[j++]= c.first;
            }
            else{
                chars[j++] = c.first;
                if(c.second<10)
                    chars[j++] = c.second + '0';
                else{
                    int num = c.second;
                    while(num){
                        int rem = num%10;
                        num = num/10;
                        temp.push(rem +'0');
                    }
                    while(!temp.empty()){
                        chars[j++] = temp.top();
                        temp.pop();
                    }
                }
            }


        return j;
    }
};

0ms solution :) finally