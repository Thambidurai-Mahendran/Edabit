bool cons(std::vector<int> arr) {
	   int min=arr[0];
	   for(int i=0;i<arr.size();i++)
		 {
			   if(min>arr[i])
			   {
				     min=arr[i];
			   }
		 }
	   for(int i=1;i<arr.size();i++)
		 {   min++;
			  int flag=0;
			  for(int j=0;j<arr.size();j++)
				{
					  if(arr[j]==min)
						{
							flag=1;
						}
				}
			  if(flag==0)
			  {
				  return false;
			  }
		 }
	   return true;
}
