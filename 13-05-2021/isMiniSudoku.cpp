bool isMiniSudoku(std::vector<std::vector<int>> square) {
	/*create integer array*/
	std::vector<int>numsCount;
	/*Iterate row vise*/
	for(int i=0;i<3;i++)
	{    /*Iterate column vise*/
		for(int j=0;j<3;j++)
		{   /*to check the sudoku elements between the range 0 to 9.if any one element is not in the range we return false .*/
			if(!(square[i][j]>=1&& square[i][j]<=9))
			{
				return false;
			}
			/*we used below two steps to find repeated element in the sudoku .if any one of the element repeated twice we return false */
			numsCount[square[i][j]]++;
			if(numsCount[square[i][j]]>1)
			{
			    return false;
			}
			
		}
	}
	/*Make sure there are no duplicates, and no numbers outside this range. Finally we return true */
	return true;
}
