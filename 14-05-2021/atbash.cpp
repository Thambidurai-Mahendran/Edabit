using namespace std;
std::string atbash(std::string str) {
	/*Create mirror letters string to store the mirror letters */
	string mirrorLetters;
	/*iterate the full string*/
	for(int i=0;i<str.size();i++)
	{
		/*we used Ascii values to find mirror letters for Lowercase letters and Uppercase letters */
		if(str[i]>=97&&str[i]<=122)
		{
		mirrorLetters+=97-str[i]+122;
		}
		else if(str[i]>=65&&str[i]<=90)
		{
			mirrorLetters+=65-str[i]+90;
		}
		else mirrorLetters+=str[i];
	}
	/*Finally We return the Mirror letters string*/
	return mirrorLetters;
}
