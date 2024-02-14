// 1456. Maximum Number of Vowels in a Substring of Given Length
class Solution {
public:
    int maxVowels(string s, int k) {
        int maxVowelCount = 0;
        int counter =0;
        int size = s.size(); 

        for(int i =0; i<k; i++){
            if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ){
                counter++;
            }

        }

        maxVowelCount = counter;

        for(int i =k; i<size; i++){
            if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ){
                counter++;
            }
            if(s[i-k] == 'a' ||s[i-k] == 'e' ||s[i-k] == 'i' ||s[i-k] == 'o' ||s[i-k] == 'u' ){
                counter--;
            }
            maxVowelCount = max(maxVowelCount,counter);

        }

        return maxVowelCount;
    }
};