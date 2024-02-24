class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

     int i =0;
     int size = asteroids.size();

     for(int j =1; j<size; j++){
         cout<<" Asteroids product "<<asteroids[j]<<" and "<<asteroids[i]<<endl;
        if(asteroids[j]*asteroids[i]<0 && i>=0){
            cout<< " in for curr ele "<<asteroids[j]<<" and top element "<<asteroids[i]<<endl;
            if(abs(asteroids[j])>abs(asteroids[i])){
                asteroids[i] = asteroids[j];
            }
            else if(abs(asteroids[j])<asteroids[i]){
                continue;
            }
            else{
                i--;
            }
        }
        else{
            i++;
        }

        if(i>=size)
            break;
     }

     asteroids.resize(i);

     return  asteroids;   

    }
}; 
// Approach 1 didn't work out - 30 mins


// Approch 2 with stack --> Too much complex  120/232 cases

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        bool col = false;

        for(auto n : asteroids){
            if(!st.empty()){
                int c = st.top();
                if(c*n<0){
                    if(abs(c)>abs(n)){
                        continue;
                    }
                    else if(abs(c)<abs(n)){
                        st.pop();
                        
                    }
                    else{
                        st.pop();
                    }
                }
                else{
                    st.push(n);
                }
            }
            else{
                st.push(n);
            }
        }

        int size = st.size();
        vector<int> v1(size,0);

        while(!st.empty()){
            v1[--size] = st.top();
            st.pop();
        }


        return v1;
    }
};

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int ind = -1;
        vector<int> v1;

        for(auto curr : asteroids){
            if(v1.size()>0){
                if(v1.back() * curr <0){
                    if(abs(v1.back()) == abs(curr)){
                        // cout<<" curr and next elemet are of diff sign so removal of elemet "<<v1.back()<<" becaosue curr is "<<curr<<endl;
                        v1.pop_back();
                    }
                    else{
                        while( abs(curr)> abs(v1.back()) && v1.size()>0){
                            // cout<<" The curr and next elemet are of differnt type so removing back ele : "<<v1.back()<<" beacuse of "<<curr<<endl;
                            v1.pop_back();
                        }
                        // cout<<" Finalyy adding cuur after diff signs "<<curr<<endl;
                        if(abs(curr)>v1.back() || v1.size() == 0)
                            v1.push_back(curr);
                    }
                }
                else{
                    v1.push_back(curr);
                // cout<<"Both curr and last elemetn are of same sign so addtion of "<<curr<<endl;

                }
            }
            else{
                v1.push_back(curr);
                // cout<<"NO element so additon of 0th element "<<curr<<endl;
            }
        }

        return v1;
    }
}; //approach using vector (logicaol is not clear to me i guess)