/*
Given an integer num, implement a function that returns true is num is an Alternating number, or false if it's not.

Examples
isAlternating(123) ? true
// 1 is odd, 2 is even, 3 is odd

isAlternating(67) ? true
// 6 is even, 7 is odd

isAlternating(2380) ? false
// 2 is even, 3 is odd, 8 is even, 0 is even

isAlternating(75) ? false
// 7 is odd, 5 is odd
*/
bool isAlternating(int num) {
	int even=0,odd=0,consecutiveNums=2;
	if(num<=0)
		return false;
	/*below looping used to check the num is a alternating number or not*/	
	while(num>0)
	{
		int rem=num%10;
		if(rem%2==0)
		{ 
			if(consecutiveNums==0)
				return false;
			consecutiveNums=0;
			even++;
		}
		else 
		{
			if(consecutiveNums==1)
				return false;
			consecutiveNums=1;
			odd++;
		}	
		num/=10;
	}
	return true;
}
