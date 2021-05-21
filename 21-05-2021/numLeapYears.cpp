/*
Given a range of years as a string, return the number of leap years there are within the range (inclusive).

Examples
numLeapYears("1980-1984") ? 2
// 1980 and 1984 are leapyears.

numLeapYears("2000-2020") ? 6

numLeapYears("1600-2000") ? 98
*/
int numLeapYears(std::string years) {
	std::string years1="",years2="";
	int flag=1;
	//we split the starting and ending years ..
	for(int i=0;i<years.size();i++)
	{
		if(years[i]=='-')
			flag=0;
		else if(flag)
			years1+=years[i];
		else years2+=years[i];
			
	}
	//we convert string to integer
	int startYear=stoi(years1);
	int endYear=stoi(years2);
	int count=0;
	//below looping used to check given year is leap or not..
	for(int i=startYear;i<=endYear;i++)
	{
		if((i%4==0&&i%100!=0)||i%400==0)
			count++;
	}
	return count;
	
}
