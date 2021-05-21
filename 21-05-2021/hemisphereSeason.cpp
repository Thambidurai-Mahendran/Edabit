/*
In this challenge, you are given a date and you have to determine the correspondent season in a certain hemisphere of Earth.

You have to use the ranges given by the meteorological seasons definition, accordingly to the following table:

Start	    End	    North Hemisphere	South Hemisphere
March, 1	May, 31	    Spring         	Autumn
June, 1	August, 31	     Summer	            Winter
September, 1November, 30Autumn	        Spring
December, 1	February, 28***	Winter   	Summer
Given two strings hemisphere (can be "N" for the North hemisphere or "S" for the South hemisphere) and date (name and day of the month), implement a function that returns a string with the season name, accordingly to the above table.

Examples
hemisphereSeason("N", "June, 30") ? "Summer"

hemisphereSeason("N", "March, 1") ? "Spring"

hemisphereSeason("S", "September, 22") ? "Spring"
*/
using namespace std;
std::string hemisphereSeason(char hemisphere, std::string date) {
	  string Month;
	  //below looping using to get a month from the date string  ..
	for(int i=0;i<date.size();i++)
	{
		if(date[i]==',')
			break;
		else Month+=date[i];
	}
	 if(Month=="March"||Month=="April"||Month=="May")
	 {
		 if(hemisphere=='N')
			 return "Spring";
		 else return "Autumn";
	 }
	 else if(Month=="June"||Month=="July"||Month=="August")
	 {
		 if(hemisphere=='N')
			 return "Summer";
		 else return "Winter";
	 }
	else if(Month=="September"||Month=="October"||Month=="November")
	 {
		 if(hemisphere=='N')
			 return "Autumn";
		 else return "Spring";
	 }
	else 
		 if(hemisphere=='N')
			 return "Winter";
	   else return "Summer";
}
