/*
Given an array of integers, replace every number with the mean of all numbers.

Examples
flattenCurve([1, 2, 3, 4, 5]) ? [3, 3, 3, 3, 3]

flattenCurve([0, 0, 0, 2, 7, 3]) ? [2, 2, 2, 2, 2, 2]

flattenCurve([4]) ? [4]

flattenCurve([]) ? []
*/
#include<cmath>
using namespace std;
std::vector<float> flattenCurve(std::vector<int> arr) {
		int sum=0;
		/*first we find total sum*/
	for(int i=0;i<arr.size();i++)
	{
		sum+=arr[i];
	}
	/*We calculate the average value*/
	float avg=(float)sum/arr.size();
	/*we use round function to get a integer value from the float value*/
	avg=round(avg*10);	
	avg=avg/10;
	vector<float>flateTheCurve;
	for(int i=0;i<arr.size();i++)
	{
		flateTheCurve.push_back(avg);
	}
	return flateTheCurve;
}
