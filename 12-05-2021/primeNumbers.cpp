int primeNumbers(int num) {
	  int primeCounts=0;
	  for(int i=2;i<=num;i++)
		{  int count=0;
			 for(int j=2;j<i;j++)
			 {
				 if(i%j==0)
				 {
					 count++;
				 }
			 }
		   if(count==0)
			 {
			  	primeCounts++;
			 }
		}
	 return primeCounts;
}
