using namespace std;
bool balanced(std::string word) {
	/*First we Initialize the firstHalfTotal and secondHalfTotal is equal to zero*/
	int firstHalfTotal=0,secondHalfTotal=0,wordPosition,i;
	/* This for loop is used to find The firtsHalfTotal of the string*/
	for(i=0;i<word.size()/2;i++)
	{ 
		wordPosition=word[i]-0;
		firstHalfTotal+=wordPosition-96;
	}
	/*If the string size is even we continue the starting index is half of the string size */
	if(word.size()%2==0)
	{
		i=word.size()/2;
	}
	/*If the string size is odd we continue the starting index is half of the string size increamented by one */
	else
	{
		i=word.size()/2+1;
	}
	/*This for loop is used to find the second half total of the string */
	for(;i<word.size();i++)
	{
		wordPosition=word[i]-0;
		secondHalfTotal+=wordPosition-96;
	}
	/*If the first half total is equal to the second half total we return true else we return false*/
	if(firstHalfTotal==secondHalfTotal)
	{
		return true;
	}
	return false;
}
