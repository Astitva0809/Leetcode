class Solution {
public:
    int differenceOfSums(int n, int m) {
        int c1=0;
        int c2=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                c1=c1+i;
            }
            else{
                c2=c2+i;
            }
            
        }
        int c3=c2-c1;
    return c3;}
};