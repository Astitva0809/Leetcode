class Solution {
public:
     int n;
    vector<vector<int>> result;
    void backtrack(vector<int>& temp, unordered_map<int, int>& mp) {

        if (temp.size() == n) { 
            result.push_back(temp);
            return;
        }

        for (auto& [num, count] : mp) {

            if (count == 0)
                continue;
            
            // Do something
            temp.push_back(num);
            mp[num]--;

            // Explore it
            backtrack(temp, mp);

            // Undo it
            temp.pop_back();
            mp[num]++;
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n = nums.size();
        unordered_map<int, int> mp;
        
        
        for (int& num : nums) {
            mp[num]++;
        }
        
        vector<int> temp;
        backtrack(temp, mp);
        
        return result;
        
    }
};