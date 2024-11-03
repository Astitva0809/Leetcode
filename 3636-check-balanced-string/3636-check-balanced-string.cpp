class Solution {
public:
    bool isBalanced(string num) {
        int n=num.size();
        int ev=0,odd=0;
        for(int i=0;i<n;i++){
            if(i%2==0)ev+=num[i] - '0';
            else odd+=num[i] - '0';
        }
  
if(ev==odd)return true;
return false;  }
};