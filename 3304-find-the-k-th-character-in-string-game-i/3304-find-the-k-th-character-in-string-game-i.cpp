class Solution {
public:
    char kthCharacter(int k) {
           string res="a";
        while(res.size()<k){
            int s=res.size();
            for(int i=0;i<s;i++){
                char ch=res[i];
                int x=ch;
                int y=x+1;
                char ch1=(char)y;
                res.push_back(y);
            }
        }
        char ans;
        for(int i=0;i<=k-1;i++){
         ans=res[i];
        }
   return ans;
    }
};