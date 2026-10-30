class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int maxstreak=0;
        for(int nums:st){
            if(st.find(nums-1)==st.end()){
                int currnum=nums;
                int currstreak=1;
                while(st.find(currnum+1)!=st.end()){
                    currnum+=1;
                    currstreak+=1;
                }
                 maxstreak=max(currstreak,maxstreak);
            }
           
        }
        return maxstreak;
    }
};
