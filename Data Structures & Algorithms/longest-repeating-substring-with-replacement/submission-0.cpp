class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int j=0;
        int n=s.length();
        vector<int>count(26,0);
        int maxfreq=0;
        int maxlength=0;
        while(i<n){
            count[s[i]-'A']++;
            maxfreq=max(maxfreq,count[s[i]-'A']);
            if(i-j+1 -maxfreq >k){
                count[s[j]-'A']--;
                j++;
            }
           maxlength=max(maxlength,i-j+1); 
           i++;
        }
        return maxlength;
    }
};
