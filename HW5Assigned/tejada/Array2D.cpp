#include <iostream>
#include <cstdlib>
#include "Array2D.h"

// The character parameter exists to give this a different signature than any of 
// the public constructors.
Array2D::Array2D(int numR, int numC, char differentiator) : numRows(numR), numCols(numC) {
    ary = new int*[numRows];
    for (int i = 0; i < numRows; i++) {
        ary[i] = new int[numCols];
        for (int j = 0; j < numCols; j++) {
            ary[i][j] = -1;
        }
    }
}

Array2D::Array2D(int numR, int numC) : Array2D(numR, numC, 'c') { 
   for (int i = 0; i < numRows; i++) {
      for (int j = 0; j < numCols; j++) {
         ary[i][j] = i;
      }
   }
}

Array2D::Array2D(int numR, int numC, int val) : Array2D(numR, numC, 'c') { 
   for (int i = 0; i < numRows; i++) {
      for (int j = 0; j < numCols; j++) {
         ary[i][j] = val;
      }
   }
}

Array2D::Array2D(Array2D &other) : Array2D(other.numRows, other.numCols, 'c'){
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            ary[i][j] = other.ary[i][j];
        }
    }
}

Array2D::~Array2D( ){
    deleteAry(ary);
}

int Array2D::getNumRows( ) const{
    return numRows;
}

int Array2D::getNumCols( ) const{
    return numCols;
}

bool Array2D::sameSize(const Array2D& other) const {
    return (numRows == other.getNumRows( ) && numCols == other.getNumCols( ));
}

void Array2D::deleteAry(int** ary) {
    for (int i = 0; i < numRows; i++) {
        delete [ ] ary[i];
    }
    delete [ ] ary;
}

int& Array2D::operator( )(int row, int col) {
   return ary[row][col];
}
      
int Array2D::operator( )(int row, int col) const {
   return ary[row][col];
}

Array2D& Array2D::operator=(Array2D &arg1) {
    Array2D * assigned_array = new Array2D(arg1);
    for (int i = 0; i < arg1.getNumRows(); ++i) {
        for (int j = 0; j < getNumCols(); ++j) {
            assigned_array->ary[i][j] = arg1.ary[i][j];
        }
    }
    Array2D & assigned_array_ref = *assigned_array;
    return assigned_array_ref;
}

bool Array2D::operator==(const Array2D &arg2){
    if (this->sameSize(arg2)){
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCols; j++) {
                if(ary[i][j] != arg2.ary[i][j]){
                    return false;
                }
            }
        }
    }
    else{
    	return false;
    }
    return true;
}

Array2D& Array2D::operator*(Array2D &arg2) {
    if (numCols == arg2.getNumRows() && numRows == arg2.getNumCols()){
        Array2D * result = new Array2D(this->getNumRows(), arg2.getNumCols(), 0);
        Array2D &result_r = *result;
        for (int i = 0; i < result_r.getNumRows(); ++i) {
            for (int j = 0; j < result_r.getNumCols(); ++j) {
                for (int k = 0; k < numCols; ++k) {
                    result_r.ary[i][j] += this->ary[i][k] * arg2.ary[k][j];
                }
            }
        }
        return result_r;
    }
    else{
        Array2D * result = new Array2D(this->getNumRows(), this->getNumCols(), -1);
        Array2D &result_r = *result;
        return result_r;
    }
}

std::ostream &operator<<(std::ostream &os, Array2D &arg) {
    int val;
    for (int i = 0; i < arg.getNumRows(); ++i) {
        for (int j = 0; j < arg.getNumCols(); ++j) {
            val = arg.ary[i][j];
            os << val << " ";
        }
        os << std::endl;
    }
    return os;
}



