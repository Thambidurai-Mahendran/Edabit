/*
Given a string, create a function which outputs an array, building and deconstructing the string letter by letter. See the examples below for some helpful guidance.

Examples
constructDeconstruct("Hello") ? [
  "H",
  "He",
  "Hel",
  "Hell",
  "Hello",
  "Hell",
  "Hel",
  "He",
  "H"
]

constructDeconstruct("edabit") ? [
  "e",
  "ed",
  "eda",
  "edab",
  "edabi",
  "edabit",
  "edabi",
  "edab",
  "eda",
  "ed",
  "e"
]

constructDeconstruct("the sun") ? [
  "t",
  "th",
  "the",
  "the ",
  "the s",
  "the su",
  "the sun",
  "the su",
  "the s",
  "the ",
  "the",
  "th",
  "t"
]
*/
using namespace std;
std::vector<std::string> constructDeconstruct(std::string str) {
	vector<string>constructDeconstruct;
	int cur=0;
	/*below looping used to construct */
	for(int i=0;i<str.size();i++)
	{
		for(int j=0;j<=i;j++)
		{
			constructDeconstruct[cur++]+=str[j];
		}
	}
	/*below looping used to deconstruct*/
	for(int i=str.size()-2;i>=0;i--)
	{
		for(int j=0;j<=i;j++)
		{
			constructDeconstruct[cur++]+=str[j];
		}
	}
	return constructDeconstruct;
}
