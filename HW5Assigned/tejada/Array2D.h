#ifndef ARRAY2D_H_
#define ARRAY2D_H_
#include <iostream>
class Array2D {

public:
   Array2D(int numR, int numC); 
   Array2D(int numR, int numC, int val);
   Array2D(Array2D &other);
   virtual ~Array2D( ); //Made Virtual to avoid compiler error.
   virtual int& operator( )(int row, int col);
   virtual int operator( )(int row, int col) const;
   virtual Array2D& operator=(Array2D &arg1);
   virtual bool operator==(const Array2D &arg2);
   virtual Array2D& operator*(Array2D &arg2);
   friend std::ostream& operator<<(std::ostream &os,  Array2D &arg); //Added as friend function instead of virtual as otherwise this pointer is a Array2D object not ostream
private:
   int numRows;
   int numCols;
   int ** ary;
   Array2D(int numR, int numC, char differentiator);
   void deleteAry(int** ary);
   bool sameSize(const Array2D& other) const;
   int getNumCols( ) const;
   int getNumRows( ) const;
};

#endif /* ARRAY2D_H_ */
