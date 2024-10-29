class Solution {
public:
   int m;
   int n;
   vector<int>dir={-1,0,1};

  int dfs(int row,int col,vector<vector<int>>& grid,  vector<vector<int>>& t){
    if(t[row][col]!=-1){
        return t[row][col];
    }
    int moves=0;
    for(auto direc:dir){
    int newr=row+direc;
    int newc=col+1;        

    if(newr>=0 && newr<m && newc>=0 && newc<n && grid[newr][newc]>grid[row][col]){
        moves=max(moves,1+dfs(newr,newc,grid,t));
    }
    }

return t[row][col]=moves;
  }






    int maxMoves(vector<vector<int>>& grid) {
         m=grid.size();
         n=grid[0].size();
        int res=0;
        vector<vector<int>>t(m,vector<int>(n,-1));
        for(int row=0;row<m;row++){
            res=max(res,dfs(row,0,grid,t));
        }
    return res;}
};