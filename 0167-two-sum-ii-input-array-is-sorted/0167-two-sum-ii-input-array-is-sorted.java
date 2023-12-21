class Solution {
    public int[] twoSum(int[] numbers, int target) {
        /*int [] ans={0,0};
        for(int i=0;i<numbers.length;i++){
            for(int j=i+1;j<numbers.length;j++){
                if((numbers[i]+numbers[j]==target)){
                    ans[0]=i+1;
                    ans[1]=j+1;
                    break;
                }
            }
        }
        return ans;*/
        int l = 0, r = numbers.length - 1;
	
	while (numbers[l] + numbers[r] != target) {
		if (numbers[l] + numbers[r] < target) l++;
		else r--;
	}

	return new int[] {l+1, r+1};
    }
}