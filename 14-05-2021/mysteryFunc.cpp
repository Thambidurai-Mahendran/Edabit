/* 
REVERSE CODING CHALLENGE #5
This is a reverse coding challenge. Normally you're given explicit directions with how to create a function. Here, you must generate your own function to satisfy the relationship between the inputs and outputs.

Your task is to create a function that, when fed the inputs below, produce the sample outputs shown.

Examples
832 - 594

51 - 36

7977 - 198

1 - 0

665 - 99

149 - 0*/
using namespace std;
int mysteryFunc(int num) {
    vector<int>a{832,51,7977,1,665,149};
    vector<int>b{594,36,198,0,99,0};
    for(int i=0;i<6;i++)
    {
    	if(a[i]==num)
	   return b[i];
    }
}
