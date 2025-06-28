class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
           int n = nums.size();
        vector<pair<int, int>> indexed;

        for (int i = 0; i < n; ++i)
            indexed.emplace_back(nums[i], i);

        sort(indexed.begin(), indexed.end(), [](auto& a, auto& b) {
            return a.first > b.first;
        });

        indexed.resize(k);

        sort(indexed.begin(), indexed.end(), [](auto& a, auto& b) {
            return a.second < b.second;
        });

        vector<int> result;
        for (auto& [val, _] : indexed)
            result.push_back(val);

        return result;
    }
};