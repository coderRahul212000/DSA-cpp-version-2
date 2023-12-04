#include <bits/stdc++.h> 

void ansString(string &str, int i , int j){
	//base case
	if(i>j) return  ;

	swap(str[i++],str[j--]);
	ansString(str,i,j);
	

}
string reverseString(string str)
{
	// Write your code here.
	ansString(str,0,str.length()-1);
	return str;
	

}