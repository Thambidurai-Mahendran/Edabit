/*
Create a function that reorders the digits of each numerical element in an array based on ascending (asc) or descending (desc) order.

Examples
reorderDigits([515, 341, 98, 44, 211], "asc") ? [155, 134, 89, 44, 112]

reorderDigits([515, 341, 98, 44, 211], "desc") ? [551, 431, 98, 44, 211]

reorderDigits([63251, 78221], "asc") ? [12356, 12278]

reorderDigits([63251, 78221], "desc") ? [65321, 87221]

reorderDigits([1, 2, 3, 4], "asc")  ? [1, 2, 3, 4]

reorderDigits([1, 2, 3, 4], "desc") ? [1, 2, 3, 4]
*/
std::vector<int> reorderDigits(std::vector<int> arr, std::string direction) {
	if(direction=="asc")
	{
		for(int i=0;i<arr.size();i++)
		{   
		    //convert integer to string 
			std::string digits=std::to_string(arr[i]);
			//below looping used to arrange the digits in ascending order
			for(int j=0;j<digits.size();j++)
			{
				   for(int k=0;k<digits.size();k++)
					 {
						 if(digits[k]>digits[k+1])
						 {
							 int  temp=digits[k];
							 digits[k]=digits[k+1];
							 digits[k+1]=temp;
						 }
					 }
			}
			arr[i]=stoi(digits);
		}
	}
	else
	{
			for(int i=0;i<arr.size();i++)
		{
			//convert integer to string 
			std::string digits=std::to_string(arr[i]);
			//below looping used to arrange the digits in descending order
			for(int j=0;j<digits.size();j++)
			{
				   for(int k=0;k<digits.size();k++)
					 {
						 if(digits[k]<digits[k+1])
						 {
							 int  temp=digits[k];
							 digits[k]=digits[k+1];
							 digits[k+1]=temp;
						 }
					 }
			}
			arr[i]=stoi(digits);
		}
	}
	return arr;
}
