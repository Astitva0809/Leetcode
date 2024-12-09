class Solution {
public:



    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int m=queries.size();
          vector<bool>ans;
          vector<int>cum(n);

        int i=0;
        int j=0;
        while(i<n){
            if(j<i){
                j=i;
            }
            while( j<n-1 && nums[j]%2!=nums[j+1]%2){
                j++;
            }

            cum[i]=j;
            i++;
        }
            
            for(auto it:queries){
                int start=it[0];
                int end=it[1];

                if(cum[start]>=end){
                    ans.push_back(true);
                }else{
                    ans.push_back(false);
                }
            }



         return ans;
    }
};