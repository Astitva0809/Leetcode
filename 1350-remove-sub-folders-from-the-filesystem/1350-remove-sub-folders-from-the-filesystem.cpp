class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
           unordered_set<string>uset(folder.begin(),folder.end());
        vector<string>ans;
         int n=folder.size();
         for(string it:folder){  //o(n)
            string temp=it;
            bool flag=true;
            while(!it.empty()){
                int pos=it.find_last_of('/'); //o(l)
                it=it.substr(0,pos);           //o(l)
                if(uset.find(it)!=uset.end()){
                    flag=false;
                    break;
                }
            }

            if(flag==true){
                ans.push_back(temp);
            }
         }

         return ans;
    }
};