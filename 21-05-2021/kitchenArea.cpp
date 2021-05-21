/****************TEMPLATE  ********************************/

/*****************WE USING TEMPLATE TO FIND THE AREA OF THE KITCHEN***************************/
#include <iostream>
using namespace std;
template<int len,int bre,typename T>
class Kitchen 
{
	public :
		T length=len;
		T breadth=bre;
		T area()
		{
			return length*breadth;
		}
};

int main()
{   


	Kitchen<10,10,int> Room;
	cout << Room.area();
}
