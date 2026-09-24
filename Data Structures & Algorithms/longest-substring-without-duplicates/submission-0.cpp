class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int i=0;
        int j=0;
        int max_len=0;
        while(j<s.length()){

            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
                j++;
            }
            else{
                max_len=max(max_len,j-i);
                st.erase(s[i]);
                    i++;
                }
            

            }
        
        max_len=max(max_len,j-i);
        return max_len;
    }
};