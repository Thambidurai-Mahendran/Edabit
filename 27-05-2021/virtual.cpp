#include <iostream>
using namespace std;
 
class Batsman {
public:
    virtual void specialShots()//if we add =0 instead of function body,its called pure virtual functions 
	{
		cout << " Special shot " ;
	}
    
};
 //inheritance
 //derived class-dhnoi base class - batsman
class Dhoni : public Batsman {
	int runs;
public:
     explicit Dhoni(int r)
	:runs(r){
	};
    void specialShots()
    {
        cout << "Helicopter Shot " << endl;
        cout << "Scored runs : " << runs << endl;
    }
 
    
};
class Kohli : public Batsman
{
	public:
		void specialShots()
		{
			cout << "Cover Drive" << endl;
	   }
};

int main()
{
    Batsman* batsman;
    //we call constructor
    Dhoni dhoni(10000);
    //Dhoni dhoni=10000 - It makes error 
    Kohli kohli;
    
    batsman= &dhoni;
    
    batsman->specialShots();
    
    batsman=&kohli;
    
    batsman->specialShots();
}
