using namespace std;
std::string firstNonRepeatedCharacter(std::string str) {
	/*Create integer array*/
	vector<int>repeatedCounts;
	/*Create a string to store a non repeated character*/
	string nonRepeatedCharacter;
	for(int i=0;i<str.size();i++)
	{   
	    /*It is used to count the repeated characters count*/ 
		repeatedCounts[str[i]]++;
	}
	for(int i=0;i<str.size();i++)
	{    
	    /*If the character count is equal to 1 .it is a non repeating character .So, We use the If statement to find the non repeating character */ 
		if(repeatedCounts[str[i]]==1)
		{
			nonRepeatedCharacter+=str[i];
			return nonRepeatedCharacter;
		}
	}
	/*If all characters are repeated then, we store the word "Invalid" in the string */
	nonRepeatedCharacter+="Invalid";
	return nonRepeatedCharacter;
}
