#include <iostream>
#include <thread>


typedef unsigned long long ull;
ull oddSum=0;
ull evenSum=0;
//using namespaces 
namespace even
{
   void findSum(ull start,ull end)
   {
	  for(ull i=start;i<end;i++)
	  {
		if(i%2==0)
		evenSum+=i;
	  }
   }
}



namespace odd
{
	void findSum(ull start,ull end)
   {
	  for(ull i=start;i<end;i++)
	  {
		if(i%2==1)
		oddSum+=i;
	  }
   }
}

int main()
{
	ull start=2,end=99999999;
	{//we avoid collisions to use brockets
	using namespace even;
    std::thread t1(findSum,start,end);
    t1.join();
    }
    using namespace odd;
    //we find the odd numbers sum
    std::thread t2(findSum,start,end);
    t2.join();
    
    std::cout << "ODD SUM : "<<oddSum <<std::endl;
	std::cout <<"EVEN SUM : " <<evenSum << std::endl;

}
