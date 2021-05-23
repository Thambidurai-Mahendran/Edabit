/*
Create a function to return the Nth number in the Fibonacci sequence as a string.

Examples
fibonacci(10) ? "55"

fibonacci(20) ? "6765"

fibonacci(30) ? "832040"

fibonacci(40) ? "102334155"

fibonacci(50) ? "12586269025"

fibonacci(60) ? "1548008755920"

NOTE:below program only use under the ULL limit
*/
std::string fibonacci(int n) {
unsigned long long int a[10000],i;
	a[0]=0;
	a[1]=1;
	//below looping used to find the nth fibonacci number
	for( i=2;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	return std::to_string(a[n]);	
}
