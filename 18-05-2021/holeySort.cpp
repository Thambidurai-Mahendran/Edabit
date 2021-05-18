/*
What do the numbers 4, 6, 8, 9 and 0 have in common? They all have holes in them! Notice how the number 8 contains not one, but two holes.

Given an array of numbers, sort the array in accordance to how many holes occur in the number. It should be sorted in ascending order.

Examples
holeySort([44, 4, 444, 4444]) ? [4, 44, 444, 4444]

holeySort([100, 888, 1660, 11]) ? [11, 100, 1660, 888]

holeySort([8, 121, 41, 66]) ? [121, 41, 8, 66]
*/
using namespace std;
std::vector<int> holeySort(std::vector<int> arr) {
	int i=0;
	vector<int >counts;
	while(1)
	{    
	    /*below looping used to count holes in the number*/
		int count=0;
		while(arr[i]>0)
		{
			int rem=arr[i]%10;
			if(rem==8)
				count+=2;
			else if(rem==0||4||6||9)
				count++;
			arr[i]/=10;
		}
		counts[i]=count;
		i++;
		if(i==arr.size())
			break;
	}
	/*below looping used to sort the arr vector based on the holes in the number */
	for(int i=0;i<arr.size();i++)
	{
		for(int j=0;j<arr.size();j++)
		{
			if(counts[j]>counts[j+1])
			{
				int temp=counts[j];
				counts[j]=counts[j+1];
				counts[j+1]=temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return arr;
}
