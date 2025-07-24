class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int>cumxor(n,0);
        vector<int>res;
        cumxor[0]=arr[0];
        for(int i=1;i<n;i++){
            cumxor[i]=arr[i]^cumxor[i-1];
        }
        for(auto it:queries){
            int l=it[0];
            int r=it[1];
            int ans=cumxor[r]^(l==0?0:cumxor[l-1]);
            res.push_back(ans);
        }
  return res; }
};