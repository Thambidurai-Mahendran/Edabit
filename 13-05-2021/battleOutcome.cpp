int battleOutcome(int num) {
	 /*First we convert the num integer to string ,Its very useful to iterate index vise*/
	 std::string numStr=std::to_string(num);
	 /*create battleOut string */ 
	 std::string battleOut;
	 /*iterate the full string and the index is incremented by two each steps*/
	 for(int i=0;i<numStr.size();i+=2)
	 {  
	    /*if numStr[i] andnumStr[i+1]  values are different we find the big value and add it to the battleOutstring*/
		if(numStr[i]!=numStr[i+1])
		{
		   battleOut+=(numStr[i]>numStr[i+1])?numStr[i]:numStr[i+1];
		}
	 }
	 /* Finally we convert the string(battleOut) to integer*/
	 int ans=stoi(battleOut); 																								 
	 return ans; 
}
