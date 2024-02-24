class Solution {
public:
    string predictPartyVictory(string senate) {
        int rCounter =0;
        int cCounter =0;

        for(auto c : senate){
            if(c == 'R'){
                if(cCounter>rCounter){
                    --cCounter;
                }
                else{
                    ++rCounter;
                }
            }
            else{
                if(cCounter<rCounter){
                    --rCounter;
                }
                else{
                    ++cCounter;
                }
            }
            
        }

        if(rCounter>cCounter)
            return "Radient";

        
        return "Dire";
    }
}; 
// 32/82 solution 

class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<char> q;
        queue<char> temp;
        int r =0; 
        int d = 0;
        bool flag = false;

        for(auto c : senate){
            cout<<" in loop for "<<c<<endl;
            if(!temp.empty()){
                if(temp.front()!= c){
                    cout<<temp.front()<<" front doesnt match with "<<c<<endl;
                    q.push(temp.front());
                    temp.pop();
                    continue;
                }
                else
                    temp.push(c);

            }
            else{
                temp.push(c);
            }
        }
        while(!temp.empty()){
            q.push(temp.front());
            temp.pop();
        }

        if(q.front() == 'R')
            flag = true;

        while(!q.empty()){
            cout<<" Queue holds "<<q.front()<<endl;
            if(q.front() == 'R'){
                r++;
            }
            else{
                d++;
            }
            q.pop();
        }


    if(r>d || r == d && flag)
        return "Radiant";
    return "Dire";
    }
};

// making it too much complex - 5/82