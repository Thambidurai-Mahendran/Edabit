/**********************************************  UNIQUE POINTERS  ************************************************/ 
#include <iostream>
using namespace std;
#include <memory>
  
class Rectangle {
    int length;
    int breadth;
  
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
  
    int area()
    {
        return length * breadth;
    }
};
  
int main()
{
  
    unique_ptr<Rectangle> P1(new Rectangle(10, 5));
    cout << P1->area() << endl; 
  
   
  /*we can transfer the control to P2 by removing P1.*/
     unique_ptr<Rectangle> P2= move(P1);
    
    cout << P2->area() << endl;
   
    return 0;
}
