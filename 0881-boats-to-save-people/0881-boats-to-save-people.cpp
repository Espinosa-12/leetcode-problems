class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
    
        int left = 0, right = people.size()-1;
        int N = 0;
        while(left<=right) {
            if(people[right] == limit) { // heaviest person goes alone
                N++;
                right--;
            }
            else if(people[left] + people[right] > limit) { // heaviest person goes alone
                N++;
                right--;
            }
            else {
                // both person goes in a single boat
                N++;
                left++;
                right--;
            }
        }
        return N;
    }
};