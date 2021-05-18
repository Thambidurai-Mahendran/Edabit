/*
Write a function that takes in a word and splits the consonants one by one, but keeps the vowels in a cluster.

Examples
split("beautifully") ? ["b", "eau", "t", "i", "f", "u", "l", "l", "y"]

split("spoonful") ? ["s", "p", "oo", "n", "f", "u", "l"]

split("swimming") ? ["s", "w", "i", "m", "m", "i", "n", "g"]
*/
using namespace std;
std::vector<std::string> split(std::string word) {
	vector<string>splits;
	int j=-1;
	/*below looping used to splits the consonants one by one, but keeps the vowels in a cluster*/
	for(int i=0;i<word.size();i++)
	{
		if(word[i]=='a'||'e'||'i'||'o'||'u')
		{ 
			if(i==0)j++;
			splits[j]+=word[i];
		}
			
		else
		{
			j++;
			splits[j]=word[i];
		}
			
	}
	return splits;
}
