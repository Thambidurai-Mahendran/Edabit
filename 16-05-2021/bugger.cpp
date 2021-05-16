/*
Create a function that takes a number and returns its multiplicative persistence, which is the number of times you must multiply the digits in num until you reach a single digit.

Examples
bugger(39) ? 3
// Because 3 * 9 = 27, 2 * 7 = 14, 1 * 4 = 4 and 4 has only one digit.

bugger(999) ? 4
// Because 9 * 9 * 9 = 729, 7 * 2 * 9 = 126, 1 * 2 * 6 = 12, and finally 1 * 2 = 2.

bugger(4) ? 0
// Because 4 is already a one-digit number.
*/
int bugger(int num) {
	int Multiply,count=0;
	if(num<10)
		return 0;
	while(1)
	{ 
		Multiply=1;
		/*below looping used to get digits multiplication total*/
		while(num>0)
		{
			Multiply*=(num%10);
			num/=10;
		}
		num=Multiply;
		/*This count variable used to get the multiplicative persistence*/
		count++;
		/*this statement used to check its a single digit or not*/
		if(num<10)
			return count;
	}
}
