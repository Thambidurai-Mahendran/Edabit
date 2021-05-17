/*
Given a date, return how many days date is away from 2021 (end date not included). date will be in mm/dd/yyyy format.

Examples
daysUntil2021("12/28/2020") ? "3 days"

daysUntil2021("1/1/2020") ? "366 days"

daysUntil2021("2/28/2020") ? "308 days"
*/
using namespace std;
int getMonthDays(int );
std::string daysUntil2021(std::string date) {
	vector<string> splitedParts;
	int j=0;
	/*first we split date month and year wise*/
	for(int i=0;i<date.size();i++)
	{
		if(date[i]=='/')
			j++;
		else splitedParts[j]+=date[i];
	}
	int month=stoi(splitedParts[0]);
	int d=stoi(splitedParts[1]);
	int year=stoi(splitedParts[2]);
	/*we calculate the total days*/
	int totalDays=getMonthDays(month)-d+1;
	for(int i=month+1;i<=12;i++)
		totalDays+= getMonthDays(i);
	string ans=to_string(totalDays);
	return ans;
}
/*This function used to get the months days count*/
int getMonthDays(int m)
{
	if(m==4 || m==6 || m==9 || m==11) 
	   return 30;
       else if(m==2) 
       	  return 29;
       else  return 31;
}
