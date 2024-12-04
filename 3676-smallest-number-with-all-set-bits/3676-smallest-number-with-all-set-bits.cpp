class Solution {
public:
    int smallestNumber(int n) {
        int x=2;
        for(int i=0;i<n;i++){
            if(x>n)return x-1;
            x=x*2;

        }
    return 1;}
};