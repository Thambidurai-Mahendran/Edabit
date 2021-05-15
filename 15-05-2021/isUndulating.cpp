/*
If we think at the first digit of an undulating number as an "A", and to its second digit as a "B", we can notice a sequence of the form "ABA", that can repeat infinite times and ends either with an "A" or with a "B", but without clusters of "AA" or "BB" into it.

Given a positive integer n, implement a function that returns true if n is an Undulating number, or false if it's not.

Examples
isUndulating(121) ? true
// A = 1, B = 2
// The sequence ABA is valid

isUndulating(373737) ? true
// A = 3, B = 7
// The sequence ABABABAB is valid

isUndulating(12) ? false
// Less than three digits

isUndulating(12122) ? false
// The sequence ABABB is not valid

isUndulating(85856) ? false
// More than two different digits
*/
using namespace std;
bool isUndulating(int n) {
	string undulatingNums=to_string(n);
	int size=undulatingNums.size();
	/*Given number contains less than 3 digits we return false*/
	if(size<3) 
	   return false;
	char firstLetter= undulatingNums[0],secondLetter= undulatingNums[1];
	/*we check the even index place characters are same or not*/
	for(int i=2;i<size;i+=2)
	{
		if( undulatingNums[i]!=firstLetter) 
		return false;
	}
	/*we check the odd index place characters are same or not*/
	for(int i=3;i<size;i+=2)
	{
		if( undulatingNums[i]!=secondLetter) 
		return false;
	}
	return true;
}
