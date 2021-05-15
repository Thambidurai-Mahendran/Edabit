/*


Given an array of integers, find the length of the longest range of consecutive integers that are contained in the sorted version of the array.




examples:


maxConsec([4, 9, 10, 5, 17, 3, 8, 11, 1, 12, 18, 20]) ? 5
// After sorting array becomes [1, 2, 4, 5, 8, 9, 10, 11, 12, 17, 18, 20]
// Longest consecutive subsequence is [8, 9, 10, 11, 12], which has length 5

maxConsec([14, 13, 7, 1, 4, 12, 3, 7, 7, 12, 11, 5, 7]) ? 4
// After sorting get [1, 3, 4, 5, 7, 7, 7, 7, 11, 12, 12, 13, 14]
// Longest consecutive subsequence is [11, 12, 13, 14], which has length 4

maxConsec([13, 3, 8, 5, 5, 2, 13, 6, 14, 2, 11, 4, 10, 8, 1, 9]) ? 6
// After sorting get [1, 2, 2, 3, 4, 5, 5, 6, 8, 8, 9, 10, 11, 13, 13, 14]
// Longest consecutive subsequence is [1, 2, 3, 4, 5, 6], which has length 6





*/
using namespace std;
int maxConsec(std::vector<int> arr) {
	int longestRange=0,count=1;
	/*we sort the array integers */
	sort(arr.begin(),arr.end());
	/*this below looping used to get the count of Longest consecutive subsequence*/
	for(int i=0;i<arr.size()-1;i++)
	{
		if(arr[i]+1==arr[i+1]||arr[i]==arr[i+1])
		{ 
			if(arr[i]+1==arr[i+1])
		             count++;
			if(longestRange<count)
			    longestRange=count;
		}
		else count=1;
	}
	return longestRange;
}
