using namespace std;
std::vector<std::string> leftRotations(std::string str) {
	/*First we create the string array*/
	vector<string>rotateLeft;
	int index=0;
	rotateLeft[index++]+=str;
	/*This below looping is used to get the all left rotations*/
	for(int i=0;i<str.size()-1;i++)
	{
		char leftMostElement=str[0];
		for(int j=1;j<str.size();j++)
		{
			str[j-1]=str[j];
		}
		str[str.size()-1]=leftMostElement;
		rotateLeft[index++]+=str;
	}
	/*Finally we return the all left rotations */
	return rotateLeft;
}
using namespace std;
std::vector<std::string> rightRotations(std::string str) {
	/*First we create the string array*/
	vector<string>rotateRight;
	int index=0;
	rotateRight[index++]+=str;
	/*This below looping is used to get the all right rotations*/
	for(int i=0;i<str.size()-1;i++)
	{
		char rightMostElement=str[str.size()-1];
		for(int j=0;j<str.size()-1;j++)
		{
			str[j+1]=str[j];
		}
		str[0]=rightMostElement;
		rotateRight[index++]+=str;
	}
	/*Finally we return the all right rotations */
	return rotateRight;
}
