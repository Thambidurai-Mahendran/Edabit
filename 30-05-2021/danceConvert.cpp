/*
Your local bank has decided to upgrade its ATM machines by incorporating motion sensor technology. The machines now interpret a series of consecutive dance moves in place of a PIN number.

Create a program that converts a customer's PIN number to its dance equivalent. There is one dance move per digit in the PIN number. A list of dance moves is given in the code.

Examples
danceConvert("0000") ? ["Shimmy", "Shake", "Pirouette", "Slide"]

danceConvert("3856") ? [ "Slide", "Arabesque", "Pop", "Arabesque" ]

danceConvert("9999") ? [ "Arabesque", "Shimmy", "Shake", "Pirouette" ]

danceConvert("32a1") ? ["Invalid input."]
*/

using namespace std;

vector<string> danceConvert(string pin) {
	vector<string> moves= {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
	vector<string>result;
    int digit;
    //we convert characters->digits
    //if the digits is less than zero or greater than 9 we return invalid input
    for(int i=0; i<4; i++){
        digit = (int) pin[i] - 48;
        if(digit < 0 || digit > 9)
            return vector<string>({"Invalid input."});
        result.push_back(moves[(i + digit) % 10]);
    }
    return result;
}
