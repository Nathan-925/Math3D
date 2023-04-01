/*
 * Point3D.cpp
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */
#include <cmath>

#include "Vector3D.h"

namespace priori{
	Vector3D Vector3D::operator+(const Vector3D &other) const{
		return Vector3D(x+other.x, y+other.y, z+other.z);
	}

	Vector3D Vector3D::operator-(const Vector3D &other) const{
		return Vector3D(x-other.x, y-other.y, z-other.z);
	}

	double Vector3D::operator*(const Vector3D &other) const{
		return x*other.x + y*other.y + z*other.z;
	}

	Vector3D Vector3D::operator^(const Vector3D &other) const{
		return Vector3D(y*other.z-z*other.y, z*other.x-x*other.z, x*other.y-y*other.x);
	}

	Vector3D Vector3D::operator+=(const Vector3D &other){
		*this = *this+other;
		return *this;
	}

	Vector3D Vector3D::operator-=(const Vector3D &other){
		*this = *this-other;
		return *this;
	}

	Vector3D Vector3D::operator^=(const Vector3D &other){
		*this = *this^other;
		return *this;
	}

	Vector3D Vector3D::operator*(const double &d) const{
		return Vector3D(x*d, y*d, z*d);
	}

	Vector3D Vector3D::operator/(const double &d) const{
		return Vector3D(x/d, y/d, z/d);
	}

	Vector3D Vector3D::operator*=(const double &d){
		*this = *this*d;
		return *this;
	}

	Vector3D Vector3D::operator/=(const double &d){
		*this = *this/d;
		return *this;
	}

	bool Vector3D::operator==(const Vector3D &other) const{
		return x == other.x &&
			   y == other.y &&
			   z == other.z;
	}

	bool Vector3D::operator!=(const Vector3D &other) const{
		return x != other.x &&
			   y != other.y &&
			   z != other.z;
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

	Point3D Point3D::operator+(const Point3D &other) const{
		return Vector3D::operator+(other);
	}

	Point3D Point3D::operator-(const Point3D &other) const{
		return Vector3D::operator-(other);
	}

	Point3D Point3D::operator^(const Point3D &other) const{
		return Vector3D::operator^(other);
	}

	double Point3D::operator*(const Point3D &other) const{
		return Vector3D::operator*(other);
	}

	Point3D Point3D::operator+=(const Point3D &other){
		return Vector3D::operator+=(other);
	}

	Point3D Point3D::operator-=(const Point3D &other){
		return Vector3D::operator-=(other);
	}

	Point3D Point3D::operator^=(const Point3D &other){
		return Vector3D::operator^=(other);
	}

	Point3D Point3D::operator*(const double &d) const{
		return Vector3D::operator*(d);
	}

	Point3D Point3D::operator/(const double &d) const{
		return Vector3D::operator/(d);
	}

	Point3D Point3D::operator*=(const double &d){
		return Vector3D::operator*=(d);
	}

	Point3D Point3D::operator/=(const double &d){
		return Vector3D::operator/=(d);
	}

	bool Point3D::operator==(const Point3D &other) const{
		return Vector3D::operator==(other);
	}

	bool Point3D::operator!=(const Point3D &other) const{
		return Vector3D::operator!=(other);
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
}
