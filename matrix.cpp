//////////////////////////////////////////////////////////////////////////////////
// Description: 
//             This is a matrix calculator that adds and multiplies 2 matrices. 
//////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<assert.h>
#include <cstdlib>
#include <algorithm> 
#include "matrix.h"

using namespace std;

// Store the width or height of the Matrix, respectively. 
int height;
int width;

double** arrayMatrix;

// Stores the elements of the Matrix (as two-dimensional arrpay).
double** values;


//Creates an empty Matrix of size 0 � 0.
Matrix::Matrix() : Matrix(0, 0)
{

}

//Creates an identity Matrix of size size � size. That is, the Matrix is filled with 0s except
//for the diagonal which has value 1 everywhere.
Matrix::Matrix(int size) : Matrix(size, size)
{
	for (int i = 0; i < size; i++) {
		this->values[i][i] = 1;
	}
}

// Creates a Matrix of size height � width filled with 0s.
Matrix::Matrix(int height, int width)
{
	values = new double*[height];
	for (int i = 0; i < height; i++) {
		values[i] = new double[width];
	}
	this->height = height;
	this->width = width;

	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < width; ++j) {
			this->values[i][j] = 0;
		}
	}
}

// Destructor for the Matrix. Deletes all allocated memory.
Matrix::~Matrix()
{
	for (int i = 0; i < getHeight(); i++)
	{
		delete[] values[i];
	}
	delete[] values;
}

//Returns the width of the Matrix.
int Matrix::getWidth() const
{
	return width;
}

// Returns the height of the Matrix.
int Matrix::getHeight() const
{
	return height;
}


// Changes the size of the Matrix to height � width. Existing fields
// keep their value and new fields are set to 0. 
// Note that it changes the Matrix and does not create a copy.
void Matrix::resize(int height2, int width2)
{

	for (int i = 0; i < min(height, height2); i++) {
		for (int j = 0; j < min(width, width2); j++) {


		}
	}
	this->height = height2;
	this->width = width2;
}


// Returns the value at the specified position in the Matrix.
// Rows and columns start counting at 0, i. e., the top left element is at position (0, 0).
double& Matrix::operator()(const int row, const int col)
{
	assert(row >= 0 && row < height && col >= 0 && col < width);
	return values[row][col];
}

double Matrix::operator()(const int row, const int col) const
{
	assert(row >= 0 && row < height && col >= 0 && col < width);
	return values[row][col];
}