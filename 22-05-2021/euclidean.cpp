/*
Welcome to part two of the collection for Computer Science Algorithms. This challenge will deal further with writing recursive functions by covering the Euclidean Algorithm. The "Euclidean Algorithm" is a method for finding the greatest common divisor (GCD) of two numbers. It was originally described by the Greek mathematician Euclid.

Algorithm
For the sake of simplicity I'll refer to the first number as "a", the second number as "b", and the remainder as "r". The algorithm can be broken down into four steps:

1.Ensure that "a" >= "b". If "a" < "b", swap them.
2.Find the remainder. Divide "a" by "b" and set "r" as the remainder.
3.Is "r" zero? If so terminate the function and return "b" (the second number).
4.Set "a" = "b" and "b" = "r" and start the algorithm over again.
Instructions
Create a recursive function that returns the GCD between two positive numbers using the Euclidean Algorithm.

Examples
euclidean(8, 6) ? 2

euclidean(25, 5) ? 5

euclidean(49, 14) ? 7
*/
int euclidean(int a, int b) {
	int r;
	//1.Ensure that "a" >= "b". If "a" < "b", swap them.
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}
	//2.Find the remainder. Divide "a" by "b" and set "r" as the remainder.
	r = a%b;
	//3.Is "r" zero? If so terminate the function and return "b" (the second number).
	if(r==0)
	{
		return b;
	}
	//4.Set "a" = "b" and "b" = "r" and start the algorithm over again.
	else
	{
		return euclidean(b,r);
	}
}
