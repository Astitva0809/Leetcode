class Solution {
public:
    bool checkArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> carriedDiff(n+1,0);
        
        int cur = 0; 
        for(int i=0;i<n;i++){
            cur+=carriedDiff[i];
            if(cur>nums[i]) return false;
            
            int d = nums[i]-cur;
            if(d==0) continue;
            if(i+k>n) return false;
            
            cur+=d;
            carriedDiff[i+k]-=d;
        }
        return true;
    }
};