class Solution {
public:
    bool validPalindrome(string s) {
        int start=0;
        int end = s.size()-1;
        int countfromstart = 0;
        int countfromend=0;
        
        
        //first from starting
        while(start<end){
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else{
                start++;
                countfromstart++;
            }
        }
        
        
        // now from last
        start = 0;
        end = s.size()-1;
        while(start<end){
              if(s[start]==s[end]){
                start++;
                end--;
            }
            else{
                end--;
                countfromend++;
            }
        }
        
        
        // now if and only if countfromstart and countfromend must be 1 (not necessary of same element)
        // ya if string already plaindrome and both value of zero means we dont have any delete
        //cout<<countfromend<<" "<<countfromend;
        if(countfromstart==0 || countfromend==0)
            return 1;
        if(countfromstart==1 || countfromend==1)
            return 1;
        
        // if another cases
        return 0;
    }
};