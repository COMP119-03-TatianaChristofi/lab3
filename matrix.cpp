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
#include <cstdlib>
#include <ctime>

using namespace std;
/**
* 
*/
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow) {
	double sum = 0;
	for (int i = 0; i < maxRow; i++) {
		sum += mat[i][column];
	}

	return 0;
}
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
/**
* 
*/
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow) {
	assert(maxRow > 0);

	for (int i = 0; i < maxRow; i++) {
		cout << endl;
		for (int j = 0; j < MAX_COL; j++) {
			mat[i][j] = MAT_RAND_MIN + rand() % (MAT_RAND_MAX - MAT_RAND_MIN); //@todo
		}
	}
}
