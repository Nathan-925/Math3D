/*
 * Point3D.cpp
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */
#include <cmath>

#include "Point3D.h"

namespace priori{
	Point3D Point3D::operator+(const Point3D &other) const{
		return Point3D(x+other.x, y+other.y, z+other.z);
	}

	Point3D Point3D::operator-(const Point3D &other) const{
		return Point3D(x-other.x, y-other.y, z-other.z);
	}

	Point3D Point3D::operator*(const Point3D &other) const{
		return Point3D(x*other.x, y*other.y, z*other.z);
	}

	Point3D Point3D::operator/(const Point3D &other) const{
		return Point3D(x/other.x, y/other.y, z/other.z);
	}

	Point3D Point3D::operator+=(const Point3D &other){
		*this = *this+other;
		return *this;
	}

	Point3D Point3D::operator-=(const Point3D &other){
		*this = *this-other;
		return *this;
	}

	Point3D Point3D::operator*=(const Point3D &other){
		*this = *this*other;
		return *this;
	}

	Point3D Point3D::operator/=(const Point3D &other){
		*this = *this/other;
		return *this;
	}

	Point3D Point3D::operator*(const double &d){
		return Point3D(x*d, y*d, z*d);
	}

	Point3D Point3D::operator/(const double &d){
		return Point3D(x/d, y/d, z/d);
	}

	Point3D Point3D::operator*=(const double &d){
		*this = *this*d;
		return *this;
	}

	Point3D Point3D::operator/=(const double &d){
		*this = *this/d;
		return *this;
	}

	double Point3D::operator[](const int &n) const{
		switch(n){
		case 0:
			return x;
		case 1:
			return y;
		case 2:
			return z;
		}
		return 1;
	}

	double Vector3D::magnitude() const{
		return sqrt(x*x+y*y+z*z);
	}

	Vector3D Vector3D::normalize(){
		double mag = magnitude();
		return Vector3D(x/mag, y/mag, z/mag);
	}

	double Vector3D::operator[](const int &n) const{
		switch(n){
		case 0:
			return x;
		case 1:
			return y;
		case 2:
			return z;
		}
		return 0;
	}
}
