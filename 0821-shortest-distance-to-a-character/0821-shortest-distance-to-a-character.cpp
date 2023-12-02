class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                v.push_back(i);
            }
        }
        int x = 0;
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            if(x==0){
                ans.push_back(abs(v[x]-i));
            }
            else{
                int mine = min(abs(v[x]-i),abs(v[x-1]-i));
                ans.push_back(mine);
            }
            if(x<v.size()-1 && v[x]<=i) x++;
        }
        return ans;
    }
};