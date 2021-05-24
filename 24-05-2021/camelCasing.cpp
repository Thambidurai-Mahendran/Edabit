/*
Using Camel Case (or camelCase) is where the first word is in lower case, and all words after it have their first letter capitalised. Note that there are no spaces in between words!

Create a function that takes a string and returns it back in camelCase.

Examples
camelCasing("Hello World") ? "helloWorld"

camelCasing("snake_case") ? "snakeCase"

camelCasing("low high_HIGH") ? "lowHighHigh"
*/
std::string camelCasing(std::string str) {
	std::string camelCase;
	for(int i=0;i<str.size();i++)
	{    
	    //first word is in lower case, and all words after it have their first letter capitalised.
		if((str[i-1]=='_'||str[i-1]==' '))
		{
			if((str[i]>=97&&str[i]<=122))
			str[i]-=32;
			
		}
		//convert capital to small
		else if(str[i]>=65 && str[i]<=90)
		{
			str[i]+=32;
		}
		//there are no spaces in between words!
		if(str[i]!=' '&&str[i]!='_')
		{
			camelCase+=str[i];
		}
		
	}
	return camelCase;
}
