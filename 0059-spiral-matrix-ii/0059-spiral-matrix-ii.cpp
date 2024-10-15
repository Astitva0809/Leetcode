class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
           vector<vector<int>> matrix(n, std::vector<int>(n, 0));
       int m=matrix.size();
        int n1=matrix[0].size();
        int minr=0;
        int minc=0;
        int maxr=m-1;
        int maxc=n1-1;
        int tn=n1*m;
        int count =0;
        int num=1;
        while(minr<=maxr && minc<=maxc){
            for(int j=minc;j<=maxc && count<tn;j++){
               matrix[minr][j]=num++;
               count++;
            }  
             minr++;
             for(int i=minr;i<=maxr && count<tn;i++){
           matrix[i][maxc]=num++;
               count++;
            }  
            
              maxc--;
              
             for(int j=maxc;j>=minc && count<tn;j--){
               matrix[maxr][j]=num++;
               count++;
            } 
            maxr--;
             for(int i=maxr;i>=minr && count<tn;i--){
               matrix[i][minc]=num++;
                count++;
            }
              minc++;
              
            
        }
 return matrix;   }
};