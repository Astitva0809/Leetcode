class Solution {
public:
    bool scoreBalance(const std::string& s) {
        int total = 0;
        for (char c : s) {
            total += c - 'a' + 1;
        }

        int leftSum = 0;
      
        for (size_t i = 0; i < s.length() - 1; ++i) {
            leftSum += s[i] - 'a' + 1;
            int rightSum = total - leftSum;
            if (leftSum == rightSum) {
                return true;
            }
        }
        return false;
    }
};