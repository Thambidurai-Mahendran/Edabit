using namespace std;
std::string xPronounce(std::string sentence) {
	string pronounceTheXs;
	/*Replace all x's with "cks" UNLESS:

    The word begins with "x", therefore replace it with "z".
    The word is just the letter "x", therefore replace it with "ecks". */
	for(int i=0;i<sentence.size();i++)
	{
		if(sentence[i]=='x'&&sentence[i-1]==' '&&sentence[i+1]!=' ')
		{
			pronounceTheXs+='z';
		}
		else if(sentence[i]=='x'&&sentence[i-1]==' '&&sentence[i+1]==' ')
		{
					pronounceTheXs+="ecks";
		}
		else if(sentence[i]=='x')
		{
			pronounceTheXs+="cks";
		}
		else pronounceTheXs+=sentence[i];
	}
	return pronounceTheXs;
}
