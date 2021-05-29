# include <iostream>
#include<tuple>
using namespace std;
#define T int//use macros
template<typename N>//use templates
class Calculator
{
	public:
		public:
			void sum(N a,N b)
			{
				cout <<"The sum Of the two num is : " << a+b  << endl;
			}
			void sub(N a,N b)
			{   
			   
				cout <<"The subtraction Of the two num is : " << a-b  << endl;
			}
			void mul(N a,N b)
			{
				cout <<"The multiplication Of the two num is : " << a*b  << endl;
			}
			tuple<int ,int> div(T a,T b)//using tuple 
			{   
			   
				int quotient=a/b;
				int rem=a%b;
				return make_tuple(quotient,rem);
			}
};
int main() {
    char op;
    int quotient,reminder;
    float num1, num2;

    cout << "Enter operator: +, -, *, /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    Calculator<float>cal;
    switch(op) {
        case '+':
            cal.sum(num1,num2);
            break;

        case '-':
            cal.sub(num1,num2);
            break;

        case '*':
            cal.mul(num1,num2);
            break;

        case '/':
             tie(quotient,reminder)=cal.div(num1,num2);
             cout << "quotient : " << quotient << endl;
             cout << "Reminder : " << reminder << endl;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
