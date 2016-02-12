//This is a class for threevectors
//It is similar to 4 vectors but is different in that there is no time component 
//Jonathan Curtis
//02/12/2016

#include <iostream>
#include "FourVector.h"

#ifndef THREEVECTOR_H
#define THREEVECTOR_H

class ThreeVector{
protected:
	double x;	//the x component of the vector
	double y; 	//the y component
	double z;	//the z component 

public:
	ThreeVector(double, double, double);	//This creates a three-vector given components
	//components are given as 
	//x y z 

	ThreeVector(FourVector);	
	//This generates a three vector from a 4-vector by simply ommiting the time component 

	double operator *(const ThreeVector&);	//The normal dot-product
	
	ThreeVector operator +(const ThreeVector&);	//This adds two three vectors component-wise
	friend ThreeVector operator*(const double,const ThreeVector&);	//This is for scalar multiplication from the left 
	ThreeVector operator -(const ThreeVector& rh);	//This subtracts two three vectors component wise 

	void Print();	//Prints the vector to cout
};

#endif
