class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=1;i<n;i++){
            int maxs=nums[i]-nums[i-1];
            if(maxi<maxs)maxi=maxs;
        }
            for(int i=1;i<n;i++){
            int maxs=nums[i-1]-nums[i];
        if(maxi<maxs)maxi=maxs;
        
        
        }

        int z=max(nums[n-1]-nums[0],nums[0]-nums[n-1]);
        if(z>maxi)maxi=z;
 return maxi;   }
};