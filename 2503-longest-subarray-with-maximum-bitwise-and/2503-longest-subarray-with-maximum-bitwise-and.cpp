class Solution {
public:
    int longestSubarray(vector<int>& nums) {
               int res=INT_MIN;
        for(auto i : nums) res=max(res,i);
        // return res;
        // find the continous subaaray of res
        int ans=1,currentLength=0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == res) {
                currentLength++;  
            } else {
                ans = max(ans, currentLength); 
                currentLength = 0;  
            }
        }
        ans=max(ans,currentLength);
        return ans;
    }
};