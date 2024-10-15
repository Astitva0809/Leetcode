class Solution {
public:
	void permute(  int ind, vector<vector<int>>& ans,vector<int>& S){
	    if(ind==S.size()){
	        ans.push_back(S);
	        return;
	    }
	    for(int i=ind;i<S.size();i++){
	        swap(S[ind],S[i]);
	        permute(ind+1,ans,S);
	        swap(S[ind],S[i]);
	        }
	    }
	
    vector<vector<int>> permute(vector<int>& S) {
        vector<vector<int>>ans;
        permute(0,ans,S);
        return ans;
    }
};