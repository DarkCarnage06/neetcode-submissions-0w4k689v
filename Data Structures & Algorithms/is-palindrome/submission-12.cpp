class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<end){
            if(!iswalnum(s[start])){
                start++;
            }else if(!iswalnum(s[end])){
                end--;
            }else if(tolower(s[start])!=tolower(s[end])){
               return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
