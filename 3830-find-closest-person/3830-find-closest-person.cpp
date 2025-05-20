class Solution {
public:
    int findClosest(int x, int y, int z) {
      int one =abs(x-z); 
        int two = abs(y-z);
        if(one == two){
            return 0;
        }
        return one > two ? 2 : 1;
    }
};