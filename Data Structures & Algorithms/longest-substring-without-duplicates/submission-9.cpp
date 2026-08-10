class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>seen;
        int maxlength=0;
        int left=0;
        for(int right=0;right<s.length();right++){
            while(seen.count(s[right])){
                s.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            maxlength=max(maxlength,right-left+1);
        }
        return maxlength;
    }
};
