using namespace std;
std::string afterPotion(std::string s) {
	string afterPotions;
	/* It will be easy to add or subtract one if the growing  and shrinking postion is taken in decreasing order..*/
	for(int i=s.size()-1;i>=0;i--)
	{   
	    /*1f s[i]="B" immediately follows a digit, Subtract 1 to the digit.*/
	    if(s[i]=='B')
	   {
		   i--;
		   s[i]=s[i]-1;
	   }
	   /*If s[i]="A" immediately follows a digit, add 1 to the digit.*/
	   if(s[i]=='A')
	   {
		    i--;
		    if(s[i]=='9')
		   {
			 s[i]=s[i]+1;
			 afterPotions+="01";
	       }
		   else s[i]=s[i]+1;
	   }
	   if(s[i]>='0'&&s[i]<='9')
	   {
		   afterPotions+=s[i];
	   }
	}
    /* Since the iteration is done in decreasing order,the obtained answer will be the reverse of the correct one  and hence the  answer should be  reversed.*/
	reverse(afterPotions.begin(),afterPotions.end());
	return afterPotions;
}
