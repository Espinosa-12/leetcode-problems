class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /*   sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1])
                return nums[i];
        }
        return -1;*/
        /*the above solution has more time complexity as it involved sorting which costs nlogn time complexity.hence to device more optmised solution like without using sorting we will try*/
        /*you can try using xor condition but there's a problem for this approach when there is example like [2,2,2]like if there is more than one repeating element*/
        
         int low = 1, high = nums.size() - 1, cnt;
        
        while(low <=  high)
        {
            int mid = low + (high - low) / 2;
            cnt = 0;
            // cnt number less than equal to mid
            for(int n : nums)
            {
                if(n <= mid)
                    ++cnt;
            }
            // binary search on left
            if(cnt <= mid)
                low = mid + 1;
            else
            // binary search on right
                high = mid - 1;
            
        }
        return low;
        
    }
};