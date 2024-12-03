class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
       string ans="";
        int index=0;
        int i=0;
        while(i<s.size()){
            if(index<spaces.size() && i==spaces[index] ){
                ans+=" ";
                index++;
            }else{
                ans+=s[i];
                i++;
            }
        }


        return ans;
        

    }
};