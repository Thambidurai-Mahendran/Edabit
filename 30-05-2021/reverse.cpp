/*
Create a function that reverses letters in a string but keeps digits in their current order.

Examples
reverse("ab89c") ? "cb89a"

reverse("jkl5mn923o") ? "onm5lk923j"

reverse("123a45") ? "123a45"

*/
std::string reverse(std::string str) {
	std::string letters;
	//first we split Alphabet characters separately
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>=97&&str[i]<=122)
			letters+=str[i];
	}
	//we arrage the alphabets in ascending order
	for(int i=0;i<letters.size();i++)
	{
		for(int j=0;j<letters.size();j++)
		{
			if(letters[j]<letters[j+1])
			{
				char temp=letters[j];
				letters[j]=letters[j+1];
				letters[j+1]=temp;
			}
		}
	}
	std::string reverse;int cur=0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>=97&&str[i]<=122)
		{
			reverse+=letters[cur++];
		}
		else reverse+=str[i];
	}
	return reverse ;
}
