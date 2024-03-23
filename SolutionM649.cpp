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

class Solution {
public:
    string predictPartyVictory(string senate) {
        int R = 0;
        int D =0;
        queue<char> q;

        bool flag = true;

            q.push(senate[0]);
            if(q.front() == 'R'){
                R++;
                D--;
                cout<<"Pushed R "<<" and the count of R is "<<R<<" and D is "<<D<<endl;
            }
            else{
                D--;
                R++;
                cout<<"Pushed D "<<" and the count of D is "<<D<<" and R is "<<R<<endl;
            }

        while(flag){

            int size = senate.size();
            for(int i =1; i<size;i++){
                char c = senate[i];
                if(c!=q.back()){
                    if(c == 'R' and R<=0){
                        R++;
                    }else{
                        q.push(c);
                        R++;
                        D--;
                        cout<<"Pushed R "<<" and the count of R is "<<R<<" and D is "<<D<<" and poping "<<q.front()<<endl;
                        q.pop();
                    }

                    if(c == 'D' and D<=0){
                        D++;
                    }else{
                        q.push(c);
                        R--;
                        D++;
                        cout<<"Pushed D "<<" and the count of D is "<<D<<" and R is "<<R<<" and poping "<<q.front()<<endl;
                        q.pop();
                    }

                }
                else{
                    if(c == 'R'){
                        R++;
                        D--;
                    }
                    else{
                        R--;
                        D++;
                    }
                    cout<<" Pushing "<<c<<" and count of R is "<<R<<" and the count of D is "<<D<<endl;
                    q.push(c);
                }
            }
            string temp = "";
            while(!q.empty()){
                temp +=q.front();
                q.pop();
            }
            senate = temp;
            cout<<"Updated senate  : "<<senate<<endl;

            if(R<=0 || D<=0){
                flag = false;
            }



        }
            if(R>D){
                return "Radiant";
            }


        return "Dire";
    }
};//unfruitfull solution 