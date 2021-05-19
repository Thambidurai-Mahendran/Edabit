/*
Create a function which replaces the last n words with "blah". Add "..." to the last blah.

Examples
blahBlah("A function is a block of code which only runs when it is called",  5) ? "A function is a block of code which only blah blah blah blah blah..."

blahBlah("one two three four five", 2) ? "one two three blah blah..."

blahBlah("Sphinx of black quartz judge my vow", 10) ? "blah blah blah blah blah blah blah..."
*/
using namespace std;
std::string blahBlah(std::string str, int n) {
	int count=0;
	string blahBlah;
	/*below looping used to count the space count */
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==' ')
			count++;
	}
	int spaceCount=0;
	/*if the space count is less than given n we fill the string full of blah blah blah...*/
	if(count<n)
	{
		blahBlah+="blah";
		for(int i=0;i<str.size();i++)
		{
			if(str[i]==' ')
			{
				blahBlah+=str[i];
				blahBlah+="blah";
			}
		}
		blahBlah+="...";
	}
	else 
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==' ')
		{
			spaceCount++;
			blahBlah+=str[i];
			if(spaceCount==count)
				blahBlah+="blah...";
			else if(spaceCount>=count-n+1)
				blahBlah+="blah";
		}
		else if(spaceCount<count-n+1)
		{
			blahBlah+=str[i];
		}
		
	}
	return blahBlah;
}
