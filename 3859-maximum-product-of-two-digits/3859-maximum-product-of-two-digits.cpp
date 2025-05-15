class Solution {
public:
    int maxProduct(int n) {
        string s= to_string(n);
       int maxProd = 0;

    for (int i = 0; i < s.size(); ++i) {
        for (int j = i + 1; j < s.size(); ++j) {
            int digit1 = s[i] - '0';
            int digit2 = s[j] - '0';
            maxProd = max(maxProd, digit1 * digit2);
        }
    }
    return maxProd;
    }
};