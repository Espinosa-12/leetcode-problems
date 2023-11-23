class Solution {
public:
    int minimumLength(string s) {
        int i=0;
        int j=s.length()-1;
        while(s[i]==s[j] && i<j){
            //also try to keep a check that prefix and suffix should not meet
           // i++;
           /* j--;we cannot increment i and j here only because we have to check whether their adjacent wala strings are equal or not so will write it at end of loop;*/
            while(i<j && s[i]==s[i+1]){
                i++;
            }
            while(i<j && s[j]==s[j-1]){
                //also keep a track i and j should not interesect
                j--;
            }
            i++;
            j--;
          //now here we are checking for next element to remove it;  
            
        }
        if(j<i){
            return 0;
        }
        return j-i+1;
    }
};