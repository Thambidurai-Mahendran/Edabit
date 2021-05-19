/*
Write a function that converts a string into star shorthand. If a character is repeated n times, convert it into character*n.

Examples
toStarShorthand("abbccc") ? "ab*2c*3"

toStarShorthand("77777geff") ? "7*5gef*2"

toStarShorthand("abc") ? "abc"

toStarShorthand("") ? 
*/
 using namespace std;
std::string toStarShorthand(std::string str) {
	string toShort="";
	for (int i = 0; i < str.length(); i++) 
	{
		char c = str[i];
		toShort=toShort+c;
		int count = 1;
		/*count the same characters count*/
		while (str[++i] == c)
			count++;
		i--;
		/*If a character is repeated n times, convert it into character*n*/
		if (count > 1)
			toShort+= "*"+to_string((count));
	
	}
	return toShort;
}
