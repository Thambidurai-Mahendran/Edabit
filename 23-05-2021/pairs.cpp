/*
Create a function that returns all pairs of numbers in an array that sum to a target. Sort the pairs in ascending order with respect to the smaller number, then order each pair in this order: [smaller, larger].

Examples
allPairs([2, 4, 5, 3], 7) ? [[2, 5], [3, 4]]
// 2 + 5 = 7, 3 + 4 = 7

allPairs([5, 3, 9, 2, 1], 3) ? [[1, 2]]

allPairs([4, 5, 1, 3, 6, 8], 9) ? [[1, 8], [3, 6], [4, 5]]
// Sorted: 1 < 3 < 4; each pair is ordered [smaller, larger]
*/
using namespace std;
std::vector<std::vector<int>> allPairs(std::vector<int> arr, int target) {
	vector<vector<int>>pairs;
	int k=0;
	//below looping used to find the pairs
	for(int i=0;i<arr.size();i++)
	{
		for(int j=0;j<arr.size();j++)
		{
			if(i!=j)
			{
				if(arr[i]+arr[j]==target)
				{
					pairs[k].push_back(arr[i]);
					pairs[k].push_back(arr[j]);
					k++;
				}
			}
		}
	}
	return pairs;
}
