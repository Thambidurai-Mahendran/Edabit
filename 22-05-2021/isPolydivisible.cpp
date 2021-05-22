/*
In mathematics a Polydivisible Number (or magic number) is a number in a given number base with digits abcde... that has the following properties:

Its first digit a is not 0.
The number formed by its first two digits ab is a multiple of 2.
The number formed by its first three digits abc is a multiple of 3.
The number formed by its first four digits abcd is a multiple of 4.
etc.
Create a function which takes an integer n and returns true if the given number is a Polydivisible Number and false otherwise.

Examples
isPolydivisible(1232) ? true
// 1     / 1 = 1
// 12    / 2 = 6
// 123   / 3 = 41
// 1232  / 4 = 308

isPolydivisible(123220 ) ? false
// 1   / 1 = 1
// 12   / 2 = 6
// 123   / 3 = 41
// 1232   / 4 = 308
// 12322   / 5 = 2464.4         // Not a Whole Number
// 123220   /6 = 220536.333...  // Not a Whole Number
*/
bool isPolydivisible(long n) {
	std::string divisible=std::to_string(n);
	int num=1;
	for(int i=0;i<divisible.size();i++)
	{    
	        //The number formed by its first two digits ab is a multiple of 2.
                //The number formed by its first three digits abc is a multiple of 3.
                //The number formed by its first four digits abcd is a multiple of 4.
		std::string step="";
		for(int j=0;j<=i;j++)
		{
			  step+=divisible[j];
		}
		//we check every step  formed number is whole or not
		if(stoi(step)%num==0)
			num++;
		else return false;
	}
	return true;
}
