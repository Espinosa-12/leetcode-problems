class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mindiff=INT_MAX;
        int index;
        for(int i=0;i<nums.size();i++){
            int diff=abs(0-nums[i]);
            if(diff<mindiff){
                mindiff=diff;
                index=i;
            }else if(diff==mindiff){
                if(nums[i]>0){
                    index=i;
                }
            }
        }
        return nums[index];
    }
};