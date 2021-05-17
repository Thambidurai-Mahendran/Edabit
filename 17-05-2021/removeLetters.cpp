/*
Create a function that takes an array and string. The function should remove the letters in the string from the array, and return the array.

Examples
removeLetters(["s", "t", "r", "i", "n", "g", "w"], "string") ? ["w"]

removeLetters(["b", "b", "l", "l", "g", "n", "o", "a", "w"], "balloon") ? ["b", "g", "w"]

removeLetters(["d", "b", "t", "e", "a", "i"], "edabit") ? []
*/
using namespace std;
std::vector<char> removeLetters(std::vector<char> letters, std::string word) {
	/* If all the characters in the string called word is in the array named letters,then we should replace that character with 0*/
	  for(int i=0;i<word.size();i++)
		{
			for(int j=0;j<letters.size();j++)
			{
				if(word[i]==letters[j])
				{
					letters[j]=0;
					break;
				}
			}
		}
	vector<char>removeLetters;
	/*below looping used to find the remove letters */
	for(int i=0;i<letters.size();i++)
	{
		if(letters[i]!=0)
			removeLetters.push_back(letters[i]);
	}
	return removeLetters;
}
