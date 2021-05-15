/*
2, 6, 13, 23, 36, 52 ...and the sequence continues.

Examples
seq(1) ? 2

seq(2) ? 6

seq(6) ? 52

*/
using namespace std;
int seq(int n) {
	  int sequence = 4;
    int result = 2;
	  if(n == 0)
			return 1;
    for(int i = 1; i < n; i++) {
        result += sequence;
        sequence += 3;
    }
    
    return result;
}
