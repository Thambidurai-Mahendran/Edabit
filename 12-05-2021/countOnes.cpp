int countOnes(std::vector<int> arr) {
	 int countOfOnes=0;
	 for(int i=0;i<arr.size();)
	 {  
	    if(arr[i]==1&&arr[i+1]==1)
	    {  
		countOfOnes++;
		do
	        {
		  i++;
		}while(arr[i]!=0);
	    }
	    else
            {
		i++;
	    } 
	 }
	return  countOfOnes;
}
