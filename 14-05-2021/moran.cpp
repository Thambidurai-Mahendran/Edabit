using namespace std;
bool isPrimeOrNot(int);
std::string moran(int n) {
	string isMoranOrHarshad;
	int givenNum=n,digitSum=0;
	/*This while loop used to gets the sum of the digits */
	while(n>0)
	{
		digitSum+=n%10;
		n/=10;
	}
	int reminder=givenNum%digitSum;
	/* Moran numbers yield a prime when divided by the sum of their digits.*/
	if(isPrimeOrNot(givenNum/digitSum)==true)
	{
		return "M";
	}
	/*A Harshad number is a number which is divisible by the sum of its digits*/
	else if(reminder==0)
	{
		return "H";
	}
	else return "Neither";
	
}
/*This function is used to check the given number is prime or not .If the given number is prime its return true*/
bool isPrimeOrNot(int num)
{
	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			return false;
		}
	}
	return true;
}
