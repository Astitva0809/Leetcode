class Solution {
public:
   int sum(int n){
        int sum1=0;
        while(n>0){
             int x=n%10;
             sum1+=x;
             n=n/10;
        }
        return sum1;
    }
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int cnt=-1;
        for(int i=0;i<n;i++){
            int x=sum(nums[i]);
            if(x==i){cnt=i;
            break;}
        }
   return cnt; }
};