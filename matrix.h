/** \file matrix.h
*  \brief Header file for a small matrix library
*  \details...
*  \author Tatiana Christofi
*  \version 0.1 
*  \date 08/05/2026
*  \copyright University of nicosia
*/
#ifndef MATRIX_H
#define MATRIX_H

const int MAX_COL = 4;
const int MAT_RAND_MIN = 10; //Inclusive 
const int MAT_RAND_MAX = 20; //Inclusive

double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
void printMatrix(const double mat[][MAX_COL], const int maxRow);
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);

#endif // MATRIX_H