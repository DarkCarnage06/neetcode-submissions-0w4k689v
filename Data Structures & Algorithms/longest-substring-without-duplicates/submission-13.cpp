class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>st;
        int maxlength=0;
        int left=0;
        for(int right=0;right<s.size();right++){
            while(st.count(s[right])){

                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxlength=max(maxlength,right-left+1);
        }
        return maxlength;
    }
};
