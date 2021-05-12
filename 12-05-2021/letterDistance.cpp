int letterDistance(std::string str1, std::string str2) {
	    int Distance=0;
	    int length1=str1.size();
	    int length2=str2.size();
	    for(int i=0;i<length1&&i<length2;i++)
			{
				 if(str1[i]-str2[i]<0)
				 {
					   Distance=Distance+(str2[i]-str1[i]);
				 }
				 else 
				 {
					   Distance=Distance+(str1[i]-str2[i]);
				 }
				 if(i==length1- 1||i==length2 - 1)
					 break;
			}
	   if(length1!=length2)
		 {
			   if(length1>length2)
				 {
					 Distance=Distance+(length1-length2);
				 }
			   else
				 {
					 Distance=Distance+(length2-length1);
				 } 
		 }
	return Distance;
}
