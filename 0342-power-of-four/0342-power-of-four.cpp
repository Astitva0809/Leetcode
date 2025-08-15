class Solution {
public:
    bool isPowerOfFour(int n) {
        int flag=0;
        if(n==1){
          return true;
        }
      for(int i=0;i<=15;i++){
        if(pow(4,i)==n){
           
            flag=1;
           
        }
      }
      if(flag==0){
          return false;
      }
 return true;}
};