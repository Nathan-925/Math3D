/*
 * Point3D.cpp
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */
#include "Point3D.h"

namespace priori{
	Point3D Point3D::transform(const TransformationMatrix &matrix){
		long double arr[3];
		for(int i = 0; i < 3; i++){
			arr[i] = 0;
			for(int j = 0; j < 4; j++)
				arr[i] += matrix.matrix[j][i]*mat[j];
		}
		return Point3D(arr[0], arr[1], arr[2]);
	}

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
