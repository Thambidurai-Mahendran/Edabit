using namespace std;
std::vector<std::vector<int>> multiplicity(std::vector<int> arr) {
	/*Create removeDuplicates integer array to store the elements without duplicates */
	vector<int>removeDuplicates;
	/* Create countsOfNums integer array to store the digits count*/
	vector<int>countsOfNums;
	/* Create 2 dimensional array to store numbers with multiplicity */
	vector<vector<int>>numsWithMultipliicty;
	for(int i=0;i<arr.size();i++)
	{   
	    /*its used to find the digits count*/
		countsOfNums[arr[i]]++;
		/*This if statement used to get the elements without duplicates */ 
		if(countsOfNums[arr[i]]==1)
		{   
		    /*push_back used to store the elements into the removeDuplicates array  */
			removeDuplicates.push_back(arr[i]);
		}
	}
	for(int i=0;i<removeDuplicates.size();i++)
	{
		numsWithMultipliicty[i].push_back(removeDuplicates[i]);
		numsWithMultipliicty[i].push_back(countsOfNums[removeDuplicates[i]]);
	}
	return numsWithMultipliicty;
}
