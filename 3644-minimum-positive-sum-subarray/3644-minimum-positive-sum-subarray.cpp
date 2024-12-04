class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        
        int left = 0;
        int mini = INT_MAX;
        int sum = 0;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size() && j - i + 1 <= r; j++) {
                sum += nums[j]; 
                int len = j-i+1;
                if (len>=l&&sum>0) {
                    mini=min(mini,sum);
                }
        }
        }
        return mini != INT_MAX ? mini : -1;
    }
};