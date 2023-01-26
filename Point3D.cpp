/*
 * Point3D.cpp
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */
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
		x += other.x;
		y += other.y;
		z += other.z;
		return *this;
	}

	Point3D Point3D::operator-=(const Point3D &other){
		x -= other.x;
		y -= other.y;
		z -= other.z;
		return *this;
	}

	Point3D Point3D::operator*=(const Point3D &other){
		x *= other.x;
		y *= other.y;
		z *= other.z;
		return *this;
	}

	Point3D Point3D::operator/=(const Point3D &other){
		x /= other.x;
		y /= other.y;
		z /= other.z;
		return *this;
	}

	Point3D Point3D::operator*(const double &other){
		return Point3D(x*other, y*other, z*other);
	}

	Point3D Point3D::operator/(const double &other){
		return Point3D(x/other, y/other, z/other);
	}

	Point3D Point3D::operator*=(const double &other){
		x *= other;
		y *= other;
		z *= other;
		return *this;
	}

	Point3D Point3D::operator/=(const double &other){
		x /= other;
		y /= other;
		z /= other;
		return *this;
	}
}
