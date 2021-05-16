/*  
Create a function that retrieves every number that is strictly larger than every number that follows it.

Examples
largerThanRight([3, 13, 11, 2, 1, 9, 5]) ? [13, 11, 9, 5]
// 13 is larger than all numbers to its right, etc.

largerThanRight([5, 5, 5, 5, 5, 5]) ? [5]
// Must be strictly larger.

largerThanRight([5, 9, 8, 7]) ? [9, 8, 7]
*/
using namespace std;
std::vector<int> largerThanRight(std::vector<int> arr) {
	int flag=1;
	vector<int>largerThanAll;
	/*below looping is used to get the number which is larger than every number that follows it*/
	for (int i=0; i<arr.size()-1; i++)
	{
		for (int j=i+1; j<arr.size(); j++)
		{
			if (arr[i]<=arr[j])
			{
				flag=0;
			}
		}
		if (flag==1)
		{
			largerThanAll.push_back(arr[i]);	
		}
		flag=1;
	}
	largerThanAll.push_back(arr[arr.size()-1]);
	return largerThanAll;
}
