bool isRepeatingCycle(std::vector<int> arr, int length) {
	/*If the array size is less than or equal to length ,we return true*/
	if(length>=arr.size())
		return true;
    /* below looping is used to find its repeating cycle or not .If it is a non repeating cycle we return false */		
	for(int i=0;i<arr.size()-length;i++)
	{
		if(arr[i]!=arr[i+length])
		{
			return false;
		}
	}
	return true;
}
