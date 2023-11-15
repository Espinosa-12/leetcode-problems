class Solution {
public:
    string reversePrefix(string word, char ch) {
        unordered_map<char,int> hashtable;
        int value;
       for(int i=0;i<word.size();i++)      
       {
           if(hashtable.find(word[i])==hashtable.end()){
               hashtable[word[i]]=i;
           }
       }
       for(int i=0;i<word.size();i++){
           //the above function tells whether the value is present or not 
           
           if(hashtable.find(ch)!=hashtable.end()){
                 value=hashtable[ch];
                 reverse(word.begin(),word.begin()+value+1);
                 break;
           }else{
               continue;
           }
       }

      /* int index=-1;
       for(int i=0;i<word.size();i++){
           if(word[i]==ch){
                index=i;
               reverse(word.begin(),word.begin()+i+1);
               break;
           }else{
               continue;
           }
       }*/
          return word;
    }
};