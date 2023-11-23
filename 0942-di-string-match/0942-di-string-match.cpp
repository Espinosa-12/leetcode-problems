class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans;
        int k=0;//this is a counter which is kept to keep track of elements under string length
        int low=0;
       
        int high=s.length();
        while(k<s.length()){
            if(s[k]=='I'){
                ans.push_back(low);
                low++;
             //   k++; not necessary as will count for whole loop once;
            }
            if(s[k]=='D'){
                ans.push_back(high);
                high--;
              
            }
            //what happens when k==s.length() that means when we have reached a point where i==j, then since both have same value anyone of them can be pushed;
          //  ans.push_back(low);this will give wrong because every time low value is pushed. but we want when k==s.lenth(), so it will be out of loop
            k++;
        }
        ans.push_back(low);//here k==s.len, i==j
        return ans;
        
    }
};