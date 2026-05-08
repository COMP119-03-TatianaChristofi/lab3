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

void printMatrix(const double mat[][MAX_COL], const int maxRow);
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);

#endif // MATRIX_H