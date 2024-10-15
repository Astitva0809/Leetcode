class Solution {
public:
    bool search(vector<int>& arr, int target) {
         int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid =(low+high)/2;
            if(arr[mid]==target)return true;
            //ek aur condition lgani padegi jab low high mid teeno same hou baaki poora same hii rhega 
            if(arr[mid]==arr[low]&& arr[mid]==arr[high]){
                low=low+1;
                high=high-1;
                continue;
            }
            //left sorted array hai ki condition 
            if(arr[mid]>=arr[low]){
                if(arr[low]<=target && arr[mid]>=target){
                    high=mid-1;
                }
                else low=mid+1;
            }
            else{//right sorted array hai ki condition 
                if(arr[mid]<=target &&arr[high]>=target){
                    low=mid+1;
                }
                else high=mid-1;
            }
        }
    return false;
    }
};