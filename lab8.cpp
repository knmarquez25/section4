/*
*@author Kathya Marquez
*@version 1.0.0
*015062084
*Minhthong Nguyen
*CECS 282
*10-24-18
*program checks if a binary string is a palindrome and returns true or false
*/
#include<iostream>
#include<string>
#include <ctype.h>
using namespace std;

/*
*@param text - text that is going to be checked for punctuations 
* if text equals no an nonletter or a space, the spaces or symbols are removed, converts to lower
*/
string punct(string text){
	string str="";
	for(int i = 0; i <text.length(); i++){
		text[i] = tolower(text[i]);
		if(!(ispunct(text[i]) || text[i] ==' ')){
			str += text.substr(i,1);
		}
	}return str;
}

/*
*@param text - text to be checked for palindrome
*recursive methods that checks if the binary string is a palindrome
*/
bool isPalindrome(string text){
	//cout<<text<<endl;
	text = punct(text);
	if(text.size() ==1 ||text.size()==0){ //base case
		return true;
	}else if(!(text[0]== text[text.size() -1])){ //if they are not equals then false
		return false;
	}return isPalindrome(text.substr(1,text.size()-2)); //recursive call to check all the letters in the 
	//binary string
}

int main(){
	bool itis;
	string text = "comoomoc";
	text = punct(text);
	itis= isPalindrome(text);
	cout<<itis<<endl<<endl;
	
	string text2 = "nose";
	text2 = punct(text2);
	itis = isPalindrome(text2);
	cout<<itis<<endl<<endl;
	return 0;
}
