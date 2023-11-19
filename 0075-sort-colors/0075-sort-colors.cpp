class Solution {
public:
    void sortColors(vector<int>& nums) {
      //it's not at all a good approach as we are doing it in o(n2) time complexity.
        
        /*int count[3]={0,0,0};
    for(int i=0;i<nums.size();i++){
        count[nums[i]]++;
    }
    int k=0;
    for(int i=0;i<3;i++){
        while(count[i]--){
            nums[k++]=i;
        }
    }*By using extra space*/
        /*here binary search cannot be applied as array is not sorted and also they are advising not to use inbuilt sort function ,as just by using the inbuilt sort function itself we can solve the problem.
        /*try solving it using hashmap concept*/
/*now using the 3 pointer approach */

   int st=0,mid=0,high=nums.size()-1;
    while(mid<=high){
    switch(nums[mid]){
        case 0:  swap(nums[mid],nums[st]);
                 st++;
                 mid++;
                 break;
        case 1: mid++;
                break;
        case 2: swap(nums[mid],nums[high]);
                high --;

    }
    }
        
        

    }
};