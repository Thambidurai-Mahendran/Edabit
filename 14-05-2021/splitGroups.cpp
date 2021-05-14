using namespace std;
std::vector<std::string> splitGroups(std::string s) {
	vector<string>identicalStrings;
	int index=0;
	for(int i=0;i<s.size();i++)
	{
		identicalStrings[index]+=s[i];
		/*  we increase the index of the identicalStrings array when the current and next character are different  */
		/*Its also used to split groups*/
		if(s[i]!=s[i+1])
		{
			index++;
		}
	}
	return identicalStrings;
}
