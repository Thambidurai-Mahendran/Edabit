using namespace std;
vector<string> initialize(vector<string> names) {
	/*Create a String Array */
	vector<string>initials;
	for(int i=0;i<names.size();i++)
	{    
	    /*We must store the First letter of the string */
	    /*We use push_back() function to store the character in a string*/
		  initials[i].push_back(names[i][0]);
		  /*We store the '.' character into the String*/
	    initials[i].push_back('.');
	    /*Iterate the full string*/
		  for(int j=0;j<names.size();j++)
		  {   
		     /*If the string contain two words its separated by the space So,We must include space and Next letter after the space and '.' character*/
			   if(names[i][j]==' ')
			   {
			    	initials[i].push_back(' ');
				    initials[i].push_back(names[i][j+1]);
				    initials[i].push_back('.');
				    break;
			   }
				
		  }
	}
	/*Finally We return the array of initials*/
	return initials;
}
