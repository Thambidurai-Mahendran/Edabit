/*
Given an array with an odd number of elements, return whether the scale will tip "left" or "right" based on the sum of the numbers. The scale will tip on the direction of the largest total. If both sides are equal, return "balanced".

Examples
scaleTip([0, 0, -1, 1, 1]) ? "right"
// 0 < 2 so it will tip right

scaleTip([1, 2, 3, -1, 4, 0, 0]) ? "left"
// 6 > 4 so it will tip left

scaleTip([5, 5, 5, 0, -1, 10, 2, 2, 1]) ? "balanced"
// 15 = 15 so it will stay balanced
*/
std::string scaleTip(std::vector<int> arr) {
	int sum1=0,sum2=0;
	/*below looping used to calculate left sum*/
	for(int i=0;i<=arr.size()/2;i++)
	{
		sum1+=arr[i];
	}
	/*below looping used to calculate right sum*/
	for(int i=arr.size()/2;i<arr.size();i++)
	{
		sum2+=arr[i];
	}
	if(sum1>sum2)
		return "left";
	else if(sum1==sum2)
	{
		return "balanced";
	}
	else return "right";
}
