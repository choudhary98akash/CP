class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int j =0;
        int sizet = t.size();
        int sizeS = s.size();

        if(s=="")
            return true;
        if(sizet==sizeS && s!=t)
            return false;
        
        for(int i = 0 ; i<sizet; i++){
            if(s[j] == t[i]){
                cout<<s[j]<<" matched with "<<t[i]<<endl;
                j++;
                if(sizeS==j){
                    j--;
                    break;
                }
            }
        }
        cout<<"Count of j+1  is "<<j;
        return j==s.size();
    }
};
// Not good enough to be hold.Solutin one 

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length(),m=t.length();
        int j = 0; 

    for (int i = 0; i < m and j < n; i++)
        if (s[j] == t[i])
            j++;
    return (j == n);
    }
};

// same appoach and clean code and mistake found.


