class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i];
        }
        for(int j=n-2;j>=0;j--){
            suffix[j]=suffix[j+1]*nums[j];
        }
        result[0]=suffix[1];
        result[n-1]=prefix[n-2];
        for(int i=1;i<=n-2;i++){
            result[i]=prefix[i-1]*suffix[i+1];
        }
        return result;
    }
};
