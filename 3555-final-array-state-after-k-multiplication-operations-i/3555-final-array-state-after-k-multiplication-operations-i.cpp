class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
while(k>0){
    int mini=INT_MAX;

     int j=0;
    for(int i=0;i<n;i++){
       
        if(nums[i]<mini){
            mini=nums[i];
            
            j=i;
         }


    }
    nums[j]=nums[j]*multiplier;
    k--;
}    
   return nums; }
};