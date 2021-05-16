/*
Create a function that returns the sum of missing numbers.

Examples
sumMissingNumbers([1, 3, 5, 7, 10]) ? 29
// 2 + 4 + 6 + 8 + 9

sumMissingNumbers([10, 7, 5, 3, 1]) ? 29

sumMissingNumbers([10, 20, 30, 40, 50, 60]) ? 1575
*/
int sumMissingNumbers(std::vector<int> arr) {
	int max=0;
	int min=INT_MAX;
	/* below looping used to find the maximum and minimum of the array */
	for(int i=0;i<arr.size();i++)
	{
		if(min>arr[i])
			min=arr[i];
		if(max<arr[i])
			max=arr[i];
	}
	int total=0;
	/*below looping used to find the missing numbers total*/
	for(int i=min+1;i<max;i++)
	{
		int flag=0;
		for(int j=0;i<arr.size();j++)
		{
			if(arr[j]==i)
				flag=1;
		}
		if(flag==0)
			total+=i;
	}
	return total;
}
