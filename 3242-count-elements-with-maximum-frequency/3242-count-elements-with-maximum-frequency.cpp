class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
           unordered_map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        int maxi = 0;
        for(auto x:mpp){
            if(x.second>maxi){
                maxi = x.second;
            }
        }
        int ans  = 0;
        for(auto x:mpp){
            if(maxi==x.second){
                ans+=maxi;
            }
        }
        return ans;
    }
};