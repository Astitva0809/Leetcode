class Solution {
public:
    int maxFreqSum(string s) {
           vector<int> cnt(26);
        for (int i = 0; i < s.size(); i++) {
            cnt[s[i] - 'a']++;
        }
        int vow = 0, cons = 0;
        for (int i = 0; i < 26; i++) {
            if (i == 0 || i == int('e' - 'a') || i == int('i' - 'a') ||
                i == int('o' - 'a') || i == int('u' - 'a'))
                vow = max(vow, cnt[i]);
            else
                cons = max(cons, cnt[i]);
        }
        return vow + cons;
    }
};