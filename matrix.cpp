/** \file matrix.cpp
*  \brief Implementation file for a small matrix library
*  \details...
*  \author Tatiana Christofi
*  \version 0.1
*  \date 08/05/2026
*  \copyright University of nicosia
*/
#include "matrix.h"
#include <iostream>
#include <cassert>

using namespace std;
/**
* 
*/
void printMatrix(const double mat[][MAX_COL], const int maxRow) {
	assert(maxRow > 0);
	
	cout << "Printing Matrix " <<maxRow<<" by "<<MAX_COL<<endl;

	for (int i = 0; i < maxRow; i++) {
		cout << endl;
		for (int j = 0; j < MAX_COL; j++) {
			cout << mat[i][j] << "\t";
		}
	}
}
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);