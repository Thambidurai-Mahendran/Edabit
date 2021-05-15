/*

Some examples of ice cream sandwiches:
 "AABBBAA"

 "3&&3"

 "yyyyymmmmmmmmyyyyy"

  "hhhhhhhhmhhhhhhhh"
Not ice cream sandwiches:
                    1."BBBBB"
                       You can't have just plain icecream.

                    2."AAACCCAA"
                       You can't have unequal sandwich ends.

                    3."AACDCAA"
                       You can't have more than one filling.

                    4."A"
                       You can't have fewer than 3 characters.    





*/
bool isIcecreamSandwich(std::string str) {
	/*Fewer than three characters its not an ice cream sandwich*/
	if(str.size()<3)
	{
		return false;
	}
	int i=0,j=str.size()-1,countCommon=0;
	/*below looping is used to check its plain icce ccream or not? */
	for(int i=0;i<str.size();i++)
	{
		if(str[0]==str[i])
		{
			countCommon++;
		}
	}
	if(countCommon==str.size())
		return false;
    /*below looping is used to check given sandwich is equal or not */		
	while(i<j)
	{
		if(str[i]!=str[j])
		{
			return false;
		}
		i++;
		j--;
	}
	if(i==j)
	{
		if(str[i]!=str[i-1]&&str[0]!=str[i-1])
			return false;
	}
	return true;
}
