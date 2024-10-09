class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
          int n= nums.size();
        sort(nums.begin(),nums.end());
        int cnt=0;
        int i=0,j=1;
        while(j<n)
        {
            if(nums[i]<nums[j])
            {
                cnt++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return cnt;
    }
};