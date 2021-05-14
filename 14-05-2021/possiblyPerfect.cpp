using namespace std;
bool possiblyPerfect(std::vector<char> key, std::vector<char> answers) {
	int countOfCrtAns=0,countOfWrongAns=0;
	/* This for loop is used to find correct answers count*/
	for(int i=0;i<key.size();i++)
	{
		if(key[i]=='_')
		{
			countOfCrtAns++;
		}
		else if(key[i]==answers[i])
		{
			countOfCrtAns++;
		}
	}
	/* students get 100% correct answers when the correct answers count is equal to string size*/
	if(countOfCrtAns==key.size())
	{
		return true;
	}
	/* This for loop is used to find wrong answers count*/
	for(int i=0;i<key.size();i++)
	{
		if(key[i]!=answers[i])
		{
			countOfWrongAns++;
		}
	}
	/* students get 100% wrong answers when the wrong answers count is equal to string size*/
	if(countOfWrongAns==key.size())
	{
		return true;
	}
	/* students didnt gave 100% wrong answers as well as 100% right answers ,so we return false */
	return false;
}
