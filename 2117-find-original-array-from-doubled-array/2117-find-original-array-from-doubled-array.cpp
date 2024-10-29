class Solution {
public:
    vector<int> findOriginalArray(vector<int>& arr) {
        int n=arr.size();
        if (n % 2 == 1) return {};
        sort(arr.begin(),arr.end());
 vector<int> ans;
       unordered_map<int,int>mp;
       for(auto it:arr){
        mp[it]++;
       }

     for (int i = 0; i < n; i++) {
          if (mp[arr[i]] == 0) continue;
          if (mp[arr[i] * 2] == 0) return {};
          ans.push_back(arr[i]);
          mp[arr[i]]--;
          mp[arr[i] * 2]--;
        }
        return ans;



























































    }
};