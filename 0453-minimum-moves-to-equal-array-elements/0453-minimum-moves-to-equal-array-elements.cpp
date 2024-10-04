class Solution {
public:
    int minMoves(vector<int>& nums) {
        // ->2,3,3    3,4,3   4,4,4 
        int m=INT_MAX;
			for(int n:nums) m = min(m,n);
			int ans=0;
			for(int n:nums) ans+=n-m;
			return ans;
    }
};