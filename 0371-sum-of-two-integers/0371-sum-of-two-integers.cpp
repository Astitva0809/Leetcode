class Solution {
public:
    int getSum(int a, int b) {
     while(b!=0){
            int carry=a&b;
            a=a^b;
            b=carry<<=1;
        }
        return a;  return log2(pow(2, a) * pow(2, b));
    }
};