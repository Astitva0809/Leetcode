class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int M=1e9+7;
      int n=nums.size();
      sort(nums.begin(),nums.end());
      int l=0;
      int r=n-1;
      vector<int>pow(n);
      pow[0]=1;
      for(int i=1;i<n;i++){
        pow[i]=(pow[i-1]*2)%M;
      }
      int result=0;
      while(l<=r){
        if(nums[l]+nums[r]<=target){
            int diff=r-l;
            result=(result%M +pow[diff])%M;
            l++;
        }
        else {
            r--;
        }

      }  
  return result;  }
};