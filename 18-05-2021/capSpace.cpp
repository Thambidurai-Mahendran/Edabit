/*
Create a function which adds spaces before every capital in a word. Uncapitalize the whole string afterwards.

Examples
capSpace("helloWorld") ? "hello world"

capSpace("iLoveMyTeapot") ? "i love my teapot"

capSpace("stayIndoors") ? "stay indoors"
*/
using namespace std;
std::string capSpace(std::string txt) {
	string capitalSplit;
	/*below looping which adds the spaces before every capital in a word ,also convert capital to small*/
	for(int i=0;i<txt.size();i++)
	{
		if(txt[i]>='a'&&txt[i]<='z')
		{
			capitalSplit+=txt[i];
		}
		else 
		{
			capitalSplit+=" ";
			capitalSplit+=txt[i]+32;
		}
	}
	return capitalSplit;
}
