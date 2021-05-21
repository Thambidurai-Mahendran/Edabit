/****************TEMPLATE USING PRINT DIFFERENT VALUES IN ONE FUNCTION ********************************/

 
#include <iostream>
using namespace std;

template<typename N>
void print(N value)
{
	cout << value <<endl;
}

int main()
{
	print(5);
    print("hello");
	print(5.5F);
}
