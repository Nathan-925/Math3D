/*
 * Point3D.cpp
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */
#include <cmath>

#include "Vector3D.h"

namespace priori{

	Vector3D Vector3D::operator+(Vector3D other) const{
		other.x += x;
		other.y += y;
		other.z += z;
		return other;
	}

	Vector3D Vector3D::operator-(Vector3D other) const{
		other.x = x-other.x;
		other.y = y-other.y;
		other.z = z-other.z;
		return other;
	}

	Vector3D Vector3D::operator^(Vector3D other) const{
		other.x = y*other.z - z*other.y;
		other.y = z*other.x - x*other.z;
		other.z = z*other.y - y*other.x;
		return other;
	}

	double Vector3D::operator*(const Vector3D &other) const{
		return x*other.x + y*other.y + z*other.z;
	}

	Vector3D Vector3D::operator+=(const Vector3D &other){
		x += other.x;
		y += other.y;
		z += other.z;
		return *this;
	}

	Vector3D Vector3D::operator-=(const Vector3D &other){
		x -= other.x;
		y -= other.y;
		z -= other.z;
		return *this;
	}

	Vector3D Vector3D::operator^=(const Vector3D &other){
		x = y*other.z - z*other.y;
		y = z*other.x - x*other.z;
		z = z*other.y - y*other.x;
		return *this;
	}

	Vector3D Vector3D::operator*(const double &d) const{
		return Vector3D{x*d, y*d, z*d, isPoint};
	}

	Vector3D Vector3D::operator/(const double &d) const{
		return Vector3D{x/d, y/d, z/d, isPoint};
	}

	Vector3D Vector3D::operator*=(const double &d){
		x *= d;
		y *= d;
		z *= d;
		return *this;
	}

	Vector3D Vector3D::operator/=(const double &d){
		x /= d;
		y /= d;
		z /= d;
		return *this;
	}

	bool Vector3D::operator==(const Vector3D &other) const{
		return x == other.x && y == other.y && z == other.z;
	}

	bool Vector3D::operator!=(const Vector3D &other) const{
		return x != other.x && y != other.y && z != other.z;
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
		return isPoint;
	}

	double Vector3D::magnitude() const{
		return sqrt(x*x+y*y+z*z);
	}

	Vector3D Vector3D::normalize() const{
		double mag = magnitude();
		return Vector3D(*this)/mag;
	}
}
