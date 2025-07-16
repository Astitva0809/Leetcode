class Solution {
public:
   
    int checker(vector<int>& nums) {
        int even = 0;
        int odd = 1;
        int cnteve = 2;
        int cntodd = 3;
        vector<int> cnt(4, 0);
        vector<bool> check = {true, false};

        for (int it : nums) {
            int cur = it % 2;
            if ((cur == 1 && check[odd] == false) || 
                (cur == 0 && check[odd] == true)) {
                check[odd] = !check[odd];
                cnt[odd]++;
            }
            
            if ((cur == 1 && check[even] == false) || 
                (cur== 0 && check[even] == true)) {
                check[even] = !check[even];
                cnt[even]++;
            }
            
            if (cur == 1) cnt[cntodd]++;
            if (cur == 0) cnt[cnteve]++;
        }

        return *max_element(cnt.begin(), cnt.end());
    }


    int maximumLength(vector<int>& nums) {
        return checker(nums);
    }

};