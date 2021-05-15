/*
A pandigital number contains all digits (0-9) at least once. Write a function that takes an integer, returning true if the integer is pandigital, and false otherwise.

Examples
isPandigital(98140723568910) ? true

isPandigital(90864523148909) ? false
// 7 is missing.

isPandigital(112233445566778899) ? false

*/
bool isPandigital(double n) {
	long long int a[10];
	for(int i=0;i<10;i++)
		a[i]=0;
	/*we convert double to long int and it store in the num variabele*/	
	long long int num=(long long int)n;
	while(num>0)
	{
		a[num%10]=1;
		num/=10;
	}
	/* below looping used to check the all digits present in the number or not*/
	for(int i=0;i<10;i++)
	{
		if(a[i]==0)
			return false;
	}
	return true;
}
