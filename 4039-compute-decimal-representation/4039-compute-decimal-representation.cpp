class Solution {
public:
    vector<int> decimalRepresentation(int n) {
          int base10 = 0;
        vector<int> ans;
        while(n)
            {
                int dig = n%10;
                if(dig != 0)
                    ans.push_back(dig*pow(10, base10));
                base10++;
                n = n/10;
            }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};