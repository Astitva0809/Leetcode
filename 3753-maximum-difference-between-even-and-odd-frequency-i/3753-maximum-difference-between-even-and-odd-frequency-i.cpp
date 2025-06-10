class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mpp;
        int maxi = 0, mini = s.size();
        for(auto it:s){
            mpp[it-'a']++;
        }
        for (int i = 0 ; i < 26; i++) {
            if (mpp[i] % 2 != 0) maxi = max(maxi, mpp[i]);
            if (mpp[i] % 2 == 0 && mpp[i] > 0) mini = min(mini, mpp[i]);
        } 
        return maxi - mini;

    }
};