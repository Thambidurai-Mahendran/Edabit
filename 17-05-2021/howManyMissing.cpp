/*
Create a function which calculates how many numbers are missing from an ordered number line. This number line starts at the first value of the array, and increases by 1 to the end of the number line, ending at the last value of the array.

howManyMissing([1, 2, 3, 8, 9]) ? 4

// The number line starts at 1 and ends at 9 (so the numbers 0 and 10 aren't missing from it).
// The numbers missing from this line are 4, 5, 6, and 7.
// 4 numbers are missing.
*/
int howManyMissing(std::vector<int> arr) {
	int count=0;
	/*below looping used to calculate the missing numbers count*/
	for(int i=arr[0];i<=arr[arr.size()-1];i++)
	{ 
		int flag=0;
		for(int j=0;j<arr.size();j++)
		{
			if(arr[j]==i)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			count++;
	}
	return count;
}
