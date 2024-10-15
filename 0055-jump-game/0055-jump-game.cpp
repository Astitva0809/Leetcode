class Solution {
public:
int n;
int dp[100001];

bool solve(int idx,vector<int>&nums){
    if(idx==n-1)return dp[idx]=true;
    if(dp[idx]!=-1)return dp[idx];
   
    for(int i=1;i<=nums[idx];i++){
         if(solve(idx+i,nums)==true)return dp[idx]=true;
    }
    return dp[idx]= false;
}
    bool canJump(vector<int>& nums) {
      n=nums.size();
      memset(dp,-1,sizeof(dp));
      return solve(0,nums);  
    }
};