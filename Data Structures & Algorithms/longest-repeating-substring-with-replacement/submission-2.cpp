class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_set<char>charset(s.begin(),s.end());
        int res=0;
        for(char c:charset){
            int count =0;
            int left=0;
            for(int right=0;right<s.size();right++){
                if(s[right]==c){
                    count++;
                }
                while((right-left+1)-count>k){
                    if(s[left]==c){
                        count--;
                    }
                    left++;
                }
                res=max(res,right-left+1);
            }
            
        }
        return res;
    }
};
