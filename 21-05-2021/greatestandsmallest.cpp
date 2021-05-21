/******************RETURN MULTIPLE VALUES USING REFFERENCE*******************************/
/******************FIND GREATER AND SMALLER ELEMENT *************************************/

#include <iostream>
using namespace std;
void func(int x,int y,int *greater,int *smaller)
{   
    
	if(x>y)
	{
		*greater=x;
		*smaller=y;
	}
	else
	{
		*greater=y;
		*smaller=x;
	}
}
int main()
{
	int x,y,greater,smaller;
	cin >> x >> y;
	/*we pass the greater and smaller elements addresses */
	func(x,y, &greater ,&smaller);
	cout << "The greater element : " << greater << endl;
	cout << "The smaller element : " << smaller << endl;
}
