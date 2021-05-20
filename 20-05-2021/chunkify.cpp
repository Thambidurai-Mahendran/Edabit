/*
Create a function that divides an array into chunks of size n, where n is the length of each chunk.

Examples
chunkify([2, 3, 4, 5], 2) ? [[2, 3], [4, 5]]

chunkify([2, 3, 4, 5, 6], 2) ? [[2, 3], [4, 5], [6]]

chunkify([2, 3, 4, 5, 6, 7], 3) ? [[2, 3, 4], [5, 6, 7]]

chunkify([2, 3, 4, 5, 6, 7], 1) ? [[2], [3], [4], [5], [6], [7]]

chunkify([2, 3, 4, 5, 6, 7], 7) ? [[2, 3, 4, 5, 6, 7]]
*/
using namespace std;

vector<vector<int>> chunkify(vector<int> arr, int size) {
	vector<vector<int>>chunk;
	int s = 0;
	while(s<arr.size())
	{
		vector<int>split ={};
		/*below looping used to split the groups by size*/
		for(int i=s; s<=s+size; i++)
			split.push_back(arr[i]);
		  chunk.push_back(split);
		 s = s+size+ 1;
	}
	return chunk;
}
