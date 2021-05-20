/*
Create a function that takes an array of integers (positive / negative) and return the sum of the numbers that repeat consecutively (return your result as an array).

Examples
sumConsecutives([0, 7, 7, 7, 5, 4, 9, 9, 0]) ? [0, 21, 5, 4, 18, 0]

sumConsecutives([4, 4, 5, 6, 8, 8, 8]) ? [8, 5, 6, 24]

sumConsecutives([-5, -5, 7, 7, 12, 0]) ? [-10, 14, 12, 0]
*/
using namespace std;
std::vector<int> sumConsecutives(std::vector<int> arr) {
	vector<int>sumOfCons ;
	int count = 1 ;
	for(int i=0 ; i < arr.size() ;i++)
	{   
	    /*current element and next element are same we increase the count else we multiply curren elemnt with count and push the value into the vector*/
		if(arr[i] == arr[i+1] && (i+1)!=arr.size())
		{
					count++;
		}
		else
		{
			sumOfCons.push_back(arr[i]*count) ;	
			count = 1 ;
		}
	}
	
	return sumOfCons ;
}
