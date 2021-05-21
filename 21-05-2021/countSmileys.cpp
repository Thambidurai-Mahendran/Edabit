/*
Create a function that takes an array of strings and return the number of smiley faces contained within it. These are the components that make up a valid smiley:

A smiley has eyes. Eyes can be : or ;.
A smiley has a nose but it doesn't have to. A nose can be - or ~.
A smiley has a mouth which can be ) or D.
No other characters are allowed except for those mentioned above.

Examples
countSmileys([":)", ";(", ";}", ":-D"]) ? 2

countSmileys([";D", ":-(", ":-)", ";~)"]) ? 3

countSmileys([";]", ":[", ";*", ":$", ";-D"]) ? 1
*/
int countSmileys(std::vector<std::string> arr) {
	int count=0;
	for(int i=0;i<arr.size();i++)
	{    
		int eyes=0,mouth=0,nose=0,others=0;
		for(int j=0;j<arr[i].size();j++)
		{   
		    //total eyes count
			if(arr[i][j]==';'||arr[i][j]==':')
			{
				eyes++;
			}
			//total mouth count
            else if(arr[i][j]==')'||arr[i][j]=='D')
			{
				mouth++;
			}
			//total nose count
			else if(arr[i][j]=='-'||arr[i][j]=='~')
			{
				nose++;
			}
			//others count
			else others++;
		}
		//If others count is not equal to zero then its not a smile :-)
		//If eyes and mouth count is greater than or less than one its not a smile :-)
		//if nose count is greater than one its not a smile :-)
		if(mouth==1&&eyes==1&&others==0&&(nose==0||nose==1))
			count++;
	}
	return count;
}
