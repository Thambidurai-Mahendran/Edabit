/*

PROBLEM : RED/YELLOW SEQUENCE
Examples
rySeq(2, "all") ? 5

rySeq(3, "yellow") ? 8

rySeq(28, "red") ? 55

rySeq(1, "blue") ? -1
*/
#include<string.h>
using namespace std;
int rySeq(int n, std::string s) {
	       /*There is no blue and green in the sequence so,we return -1*/
	       if(s=="blue"||s=="green")
	    	    return -1;
	       if(n==0)
		  return 0;
		/*we count the all(red and yellow ) color box count*/  
		int startAll=1,increase=4;
		for(int i=1;i<n;i++)
		{
			startAll+=increase;
			increase+=4;
		}
		/*We count the Red box count*/
		int startRed=1;
	        int incre=2;
	        for(int i=1;i<n;i++)
		{
			startRed+=incre;
		}
	        if(s=="all")
		   return startAll;
	        else if(s=="red")
		    return startRed;
	         /*we get yellow color box count when we subtract the all box count with red box count */
	         else 
		     return startAll-startRed;
	  
	  
}
