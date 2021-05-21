                                   /*FIND THE NEXT PRIME NUMBER  */
                                     
#include <math.h>
using namespace std;
//below function used to check give num is prime or not...
int isPrimeOrNot(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int nextPrime(int num) {
	if(num==1)return 2;
	for(int i=num;;i++)
	{    
	    //i is a prime number when the isPrimeOrNot function return 1..
		if(isPrimeOrNot(i)==1)
		{
			return i;
		}
	}
}
