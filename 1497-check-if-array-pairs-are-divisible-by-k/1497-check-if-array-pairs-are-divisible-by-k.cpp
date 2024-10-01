class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
            vector<int> v(k, 0); 
      

        for(int &num : arr) {
            int rem = (num%k + k) % k; 
            v[rem]++;
        }

        if(v[0] % 2 != 0) {
            return false;
        }

        for(int rem = 1; rem <= k/2; rem++) {
            int counterHalf = k - rem;
            if(v[counterHalf] != v[rem]) {
                return false;
            }
        }

        return true;
    }
};