class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
    sort(tokens.begin(),tokens.end());
        int j=tokens.size()-1;
        int i=0;
        int score=0;
        int ans=0;
        while(i<=j){//check it why not only i<j and i<=j ?by tracing it 
            if(power>=tokens[i]){
                //score should be updated first because to calculate maximum score if we //update it later then we cannot find correct ans;
                score++;
                 power=power-tokens[i];
                i++;
               ans=max(score,ans);
            }else if(score>=1){
                power =power+tokens[j];
                score--;
                j--;
            }else{
                //it's a condition where score is already zero and it cannot be decreased further as we actually wanted max score and hence no power increase also and also since power is already less than given token[i] hence no score increase also. so by breaking at that point will try to return maximum value i.e ans;hence we are using break condition here.
                break;
            }
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        /*  sort(tokens.begin(), tokens.end());
        int score = 0, maxScore = 0;
        int low = 0, high = tokens.size() - 1;
        
        while(low <= high){
            if(tokens[low] <= power){
                power-=tokens[low];
                ++score;
                ++low;
            }
            else if(score > 0){
                power+=tokens[high];
                --score;
                --high;
            }
            else if (tokens[low] > power && score == 0)
                break;
            
            maxScore = max(maxScore, score);
        }
        
        return maxScore;*/
    }
};