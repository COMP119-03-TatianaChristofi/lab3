/** \file lab3.cpp
*  \brief  a small program for matrix 
*  \details...
*  \author Tatiana Christofi
*  \version 0.1
*  \date 08/05/2026
*  \copyright University of nicosia
*/
#include <iostream>
#include "matrix.h"

using namespace std;
/**
*
*/
int main()
{
	const int MAX_ROW = 3;

	double mat[MAX_ROW][MAX_COL] = { 0,1,2,3,4,5,6,7 };

	printMatrix(mat ,MAX_ROW);

	fillWithRandomNum(mat, MAX_ROW);

	printMatrix(mat, MAX_ROW);

	cout << "\nSum of col 0:" << sumOfCol(mat, 0, MAX_ROW);

	cout << endl;
	cout << "Have a nice day;)";
	return 0;
}

