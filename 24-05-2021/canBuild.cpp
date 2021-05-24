/*
Write a function that returns true if it's possible to build a phrase str1 using only the characters from another phrase str2.

Examples
canBuild("got 2 go", "gogogo 2 today") ? true

canBuild("sit on top", "its a moo point") ? true

canBuild("long high add or", "highway road go long") ? false

canBuild("fill tuck mid", "truck falls dim") ? false
*/
using namespace std;
bool canBuild(std::string str1, std::string str2) {
	//below looping used check the characters of str1 is present in str2 or not?..
	for(int i=0;i<str1.size();i++)
	{ 
		int flag=1;
		if(str1[i]==' ')
			continue;
		for(int j=0;j<str2.size();j++)
		{
			if(str2[j]==' ')
				continue;
			if(str1[i]==str2[j])
			{
				str2[j]=1828;
				flag=0;
				break;
			}
		}
		if(flag==1)
			return false;
	}
	
	return true;
}
