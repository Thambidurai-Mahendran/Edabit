/***************************************MULTIPLE RETURN VALUES USING TUPLE***************************/

/**********************************FIND GREATER AND SMALLER ELEMENT***********************************/

#include <iostream>
#include<tuple>
using namespace std;
tuple <int ,int> findBigAndSmall(int x ,int y)
{
	if(x>y)
	{
		//we create the tuple return the tuple 
		return make_tuple(x,y);
		
	}
	else return make_tuple(y,x);
}

int main()
{
	int x,y;
	cin >> x >> y;
	int max,min;
	//we using tie keyword to get multiple return values ..
	tie(max,min)=findBigAndSmall(x,y);
	cout << "The greater element : " << max << endl;
	cout << "The smaller element : " << min << endl;
	
}
