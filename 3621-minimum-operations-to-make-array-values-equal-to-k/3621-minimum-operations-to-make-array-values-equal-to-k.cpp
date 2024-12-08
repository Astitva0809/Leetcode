class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
           int n=nums.size();
          
        for(int i=0;i<n;i++){
            if(nums[i]<k){
                return -1;
            }
        }

        unordered_set<int>uset;
        for(int i=0;i<n;i++){

            if(nums[i]>k){
            uset.insert(nums[i]);
            }
        }

        return uset.size();
    }
};