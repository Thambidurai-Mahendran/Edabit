#include <iostream>
#include <memory>
using namespace std;
static int a=0,Id=1814001;
struct Properties
{
	string name;
    int id;
    string dept;
    string dob;
    string bloodgroup;
    string village;
    string district;
}s[50];
class StudentRecords
{   
    int temp,searchId;
	public:
		
		void storeDetails()
		{
			cout << "\nEnter the student Name : " ;
			cin  >>  s[a].name;
			cout << "\nEnter The department : ";
			cin  >> s[a].dept;
			cout << "\nEnter the student Date of Birth : ";
			cin  >> s[a].dob;
			cout << "\nEnter the bloodgroup : ";
			cin  >> s[a].bloodgroup;
			cout << "\nEnter the village Name : ";
			cin  >> s[a].village;
			cout << "\nEnter The District Name : " ;
			cin  >> s[a].district;
			cout << "\nStudent ID is : " << Id << endl; 
			s[a].id=Id;
			Id++;
			a++;
		}
		void allStudentsDetails()
		{
			for(int i=0;i<a;i++)
			{
				cout << "\nName : " << s[i].name;
				cout << "\nId : " << s[i].id;
				cout << "\ndate of birth  : " << s[i].dob;
				cout << "\nBlood group : " << s[i].bloodgroup;
				cout << "\ndept : " << s[i].dept;
				cout << "\nvillage: " << s[i].village;
				cout << "\ndistrict  : " << s[i].district;
				cout << "\n\n\n";
				
			}
		}
		void oneStudentDetails()
		{
			cout << "Enter The student ID : ";
			cin >> searchId;
			for(int i=0;i<=a;i++)
			{
				if(searchId==s[i].id)
				{
					temp=i;
					break;
				}
			}
			cout << "\nName : " << s[temp].name;
			cout << "\nId : " << s[temp].id;
			cout << "\ndate of birth  : " << s[temp].dob;
			cout << "\nBlood group : " << s[temp].bloodgroup;
			cout << "\ndept : " << s[temp].dept;
			cout << "\nvillage: " << s[temp].village;
			cout << "\ndistrict  : " << s[temp].district;
			cout << "\n\n\n";
		}
		
};
int main()
{    
    int choice ;
    //using dynamic memory allocation
    StudentRecords *details=new StudentRecords; 
    //unique_ptr<StudentRecords> details(new StudentRecords());
    //unique_ptr<StudentRecords> something=move(details);
	cout << " ********************* STUDENTS MANAGEMENT SYSTEM ********************** " ;
	while(1)
	{
		cout << "\n1.Store The student Details  " << endl;
		cout << "\n2.Views All Student Details " << endl;
		cout << "\n3.View One student Details : " ;
		cout << "\n4.exit " ;
		cout <<  "\nEnter Your Choice : ";
		cin  >> choice;
		if(choice==4)
		break;
		switch(choice)
		{
			case 1:
				details->storeDetails();
				break;
			case 2:
			    details->allStudentsDetails();	
			    break;
			case 3:
			    details->oneStudentDetails();
				break;	
		}
	}
}
