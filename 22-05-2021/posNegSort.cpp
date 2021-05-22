/*
Write a function that sorts the positive numbers in ascending order, and keeps the negative numbers untouched.

Examples
posNegSort([6, 3, -2, 5, -8, 2, -2]) ? [2, 3, -2, 5, -8, 6, -2]

posNegSort([6, 5, 4, -1, 3, 2, -1, 1]) ? [1, 2, 3, -1, 4, 5, -1, 6]

posNegSort([-5, -5, -5, -5, 7, -5]) ? [-5, -5, -5, -5, 7, -5]

posNegSort([]) ? []
*/
std::vector<int> posNegSort(std::vector<int> arr) {
	std::vector<int>positives;
	std::vector<int> posNegSort;
	//we get the positive elements into the separarte vector
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]<0)
		{
			
		}
		else positives.push_back(arr[i]);
	}
	//we sort the positive elements 
	sort(positives.begin(),positives.end());
	int cur=0;
	//below looping used to store the positive numbers in ascending order, and keeps the negative numbers untouched.
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]<0)
			posNegSort[i]=arr[i];
		else posNegSort[i]=positives[cur++];
	}
	return posNegSort;
}
