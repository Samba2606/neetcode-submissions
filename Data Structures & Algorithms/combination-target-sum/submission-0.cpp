class Solution {
public:
    void combination(int idx,int target,vector<int>& nums,vector<vector<int>>&ans,vector<int>&ds){
        if(idx==nums.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(nums[idx]<=target){
            ds.push_back(nums[idx]);
            combination(idx,target-nums[idx],nums,ans,ds);
            ds.pop_back();
        }
        
            combination(idx+1,target,nums,ans,ds);
    
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        combination(0,target,nums,ans,ds);
        return ans ;
    }
};
