class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    /*    vector<int> ans;
       
       auto lowerBound=lower_bound(arr.begin(),arr.end(),x);
       
       
       int idx=lowerBound-arr.begin();  
       int i=idx-1,j=idx;
       
      while(i>=0 && j<arr.size())
      {
          int diff1=x-arr[i],diff2=arr[j]-x;
          
          if(diff1<=diff2)
          {
              ans.push_back(arr[i]);
              i--;
          }
          else
          {
              ans.push_back(arr[j]);
              j++;
          }
          
          if(ans.size()==k){
              
              break;}
          
      }
       
      if(i>=0)
      {
          while(ans.size()!=k)
          {
              ans.push_back(arr[i]);
              i--;
          }
      }
       
       if(j<arr.size())
       {
            while(ans.size()!=k)
          {
              ans.push_back(arr[j]);
              j++;
          }
       }
       
       sort(ans.begin(),ans.end());
       
       return ans;*/
       int i=0;
        int j=arr.size()-1;
        //here we are just focusing on making the range of answers
        
        while(j-i+1!=k){
            int l=abs(arr[i]-x);
            int p=abs(arr[j]-x);
            if(l<=p){
                j--;
            }else{
                i++;
            }
        }
        vector<int>result;
        for(int m=i;m<=j;m++){
            result.push_back(arr[m]);
        }
        return result;
    }
};