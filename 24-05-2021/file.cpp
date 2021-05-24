/*****************************FILE HANDLING *************************************/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	fstream file;
	//WRITE SOMETHING IN THE FILE
	file.open("MyfirsttextFile.txt",ios::out);
	file<<"My First Text File!!! ";
	file.close();
	//APPEND SOMETHING IN THE FILE 
	file.open("MyfirsttextFile.txt",ios_base::app);
	file<<" \n 1.Append somehting ...";
	file.close();
	//READ THE FILE
    file.open("MyfirsttextFile.txt",ios::in);
    string ch;
    while(file >> ch)
	{
		cout << ch << " " ;
	}
	file.close();
	
}
