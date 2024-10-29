class Solution {
public:
       void f(int ind, string curr, unordered_set<string>& st, int n, string& ans) {
        if (!ans.empty()) return; 
        if (ind == n) {
            if (st.find(curr) == st.end()) { 
                ans = curr;
            }
            return;
        }
        
        f(ind + 1, curr + '0', st, n, ans);
        f(ind + 1, curr + '1', st, n, ans);
    }

    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<string> st(nums.begin(), nums.end());
        int n = nums.size();
        string ans = "";
        f(0, "", st, n, ans); 
        return ans;
    }
};