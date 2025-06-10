class Solution {
public:
      void sieve(vector<int>&isPrime,int n){
        isPrime[0]=isPrime[1]=false;
        for(int i=2;i<n;i++){
            if(isPrime[i]){
                for(int j=2*i;j<n;j+=i){
                    isPrime[j]=false;
                }
            }
        }
    }
    vector<vector<int>> findPrimePairs(int n) {
        // time Complexity --> n*loglogn
        if(n==1)return {};
        vector<int>isPrime(n,true);
        sieve(isPrime,n);
        vector<vector<int>>ans;
        for(int i=2;i<=n/2;i++){
          if(isPrime[i] && isPrime[n-i])ans.push_back({i,n-i});
        }
        return ans;
    }
};