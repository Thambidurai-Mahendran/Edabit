using namespace std; 

vector<vector<int>> transposeMatrix(vector<vector<int>> arr) {
	    /*create Two dimensional integer array*/
	    vector<vector<int>> matrixTranspose;
	    /*iterate row wise*/
	    for(int i=0;i<arr.size();i++)
		{   
		    /*Iterate column wise*/
			for(int j=0;j<arr[i].size();j++)
			{
				/*Interchange the row and matrix to get transpose matrixc*/
				matrixTranspose[j][i]=arr[i][j];
			}
		}
		/*Finally we return the transpose matrix*/
	    return matrixTranspose;
}
