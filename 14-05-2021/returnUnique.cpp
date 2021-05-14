using namespace std;
std::vector<int> returnUnique(std::vector<int> arr) {
	/*Create distinctCounts integer array to find digits count*/
	vector<int>distinctCounts;
	/*Create uniqueNums integer array to return the unique numbers*/
	vector<int>uniqueNums;
	/*This for loop used to find the every digits count*/ 
	for(int i=0;i<arr.size();i++)
	{
		distinctCounts[arr[i]]++;
	}
	/*This for loop used find the unique numbers*/
	for(int i=0;i<arr.size();i++)
	{
		if(distinctCounts[arr[i]]==1)
		{
			uniqueNums.push_back(arr[i]);
		}
	}
	return uniqueNums;
}
