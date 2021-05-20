/*
A fulcrum of an array is an integer such that all elements to the left of it and all elements to the right of it sum to the same value. Write a function that finds the fulcrum of an array.

To illustrate:

findFulcrum([3, 1, 5, 2, 4, 6, -1]) ? 2
// Since [3, 1, 5] and [4, 6, -1] both sum to 9
Examples
findFulcrum([1, 2, 4, 9, 10, -10, -9, 3]) ? 4

findFulcrum([9, 1, 9]) ? 1

findFulcrum([7, -1, 0, -1, 1, 1, 2, 3]) ? 0

findFulcrum([8, 8, 8, 8]) ? -1
*/
int findFulcrum(std::vector<int> arr) {
	int leftSum=0;
	int rightSum=0;
	for(int i=0 ; i<arr.size() ; i++){
		/*below looping used find left sum*/
		for(int j=0 ; j<i ; j++)
		{
			leftSum+=arr[j];
		}
		/*below looping used to find right sum*/
		for(int j=i+1 ; j<arr.size() ; j++)
		{
			rightSum+=arr[j];
		}
		/*If the left and right sum are equal we return the middle element*/
		if(leftSum==rightSum)
		{
			return arr[i];
		}
		leftSum=0;
		rightSum=0;
	}
	return -1;
}
