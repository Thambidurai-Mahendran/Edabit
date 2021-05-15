/*
Strings can be segregated into both their letter and digit components.

A double palindrome is when a string's letter component and digit component are both palindromes.
A single-palindrome is when either (but not both) the letter component or the digit component are palindromes.
To illustrate:

"cab97ac79" // double-palindrome
// "cabac" and "9779" are both palindromes.

"1abc4de1" // single-palindrome
// "141" is a palindrome.
*/
#include<iostream>
#include<string>
using namespace std;
std::vector<int> palindromeSet(std::vector<std::string> arr) {
	vector<int>palindromes;
	
	for(int i=0;i<arr.size();i++)
	{ int count=0;
	 string nums="",reverseNums="";
	string alphabets="",revAlphabets="";
	/* below looping used to divide the alphabets string and numbers string separately*/
		for(int j=0;j<arr[i].size();j++)
		{
			if(arr[i][j]>='0'&&arr[i][j]<='9')
				nums+=arr[i][j];
			if(arr[i][j]>='a'&&arr[i][j]<='z')
				alphabets+=arr[i][j];
		}
		reverseNums+=nums;
		reverse(nums.begin(),nums.end());
		revAlphabets+=alphabets;
		reverse(alphabets.begin(),alphabets.end());
		/*if the nums string is a palindrome we increase the count*/
		if(reverseNums==nums&&nums!="")count++;
		/*if the Alphabet string is a palindrome we increase the count*/
		if(revAlphabets==alphabets&&alphabets!="")count++;
		palindromes.push_back(count);
	}
	return palindromes;
}
