class Solution {
public:
    bool bs( vector<int>& nums, int target){
        if(target<0){
            return false;
        }

        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)/2;

            if(nums[mid]==target){
                return true;
            }else if(nums[mid] >target){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return false;
    }

    int longestSquareStreak(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
       int maxi=0;
       unordered_set<int>st;

       for(int current :nums){
          
          int element=current;
          int len=1;

          while(true){

            if((long long)element *(long long)element >1e5)break;

            if(bs(nums, element*element)){
                element*=element;
                st.insert(element);
                len++;
            }else{
                break;
            }
          }

          maxi=max(maxi,len);
       }

       if(maxi<2){
        return -1;
       }
       return maxi;
    }
};