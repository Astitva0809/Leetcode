class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
       int max1=max_element(nums.begin(),nums.end())-nums.begin();
        int min1=min_element(nums.begin(),nums.end())-nums.begin();
        int op1=-1,op2=-1,op3=-1,n=nums.size(),ans;
        int maxi=max(max1,min1);
        int mini=min(max1,min1);
       
        op1=maxi+1;
        op2=n-mini;
        op3=mini+(n-maxi+1);
        ans=min(op1,op2);
        ans=min(ans,op3);
        return ans;}
};