/*
Create a function that determines whether it is possible to build a palindrome from the characters in a string.

Examples
possiblePalindrome("acabbaa") ? true
// Can make the following palindrome: "aabcbaa"

possiblePalindrome("aacbdbc") ? true
// Can make the following palindrome: "abcdcba"

possiblePalindrome("aacbdb") ? false

possiblePalindrome("abacbb") ? false

*/
using namespace std;
bool possiblePalindrome(std::string s) {
	vector<int>count ;
	/*below looping is used to find the characters count*/
	for(int i=0;i<s.size();i++)
	{
		count[s[i]]++;
	}
	for(int i=0;i<s.size();i++)
	{
		for(int j=0;j<s.size();j++)
		{
			if(s[i]==s[j]&&s[i]!=0&&s[j]!=0)
			{
				s[j]=0;
			}
		}
	} int odd=0;
	/*if the string contain more than 1 number of odd count characters we return false */ 
	for(int i=0;i<s.size();i++)
	{
		if(count[s[i]]%2!=0&&s[i]!=0)
			odd++;
		if(odd>1)
			return false;
	}
	return true;
}
