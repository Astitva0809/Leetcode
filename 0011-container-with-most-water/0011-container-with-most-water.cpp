class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int max =1;
        int maxi=0;
        while(i<j){
            if(height[i]>height[j]){
                max=(j-i)*height[j];
                if(max>maxi){
                    maxi=max;
                }
                j--;
            }
            else{
                max=(j-i)*height[i];
                   if(max>maxi){
                    maxi=max;
                }
                i++;
            }

        }
   return maxi; }
};