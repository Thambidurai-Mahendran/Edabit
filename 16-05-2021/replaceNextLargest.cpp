/*
Write a function that replaces each integer with the next largest in the array.

Examples
replaceNextLargest([5, 7, 3, 2, 8]) ? [7, 8, 5, 3, -1]

replaceNextLargest([2, 3, 4, 5]) ? [3, 4, 5, -1]

replaceNextLargest([1, 0, -1, 8, -72]) ? [8, 1, 0, -1, -1]
*/
using namespace std;
std::vector<int> replaceNextLargest(std::vector<int> arr) {
	vector<int>nextLargest;
	
	for(int i=0;i<arr.size();i++)
	{
		int minimum=arr[i];
		int maximum=INT_MAX;
		int flag=0;
		/*below looping used to find the next largest element */
		for(int j=0;j<arr.size();j++)
		{
			if(arr[j]>minimum&&arr[j]<maximum)
			{
				maximum=arr[j];
				flag=1;
			}
		}
		if(flag==1)
		 nextLargest.push_back(maximum);
		else  nextLargest.push_back(-1);
	}
	return nextLargest;
}
