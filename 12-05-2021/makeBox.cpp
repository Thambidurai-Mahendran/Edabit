std::vector<std::string> makeBox(int n) {
	std::vector<std::string>Box;
	 for(int i=0;i<n;i++)
	 {   
	   for(int j=0;j<n;j++)
	   {
	     if(i==0||i==n-1||j==0||j==n-1)
	     {
		  Box[i][j]='#';
	     }
	     else 
	     {
		  Box[i][j]=' ';
	     }
	   }
	 }
	return Box;
}
