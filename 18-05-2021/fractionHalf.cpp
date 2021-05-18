/*
Create a function that takes a fractional number as a string for its argument and returns its half.

Examples
fractionHalf("1/2") ? "1/4"

fractionHalf("6/8") ? "3/8"

fractionHalf("3/8") ? "3/16"
*/
using namespace std;
std::string fractionHalf(std::string fraction) {
	vector<string>parts;
	int j=0;
	/*below looping used to spiliting the numerator and denominator part*/
	for(int i=0;i<fraction.size();i++)
	{
		if(fraction[i]=='/')
			j++;
		else parts[j]+=fraction[i];
	}
	/*stoi function used to convert the string to integer*/
        int num=stoi(parts[0]);
	int den=stoi(parts[1]);
	if(num%2==0)
		num/=2;
	else den*=2;
	return to_string(num)+"/"+to_string(den);
}
