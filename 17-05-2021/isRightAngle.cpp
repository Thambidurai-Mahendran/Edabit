/*
Find out if a right-angled triangle can be made given some facts about the shape.

Given varying information about a shape, create a function that returns true if the shape could be a right-angle triangle and false if not.
You will be given an array of numbers and a string stating whether the numbers are angles or sides.
The information may indicate more than one possible shape, but we just need to know if these details could be found in a right-angled triangle.
Examples
isRightAngle([30, 60], "angle") ? true
// A third angle could be 90

isRightAngle([20, 20, 20, 20], "angle") ? false
// More than 3 sides

isRightAngle([4, 5, 3], "side") ? true
// 3**2 + 4**2 = 5**2

isRightAngle([4, 5], "side") ? true
// Third side may be 3
*/
#include <cmath>
using namespace std;
bool isRightAngle(std::vector<int> arr, std::string desc) {
	/*This if statement used to check the given angles valid or not*/ 
	if(desc=="angle")
	{
		if(arr.size()==0)
			return true;
		if(3<arr.size())
			return false;
		if(3>arr.size())
			if(arr[0]+arr[1]==180||arr[0]+arr[1]>90)
				return false;
		if(3>arr.size())
			return true;
		if(arr.size()==3&&arr[2]==90)
		{ 
			int sum=arr[0]+arr[1]+arr[2];
			if(sum==180)
				return true;
			else return false;
		}
		else return false;
	}
	/*This else statement used to check the given sides valid or not*/ 
	else
	{
		if(3<arr.size())
			return false;
		if(3>arr.size())
			return true;
		if(arr.size()==3)
		{
			if(pow(arr[0],2)==pow(arr[1],2)+pow(arr[2],2))
				return true;
			else if(pow(arr[1],2)==pow(arr[0],2)+pow(arr[2],2))
				return true;
			else if(pow(arr[2],2)==pow(arr[1],2)+pow(arr[0],2))
				return true;
			else return false;
		}
	}
}
