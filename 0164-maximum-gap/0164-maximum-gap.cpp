class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        sort(nums.begin(),nums.end());
        if(nums.size()<2)return 0;
        for(int i=1;i<n;i++){
            int x=nums[i]-nums[i-1];
            if(x>maxi){
                maxi=x;
            }
        }        
   return maxi; }
};