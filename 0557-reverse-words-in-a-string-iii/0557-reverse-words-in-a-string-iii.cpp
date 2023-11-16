class Solution {
public:
    string reverseWords(string s) {
        int n =s.size();
        string ans="";
        string temp="";

        for(int i=0;i<n;i++){
            if(s[i]==' '){
                //new word starting .Reversing the word just before whitespace and adding
                //it to our final answer . then clearing temp to store new word again.
                reverse(temp.begin(),temp.end());
                ans+=temp;
                ans+=" ";
                temp.clear();
            }
            else{
                temp+=s[i];
            }
        }
        reverse(temp.begin(),temp.end());
        ans+=temp;
        return ans;
    }
};