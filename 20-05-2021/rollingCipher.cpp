/*
Write a function that accepts a string and an n and returns a cipher by rolling each character forward (n > 0) or backward (n < 0) n times.

Note: Think of the letters as a connected loop, so rolling a backwards once will yield z, and rolling z forward once will yield a. If you roll 26 times in either direction, you should end up back where you started.

Examples
rollingCipher("abcd", 1) ? "bcde"

rollingCipher("abcd", -1) ? "zabc"

rollingCipher("abcd", 3) ? "defg"

rollingCipher("abcd", 26) ? "abcd"
*/
using namespace std;
std::string rollingCipher(std::string str, int n) {
	string cipher;
	int ascii;	
	/*we subtract and add 26 with the ascii value when the ascii values of the character is more than 122 and less than 97 */
        for (int i=0; i<str.size();i++)
	{
	        ascii= str[i]+n;
	        if (ascii>122)
		{
			ascii=ascii-26;
		}
	        else if (ascii<97)
		{
			ascii=ascii+26;
		}
	         cipher.push_back(ascii);
	}
        return cipher;
}
