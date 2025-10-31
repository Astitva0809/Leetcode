class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> mp; 
    vector<int> res;  

    for (int num : nums) {
        mp[num]++;
    }

  
    for (auto& entry : mp) {
        if (entry.second > 1) {
            res.push_back(entry.first);
        }
    }
sort(res.begin(),res.end());
    return res;
    }
};