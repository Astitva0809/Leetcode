class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m =matrix.size();
        //pehle matrix ka transpose krna 
        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                int temp =matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }//fir each row reverse krni hai
        for(int k=0;k<m;k++){//traversing each row
            int i =0;
            int j=m-1;
            while(i<=j){
                int temp=matrix[k][i];
                matrix[k][i]=matrix[k][j];
                matrix[k][j]=temp;
                i++;
                j--;
            }
        }
 }
};