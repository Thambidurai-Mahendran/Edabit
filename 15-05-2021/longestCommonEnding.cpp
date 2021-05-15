/*
Write a function that returns the longest common ending between two strings.

Examples
longestCommonEnding("multiplication", "ration") ? "ation"

longestCommonEnding("potent", "tent") ? "tent"

longestCommonEnding("skyscraper", "carnivore") ? ""
*/

using namespace std;

string longestCommonEnding(string s1, string s2) {
	string longestCommonEndings;
	int i=s1.size()-1;
	int j=s2.size()-1;
	/*we use the below looping compare the strings in decreasing index order*/
	while(1)
	{
		if(s1[i]==s2[j])
			longestCommonEndings+=s1[i];
		else break;
		i--;
		j--;
	}
	reverse(longestCommonEndings.begin(),longestCommonEndings.end());
	return longestCommonEnding;
}
