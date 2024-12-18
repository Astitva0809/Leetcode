class Solution {
public:
   int f(int ind,vector<int>& prices){
        int n=prices.size();
        for(int j=ind+1;j<n;j++){
            if(prices[ind]>=prices[j]){
                return prices[j];
            }
        }
        return -1;
    }


    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int elementtosub=f(i,prices);
            if(elementtosub!=-1){
            ans.push_back(prices[i]-elementtosub);
            }else{
                ans.push_back(prices[i]);
            }

        }
        return ans;
    }
};