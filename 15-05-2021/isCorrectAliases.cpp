/*
problem:

You are in the process of creating a chat application and want to add an anonymous name feature. This anonymous name feature will create an alias that consists of two capitalized words beginning with the same letter as the users first name.

Create a function that determines if the array of users is mapped to an array of anonymous names correctly.

Examples
isCorrectAliases(["Adrian M.", "Harriet S.", "Mandy T."], ["Amazing Artichoke", "Hopeful Hedgehog", "Marvelous Mouse"]) ? true

isCorrectAliases(["Rachel F.", "Pam G.", "Fred Z.", "Nancy K."], ["Reassuring Rat", "Peaceful Panda", "Fantastic Frog", "Notable Nickel"]) ? true

isCorrectAliases(["Beth T."], ["Brandishing Mimosa"]) ? false
// Both words in "Brandishing Mimosa" should begin with a "B" - "Brandishing Beaver" would do the trick.

*/
using namespace std; 

bool isCorrectAliases(vector<string> names, vector<string> aliases) {
	for(int i=0;i<names.size();i++)
	{
		char userFirstLetter=names[i][0];
		/*below looping used to find the user first letter is equal to the  first letter of every words in a aliases string */
		for(int j=0;j<aliases[i].size();j++)
		{
			if(j==0||aliases[i][j-1]==' ')
			{
				if(userFirstLetter!=aliases[i][j])
					return false;
			}
		}
	}
	return true;
}
