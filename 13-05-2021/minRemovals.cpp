int minRemovals(std::string str1, std::string str2) {
	/* we use count function to use couting the how many same characters in a strings*/
	int count=0;
	/*Iterate the first string*/
	for(int i=0;i<str1.size();i++)
	{  
     /*Iterate the second string */
	   for(int j=0;j<str2.size();j++)
	   {    /*we use the if statement to check the same letters in a string */
	        if(str1[i]==str2[j])
			    {
			      count++;
			      str2[j]=0;
			      break;
			    }
		 }
  }
	/*If we get the same letters count then we subtract same letters count in each strings and we get the Minimum Removals to Make Two Strings Anagrams */ 
	return str1.size()-count+str2.size()-count;
}
