/*
ou are given three inputs: a string, one letter, and a second letter.

Write a function that returns true if every instance of the first letter occurs before every instance of the second letter.

Examples
firstBeforeSecond("a rabbit jumps joyfully", 'a', 'j') ? true
// every instance of "a" occurs before every instance of "j"

firstBeforeSecond("knaves knew about waterfalls", 'k', 'w') ?  true

firstBeforeSecond("happy birthday", 'a', 'y') ? false
// the "a" in "birthday" occurs after the "y" in "happy"

firstBeforeSecond("precarious kangaroos", 'k', 'a') ? false
*/
using namespace std;
bool firstBeforeSecond(std::string str, char first, char second) {
	int secondLetter=0;
	//we returns true if every instance of the first letter occurs before every instance of the second letter,else we return false.
	for(int i=0;i<str.size();i++)
	{ 
		if(str[i]==second)
		{
			secondLetter++;
		}
		if(str[i]== first)
		{
			if(secondLetter>0)
				return false;
		}

	}
	return true;
}
