#include <bits/stdc++.h> 
void solve(vector<string>& ans, string str, string output, int i){
	if(i>=str.length()){
		if(output.length()>0){
		ans.push_back(output);
		}
		return;
		
	}

	//exclusion
	solve(ans,str,output,i+1);

	//inclusion
	output.push_back(str[i]);
	solve(ans,str,output,i+1);
}
vector<string> subsequences(string str){
	
	// Write your code here
	vector<string> ans;
	string output = "";
	int i = 0;
	solve(ans,str,output,i);
	return ans;
	
}
