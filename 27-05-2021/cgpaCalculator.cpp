#include <iostream>

using namespace std;

class Semester
{   
    //we declare the subjects
    int signals;
    int transmission;
    int microprocessor;
    int electronics;
    int ethics;
    int probability;
    int credits;
	public:
		//initialise the subject marks 
		Semester(int s,int t,int m,int e,int p,int r,int c)
		:signals(s),transmission(t),microprocessor(m),electronics(e),ethics(p),probability(r),credits(c){}
		//we findgpa
		float findGpa()
		{
			float total=(signals+transmission+microprocessor+electronics+ethics+probability)/credits;
			return total;
		}
		//destructors
		~Semester()
		{
			cout << " destructors ";
		}
};
int main()
{   

    char ch;
    int value,credits=16;
	cout << " \n*********************CGPA CALCULATOR****************************";
	cout << "\n   Enter signals and systems Grade : " ;
	cin  >> ch;
	//find the grade point 
	int valueOfSignals = ch =='O'?10*3:ch=='A'?9*3:ch=='B'?8*3:ch=='C'?7*3:6*3;
	cout << " \n  Enter Transmission and waveguides  Grade : " ;
	cin  >> ch;
    int	valueOfTransmission = ch =='O'?10*3:ch=='A'?9*3:ch=='B'?8*3:ch=='C'?7*3:6*3;
	cout << " \n  Enter Microprocessors Grade : " ;
	cin  >> ch;
	int valueOfMicroprocessors = ch =='O'?10*2:ch=='A'?9*2:ch=='B'?8*2:ch=='C'?7*2:6*2;
	cout << "  \n Enter Electronics circuits  Grade : " ;
	cin  >> ch;
	int valueOfElectronics = ch =='O'?10:ch=='A'?9:ch=='B'?8:ch=='C'?7:6;
	cout << " \n  Enter professional ethics  Grade : " ;
	cin  >> ch;
	int valueOfEthics = ch =='O'?10*3:ch=='A'?9*3:ch=='B'?8*3:ch=='C'?7*3:6*3;
	cout << "  \n Enter probability and random process  Grade : " ;
	cin  >> ch;
	int valueOfRandom = ch =='O'?10*4:ch=='A'?9*4:ch=='B'?8*4:ch=='C'?7*4:6*4;
	//constructors
	Semester gpa(valueOfSignals,valueOfTransmission,valueOfMicroprocessors,valueOfElectronics,valueOfEthics,valueOfRandom,credits);	
	cout << " The gpa is : " << gpa.findGpa() << endl ;
	
}
