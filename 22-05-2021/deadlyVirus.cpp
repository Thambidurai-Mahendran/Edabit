/*
Mubashir needs your help to identify the spread of a deadly virus. He can provide you with the following parameters:

A two-dimensional array persons, containing affected persons 'V' and unaffected persons 'P'.
Number of hours n, each infected person is spreading the virus to one person up, down, left and right each hour.
Your function should return the updated array containing affected and unaffected persons after n hours.

Examples
persons = [
  ["P", "P", "P", "P", "P"],
  ["V", "P", "P", "P", "P"],
  ["P", "P", "P", "P", "P"],
  ["P", "P", "P", "P", "P"],
  ["P", "P", "P", "P", "P"]
]


deadlyVirus(persons, 0) ? [
  ["P", "P", "P", "P", "P"],
  ["V", "P", "P", "P", "P"],
  ["P", "P", "P", "P", "P"],
  ["P", "P", "P", "P", "P"],
  ["P", "P", "P", "P", "P"]
]

deadlyVirus(persons, 1) ? [
  ["V", "P", "P", "P", "P"],
  ["V", "V", "P", "P", "P"],
  ["V", "P", "P", "P", "P"],
  ["P", "P", "P", "P", "P"],
  ["P", "P", "P", "P", "P"]
]

deadlyVirus(persons, 2) ? [
  ["V", "V", "P", "P", "P"],
  ["V", "V", "V", "P", "P"],
  ["V", "V", "P", "P", "P"],
  ["V", "P", "P", "P", "P"],
  ["P", "P", "P", "P", "P"]
]
*/
using namespace std;
vector<vector<char>> deadlyVirus(vector<vector<char>> persons, int n) {
  vector<vector<char>>virus;
	while(n--)  {
	for(int i=0;i<persons.size();i++)
		{
			for(int j=0;j<persons[i].size();j++)
			{    
			    //infected person is spreading the virus to one person up, down, left and right each hour.
				if(persons[i][j]=='V')
				{ 
					virus[i][j]='V';
					if(i-1>=0)virus[i-1][j]='V';
					if(i+1<persons[j].size())virus[i+1][j]='V';
					if(j-1>=0)virus[i][j-1]='V';
					if(j+1<persons[i].size())virus[i][j+1]='V';
				}
				else virus[i][j]='P';
			}
		}
		//updated array containing affected and unaffected persons after n hours.
		for(int i=0;i<persons.size();i++)
			for(int j=0;j<persons[i].size();j++)
				if(virus[i][j]=='V')
					persons[i][j]=='V';
	}
	return persons;
}
