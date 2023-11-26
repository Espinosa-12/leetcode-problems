class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       int i=0;
        int j=i+1;
        while(i<nums.size()&& j<nums.size()){
            if((i%2==0)&& (nums[i]%2==0)){
                i=i+2;
            }else if((j%2!=0)&&(nums[j]%2!=0)){
                j=j+2;
            }else if((nums[i]%2!=0)&&(nums[j]%2==0)){
                swap(nums[i],nums[j]);
            }
        }
        return nums;
    }
};