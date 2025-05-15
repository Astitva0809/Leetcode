class Solution {
public:
    long long coloredCells(int n) {
        if(n==1)return 1;
        else return 1+(2*(long long)(n-1)*n);
    }
};