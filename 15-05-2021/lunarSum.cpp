
/*  When two numbers are added together, the strange Lunar arithmetic is used on the Moon. The Lunar sum of two numbers is not determined by the sum of their individual digits, but by the highest digit of the two taken into account at each step, in columnar form.

Examples:

      2  4  6  +
      3  1  7  =
      --------
      3  4  7

      // 3 > 2 | 4 > 1 | 7 > 6

      1  3  4  +
         5  4  =
      --------
      1  5  4

       1 > 0 | 5 > 3 | 4 == 4
      Blank spots in the columnar form are equals to 0  
	 
	 
 */
int lunarSum(int number1, int number2) {
	int rem1,rem2,total=0,pow=1;
	/*below looping is used to find the big digit and add it into the total*/
	while(number1>0||number2>0)
	{
		rem1=number1%10;
		rem2=number2%10;
		if(rem1>rem2)
		{
			total=total+(rem1*pow);
			pow=pow*10;
		}
		else
		{
			total=total+(rem2*pow);
			pow=pow*10;
		}
		number1/=10;
		number2/=10;
	}
	return total;
}
