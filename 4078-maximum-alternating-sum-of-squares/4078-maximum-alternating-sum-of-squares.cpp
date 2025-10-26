class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
          int n=nums.size();
        for(int i=0;i<n;i++){
                if(nums[i]<0)nums[i]*=-1;
        }
       
       
       sort(nums.begin(), nums.end());
        int x = 0, y = nums.size() - 1;
        long long sum = 0;

        while (y >= x) {
            if (y == x) {
                sum += 1LL * nums[y] * nums[y];
                break;
            }
            sum += 1LL * nums[y] * nums[y];
            sum -= 1LL * nums[x] * nums[x];
            y--;
            x++;
        }

        return sum; }
};