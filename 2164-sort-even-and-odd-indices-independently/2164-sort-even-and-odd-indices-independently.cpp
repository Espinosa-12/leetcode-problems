class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
       /* this is by using extra space ,so when compared to more time complexity and 
       space complexity always try writing solutions with more time complexity
       than using extra space.
       vector<int> odd, even;
        for(int i = 0; i < nums.size(); i++) {
            if(i & 1) {
                odd.push_back(nums[i]);
            } else {
                even.push_back(nums[i]);
            }
        }
        sort(odd.begin(), odd.end(),greater<int>());//okay here we have used greater <int> function because 
        sort(even.begin(), even.end());
        for(int i = 0; i < nums.size(); i++) {
            if(i & 1) {
                nums[i] = odd[0];
                odd.erase(odd.begin());
            } else {
                nums[i] = even[0];
                even.erase(even.begin());
            }
        }
        return nums;*/
        int minIndex,maxIndex;
// Here in this nested loop , we are sorting the elements at even indices in non-decreasing order.
        for(int i=0;i<nums.size();i+=2)
        {
            minIndex=i;
            for(int j=i+2;j<nums.size();j+=2)
            {
                if(nums[j]<nums[minIndex])
                    minIndex=j;
            }
            swap(nums[i],nums[minIndex]);
        }
// Here , we are trying to sort the elements at odd indices in non-increasing order. 
        for(int i=1;i<nums.size();i+=2)
        {
            maxIndex=i;
            for(int j=i+2;j<nums.size();j+=2)
            {
                if(nums[j]>nums[maxIndex])
                    maxIndex=j;
            }
            swap(nums[i],nums[maxIndex]);
        }
        
        return nums;
        
    }
};