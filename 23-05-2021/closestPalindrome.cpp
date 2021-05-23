/*
Write a function that returns the closest palindrome number to an integer. If two palindrome numbers tie in absolute distance, return the smaller number.

Examples
closestPalindrome(887) ? 888

closestPalindrome(100) ? 99
// 99 and 101 are equally distant, so we return the smaller palindrome.

closestPalindrome(888) ? 888

closestPalindrome(27) ? 22
*/
#include<string>
int closestPalindrome(int n) {
	int m=n;
	while(1)
	{   
	    //we check the num is palindrome or not in decreasing order.
		if(m>0)
		{
			std::string isPalindrome=std::to_string(m);
		reverse(isPalindrome.begin(),isPalindrome.end());
		if(isPalindrome==std::to_string(m))
			return m;
		m--;
		}
		//we check the num is palindrome or not in increasing order
		std::string isPalindrome=std::to_string(n);
		reverse(isPalindrome.begin(),isPalindrome.end());
		if(isPalindrome==std::to_string(n))
			return n;
		n++;
		
		
	}
}
