/************************FUNCTION POINTERS USING RETURN THE VALUE**************************/ 
#include <iostream>
#include <vector>
int fun(int value)
{
	std::cout << "The value is : " << value ;
	return value;
}
int main()
{
	int (*funptr)(int);
	funptr=fun;
	int result=(*funptr)(10);
	std::cout << result ;
}
