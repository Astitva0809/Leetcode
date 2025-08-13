class Solution {
public:
    bool isPowerOfThree(int n) {
          int flag=0;
        if(n==1){
          return true;
        }
      for(int i=0;i<=20;i++){
        if(pow(3,i)==n){
           
            flag=1;
           
        }
      }
      if(flag==0){
          return false;
      }
 return true;
        
    }
};