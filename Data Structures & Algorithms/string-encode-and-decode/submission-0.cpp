class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(auto&str:strs){
            int len=str.length();
           res=res+to_string(len);
           res=res+'#';
           res=res+str;
        }
        return res;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string>result;
        while(i<s.length()){
            int j=i;
            int len=0;
            while(s[j]!='#'){
                len=len*10+(s[j]-'0');
                j=j+1;
            }
            j=j+1;
            int current=0;
            string newstr="";
            while(current<len){
                newstr=newstr+s[j];
                current=current+1;
                j=j+1;
            }
            result.push_back(newstr);
            i=j;
        }
        return result;
    }
};
