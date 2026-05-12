class Solution {
public:
    bool alphanum(char ch){
        if ((ch>='0' && ch<='9')  ||  (tolower(ch)>='a' && tolower(ch)<='z')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(!alphanum(s[i])){
                i++;
                continue;
            }
            if(!alphanum(s[j])){
                j--;
                continue;
            }

            if(tolower(s[i])!=tolower(s[j])){
                return false;
                break;
            }else{
                i++;
                j--;
            }
        }
        return true;
    }
};
