class Solution {
public:
  void solve(int curr,int n,vector<int>&res){
    if(curr>n)return;
    res.push_back(curr);
    for(int i=0;i<=9;i++){
        int newi=curr*10+i;
        if(newi>n)return;
        else solve(newi,n,res);
    }
    
  }
    vector<int> lexicalOrder(int n) {
        vector<int>res;
        for(int startnum=1;startnum<=9;startnum++){
         solve(startnum,n,res);
        }
   return res; }
};