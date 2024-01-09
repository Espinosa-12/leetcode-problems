class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int i=0;
        int j=n-1;
        int sum=0;
        int maxi=INT_MIN;
        while(i<j){
            sum= nums[i]+nums[j];
            maxi = max(sum,maxi);
            i++;
            j--;
        }
        return maxi;
    }
};