/*
Every even whole number greater than 2 is the sum of two prime numbers."

Even though it's been thoroughly tested and analyzed and seems to be true, it hasn't been proved yet (thus, remaining a conjecture.)

Create a function that takes a number and returns an array as per the following rules:

If the given number is odd and less than two, return an empty array.
If the given number is even and greater than two, return an array of two prime numbers whose sum is the given input.
Both prime numbers must be the farthest (with the greatest difference).
Examples
goldbachConjecture(1) ? []
// The given number is not greater than 2.

goldbachConjecture(7) ? []
// The given number is not an even number.

goldbachConjecture(14) ? [3, 11]
*/
using namespace std;
bool isPrime(int );
std::vector<int> goldbachConjecture(int n) {
	//If the given number is odd and less than two, return an empty array.
   if (n < 2 || n % 2) return {};
	for (int i = 2; i <= n / 2; i++)
		if (isPrime(i) && isPrime(n - i))
			return {i, n - i};
}
//below function used to check given num is prime or not
bool isPrime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
