class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        string temp = "";
        deque<string>a,b;
        for(char c:sentence1){
            if(c == ' ') a.push_back(temp),temp = "";
            else temp += c;
        }
        a.push_back(temp),temp = "";
        for(char c:sentence2){
            if(c == ' ') b.push_back(temp),temp = "";
            else temp += c;
        }
        b.push_back(temp),temp = "";
		// removing common from front
        while(a.size() != 0 && b.size() != 0 && (a.front() == b.front())) a.pop_front(),b.pop_front();
        //removing common from back
		while(a.size() != 0 && b.size() != 0 && (a.back() == b.back())) a.pop_back(),b.pop_back();
		if(a.size() == 0 || b.size() == 0) return true;
        return false;
    }
};