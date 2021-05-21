/*************************MULTIPLE RETURN VALUES USING OBJECTS******************************/

/***********************FIND GREATER AND SMALLER ELEMENT ***********************************/	

#include <iostream>
using namespace std;
class findGreaterAndSmaller
{   
    //we declare the public access modifier
	public :
		int greater;
		int smaller;
};
findGreaterAndSmaller findBigandSmall(int x,int y)
{   
    //object created
	findGreaterAndSmaller element;
	if(x>y)
	{
		element.greater=x;
		element.smaller=y;
	}
	else 
	{
		element.greater=y;
		element.smaller=x;
	}
	//return the object  
	return element;
}
int main()
{
	int x,y;
	cin >> x >> y;
	findGreaterAndSmaller ans=findBigandSmall(x,y);
	cout << "the greater element : "<<ans.greater <<endl;
	cout << "the smaller element : "<<ans.smaller<<endl;
	
}
