/*
Create a function that accepts a string as an argument. Find its shortest word(s) and return them as an array sorted alphabetically (if there are multiple shortest words).

Examples
findShortestWords("I think the solution is fairly obvious.") ? ["i"]

findShortestWords("Chase two rabbits, catch none.") ? ["two"]

findShortestWords("We become what we think about.") ? ["we", "we"]

findShortestWords("The quick brown fox jumped over the lazy dogs back.") ? ["fox", "the", "the"]
*/
std::vector<std::string> findShortestWords(std::string s) {
	std::vector<std::string>shortestWords;
	int count=0,min=100;
	//first we find the small words size
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' '||s[i]=='.'||s[i]==';')
		{ 
			
			if(min>count)
				min=count;
			count=0;
		}
		else count++;
	}
	count=0;int index=0;
	std::string shortWord="";
	//we store the small words into the vector string 
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' '||s[i]=='.'||s[i]==';')
		{  
			if(count==min)
				shortestWords.push_back((shortWord));
			shortWord="";
			count=0;
		}
		else
		{
			count++;
			if(s[i]>=65&&s[i]<=90)
				shortWord+=s[i]+32;
			else 	
			shortWord+=s[i];
		}
	}
  sort(shortestWords.begin(),shortestWords.end());
	return shortestWords;
	
}
