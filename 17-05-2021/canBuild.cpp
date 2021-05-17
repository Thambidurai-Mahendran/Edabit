/*
Write a function that returns true if it is possible to build a string with a particular scrabble hand.

Examples
canBuild("quavers", ["S", "U", "Q", "V", "A", "#", "#"]) ? true

canBuild("move", ["M", "U", "T", "V", "E", "J", "#"]) ? true

canBuild("move", ["M", "U", "T", "V", "E", "J", "S"]) ? false

canBuild("sharp", ["S", "K", "H", "#", "#", "F", "F"]) ? false
*/
using namespace std;
bool canBuild(std::string word, std::vector<char> letters) {
	int count=0;
	/*If all the characters in the string called word is in the array named letters,then we should replace that character with 0*/
	for(int i=0;i<word.size();i++)
	{
		for(int j=0;j<letters.size();j++)
		{
			if(word[i]-32==letters[j])
			{
				letters[j]=0;
				count++;
				break;
			}
		}
	}
	for(int i=0;i<letters.size();i++)
		if(letters[i]=='#')
			count++;
	/*If the count is greater than or equal to word size we return true*/		
	if(count>=word.size())
		return true;
	else return false;
}
