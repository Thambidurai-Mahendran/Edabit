/*
Create a function that takes two integers and returns true if a digit repeats three times in a row at any place in num1 AND that same digit repeats two times in a row in num2.

Examples
trouble(451999277, 41177722899) ? true

trouble(1222345, 12345) ? false

trouble(666789, 12345667) ? true

trouble(33789, 12345337) ? false
*/
bool trouble(int num1, int num2) {
	  std::string firstNum=std::to_string(num1);
	  std::string secondNum=std::to_string(num2);
	  int count[1000]={0},flag=0,counts=0;
	  char c;
	  //find three times digit in first num and store the character in c character variable 
	  for(int i=0;i<firstNum.size();i++)
	  {
		    count[firstNum[i]]++;
			  if(count[firstNum[i]]==3)
				{
					c=firstNum[i];
					flag=1;
					break;
				}
	  }
	if(flag==0)
		return false;
	//if the  c character comes two times in a row we return true else return false	
	for(int i=0;i<secondNum.size();i++)
	{
		if(c==secondNum[i])
			counts++;
	}
	if(counts>=2)
		return true;
	return false;
}
