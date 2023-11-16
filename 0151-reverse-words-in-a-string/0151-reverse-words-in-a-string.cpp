class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();

    stack<string> st;
    string tmp = "";

    // Iterate and store each word to the stack
    for(int i=0; i<n; i++) {
        if(s[i] != ' ')//the sky is blue  "
            tmp.push_back(s[i]);    
        if((i == n-1 || s[i] == ' ') && !tmp.empty())//what if after last word there is a space for that i am checking if tmt is empty or not to add
            st.push(tmp), tmp = "";
    }

    // Pop each word one by one from the stack and append it to the output string "tmp"
    while(!st.empty()) {
        tmp.append(st.top()); 
        st.pop();
        tmp.push_back(' ');
    }

    // Remove the additional single space 
    tmp.pop_back();
    
    return tmp;
    }
};
/*another approach
  if (s == null) return null;
    
    char[] a = s.toCharArray();
    int n = a.length;
    
    // step 1. reverse the whole string
    reverse(a, 0, n - 1);
    // step 2. reverse each word
    reverseWords(a, n);
    // step 3. clean up spaces
    return cleanSpaces(a, n);
  }
  
  void reverseWords(char[] a, int n) {
    int i = 0, j = 0;
      
    while (i < n) {
      while (i < j || i < n && a[i] == ' ') i++; // skip spaces
      while (j < i || j < n && a[j] != ' ') j++; // skip non spaces
      reverse(a, i, j - 1);                      // reverse the word
    }
  }
  
  // trim leading, trailing and multiple spaces
  String cleanSpaces(char[] a, int n) {
    int i = 0, j = 0;
      
    while (j < n) {
      while (j < n && a[j] == ' ') j++;             // skip spaces
      while (j < n && a[j] != ' ') a[i++] = a[j++]; // keep non spaces
      while (j < n && a[j] == ' ') j++;             // skip spaces
      if (j < n) a[i++] = ' ';                      // keep only one space
    }
  
    return new String(a).substring(0, i);
  }
  
  // reverse a[] from a[i] to a[j]
  private void reverse(char[] a, int i, int j) {
    while (i < j) {
      char t = a[i];
      a[i++] = a[j];
      a[j--] = t;
    }
  }*/