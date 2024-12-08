class Solution {
public:
   
         bool ispossible( vector<int>& nums, int maxOperations, int mid){
        int total=0;
        
        for(auto it:nums){
            int op=it/mid;
            if(it%mid==0){
                op-=1;
            }
            total+=op;
        }
        if(total>maxOperations){
            return false;
        }

        return true;
     }

    int minimumSize(vector<int>& nums, int maxOperations) {
        
        int l=1;
        int h=*max_element(nums.begin(),nums.end());
        int res=h;

        while(l<=h){
            int m=(l+h)/2;

            if(ispossible(nums,maxOperations,m)){
                res=m;
                h=m-1;
            }else{
                l=m+1;
            }
        }

        return res;
    }
};