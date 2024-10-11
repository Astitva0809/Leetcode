class Solution {
public:
        int rev(int num){
        int rev = 0,rem;
        while(num != 0){
            rem = num % 10;
            rev = rev*10 + rem;
            num = num/10;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> countMap;
        int pair = 0;
        // 1e9 +7 ensure that numbers stay within a practical 
        // to perform a large number of operations 
        int mod = 1e9 +7; // 1e9 +7 -> 1000000007 is a prime number
        for (int i = 0; i < nums.size(); i++) {
            // Calculate the complement
            int complement = nums[i] - rev(nums[i]);
        
            // If complement exists in the map, add its frequency to the pair count
            if (countMap[complement] > 0) {
                pair = (pair + countMap[complement]) % mod;
            }       
        
            // Increment the count of the complement in the map
            countMap[complement]++;
        }
        return pair;
        
        

    }
};