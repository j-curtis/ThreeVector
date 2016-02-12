//This is the definition for the three-vector class
//Jonathan Curtis
//02/12/2016

#include "ThreeVector.h"

ThreeVector::ThreeVector(double arg1, double arg2, double arg3){
	x = arg1;
	y = arg2; 
	z = arg3;
}

double ThreeVector::operator *(const ThreeVector& rh){
	double sumx = (x)*(rh.x); 
	double sumy = (y)*(rh.y);
	double sumz = (z)*(rh.z);

	return sumx + sumy + sumz;
}

ThreeVector ThreeVector::operator +(const ThreeVector& rh){
	ThreeVector sum(0.0,0.0,0.0);

	sum.x = (x + rh.x);
	sum.y = (y + rh.y);
	sum.z = (z + rh.z);

	return sum;
}

ThreeVector operator *(const double c, const ThreeVector& rh){
	ThreeVector vec(0.0,0.0,0.0);

	vec.x = c*(rh.x);
	vec.y = c*(rh.y);
	vec.z = c*(rh.z);

	return vec;
}

ThreeVector ThreeVector::operator -(const ThreeVector& rh){
	return ( (*this) + ( (-1.0)*rh ) );	//Subtraction as addition of additive inverse 
}


void ThreeVector::Print(){
	std::cout<<"("<<x<<", "<<y<<", "<<z<<")";
}