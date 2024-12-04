class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
           int n = nums.size();
        int sum =0;
        int ans = -1000;
        unordered_map<int,int> m;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            m[nums[i]]++;
        }
        
        for(int i=0;i<n;i++){
            int key = sum - 2*nums[i];
        
            if(m.find(key)!=m.end()) {
                if(key!=nums[i]||(m[key]>1))
                   ans = max(ans, key);
            }
        }

        return ans;
    }
};