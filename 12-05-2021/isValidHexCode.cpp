bool isValidHexCode(std::string str) {
	  if(str[0]!='#'||str.size()!=7)
	  {
		return false;
	  }
	  for(int i=1;i<str.size();i++)
	  {
		if(!((str[i]>='a'&&str[i]<='f')||(str[i]>='A'&&str[i]<='F')||(str[i]>='0'&&str[i]<='9'))) 
	        {
	         	 return false;	 
	        }
	  }
	  return true;
}
