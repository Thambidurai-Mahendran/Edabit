/**********************************VIRTUAL DESTRCUTORS INTRODUCTION *****************************************/

#include <iostream>
class base
{
	public:
		base()
		{
			std::cout << " base constructor "<< std::endl;
		}
		~base()
		{
			std::cout << "base  destructors" <<std::endl;
		}
};

class derived : public base
{
	  public:
	  	derived()
		  {
		  	std::cout << "derived constructors"<<std::endl;
		  }
		  ~derived()
		  {
		  	std::cout << "derived destructors "<<std::endl;
		  }
};
int main()
{
	base *b=new base();
	delete b;
	std::cout << "..........................................................................." << std::endl;
	derived *a=new derived();
	delete a;
	
}
