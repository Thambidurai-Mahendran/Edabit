//using structures
//classes
//static
//constructors
//destructors

#include <iostream>
#include <string>
#include <vector>
using namespace std;
static int a=0, num=123;
struct bank
 {
         int no;
         string name;
         string village;
         string dob;
         string district;
         int balance;
 }s[20];
class Bank
{   
    int number,temp,deposit,withdraw;
    
	public :
		Bank()
		{
			cout << " BANK MANAGEMENT SYSTEM  \n\n";
		}
		~Bank()
		{
			cout << "THE END!!!" ;
		}
		void accountCreation()
		{   
			cout <<"\n\n*****************************************************";
			cout << "      \nACCOUNT CREATION";
			cout << "\n *****************************************************";
			cout << "\nEnter Your Name : ";
			cin  >> s[a].name;
			cout << "\nEnter Your Date Of Birth :";
			cin  >> s[a].dob;
			cout << "\nEnter Your Village Name :";
			cin >> s[a].village;
			cout << "\nEnter Your District Name : " ;
			cin >> s[a].district;
			s[a].balance=0;
			s[a].no=num;
			cout << "\nYOUR ACCOUNT NUM IS : " << num <<endl;
			cout << "\n!!!!!!!!! ACCOUNT CREATED SUCCESSFULLY !!!!!!!!!!!\n\n\n ";
			num++;
			a++;
			
		}
	    void amountDeposit()
		{   
			cout << "Enter Your Account Number : ";
			cin  >> number;
			for(int i=0;i<=a;i++)
			{
				if(s[i].no==number)
				{ 			
					temp=i;
					break;
				}
			}
			cout << " Enter Your Deposit Amount : " ;
			cin  >> deposit ;
			s[temp].balance+=deposit;
			cout << "Your Account Balance : " << s[temp].balance << endl;
			cout << " !!!!!!!!!!!!!!!!!!!! YOUR AMOUNT SUCCESSFULLY DEPOSITED !!!!!!!!!!!!!!!!!!!!!!!\n\n ";
		}
		void amountWithdraw()
		{
			cout << "Enter Your Account Number : " ;
			cin >> number;
			for(int i=0;i<=a;i++)
			{
				if(s[i].no==number)
				{
					temp=i;
					break;
				}
			}
			cout << " Enter Your withdraw Amount : " ;
			cin  >> withdraw ;
			s[temp].balance-=withdraw;
			cout << "Your Account Balance : " << s[temp].balance << endl;
			cout << " !!!!!!!!!!!!!!!!!!!! WITHDRAW SUCCESSFULLY COMPLETED !!!!!!!!!!!!!!!!!!!!!!!\n\n ";
			
		}
};

int main()
{    
	int choice; 
	Bank details;
	while(1)
	{   
		cout<<"**************************************************************************\n";
		cout<<"                               BANKING  SYSTEM                                  \n";
		cout<<" **************************************************************************\n";
	    cout<<" \n1.Account Creation";
        cout<<" \n2.deposit";
        cout<<" \n3.withdraw"; 
        cout<<" \n4.Exit";
        cout<<" \n**************************************************************************";
        cout<<"                \nEnter your choice : ";
        scanf("%d",&choice);
        switch(choice)
		{
			case 1:
				details.accountCreation();
				break;
			case 2:
			    details.amountDeposit();
			    break;
			case 3:
				details.amountWithdraw();
				break;
			default:
			    return 0;	
		}
        
	}
}
