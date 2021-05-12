int sharedLetters(std::string str1, std::string str2) {
	int count=0;
	for(int i=0;i<str1.size();i++)
	{
	  for(int j=0;j<str2.size();j++)
	  {
	     if(str1[i]==str2[j])
	     {
	       count++;
	       str2[j]=0;
	     }
	  }
       }
       return count;
}
