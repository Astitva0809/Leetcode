class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
         int lstidx = -1,lastmx=-1,ans = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]>=left && nums[i]<=right) {
                lstidx=i;
            }
            if(nums[i]>right) {
                lastmx=i;
            }
            if(lstidx!=-1 && lstidx-lastmx>0) {
                ans+=lstidx-lastmx;
            }
        }
        return ans;  }
};