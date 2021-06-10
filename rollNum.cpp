//change the roll no in the const function 
#include <iostream>
class student
{
private:
    int roll;
public:
    // constructor
    student(int r):roll(r) {}
  
    // A const function that changes roll with the help of const_cast
    void fun() const
    {
        ( const_cast <student*> (this) )->roll = 5;
    }
  
    int getRoll()  { return roll; }
};
  
int main(void)
{                                             
    student s(3);
    std::cout << "Old roll number: " << s.getRoll() << std::endl;
    
    s.fun();
    
    std::cout << "New roll number: " << s.getRoll() << std::endl;
    int* p = new int(65);
    
    char* ch = (char*)(p);
    
    std::cout << "Ascii value : " <<  *p << std::endl;
    
    std::cout << "Ascii value of the character : " << *ch << std::endl;
    
    return 0;
}
