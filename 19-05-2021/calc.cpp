/*
Create a function that returns the count of all possible paths from top left to bottom right of an m * n matrix with the constraints that from each cell you can either move to the right or down.

Examples
calc(2, 2) ? 2

calc(3, 3) ? 6

calc(4, 4) ? 20
*/
int calc(int m, int n){
    /*We use recursive function to get the all possible paths*/
    if(m == 1 || n == 1)
	return 1;
    else 
	calc(m - 1, n) + calc(m, n - 1);
}
