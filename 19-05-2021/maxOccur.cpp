/*
Given a string text. Write a function that returns the character with the highest frequency. If more than 1 character has the same highest frequency, return all those characters as an array. If there is no repetition in characters, return [].

Examples
maxOccur("Computer Science") ? ['e']

maxOccur("Edabit") ? []

maxOccur("system admin") ? ['m', 's']

maxOccur("the quick brown fox jumps over the lazy dog") ? [' ']
*/
using namespace std;
std::vector<char> maxOccur(std::string text) {
	vector<char>counts;
	 vector<char>maxOccurence;
	int max=0;
	/*below looping used to count the characters count */
	for(int i=0;i<text.size();i++)
	{
		counts[text[i]]++;
		if(max<counts[text[i]])
			max=counts[text[i]];
	}
	int s[100]={0};
	/*below looping used to store the maximum characters count */
	for(int i=0;i<text.size();i++)
	{
		if(max==counts[text[i]]||s[text[i]]==0)
			maxOccurence.push_back(text[i]);
		s[text[i]]=1;
			
	}
	 return maxOccurence;
}
