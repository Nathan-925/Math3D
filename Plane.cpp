/*
 * Plane.cpp
 *
 *  Created on: Feb 2, 2023
 *      Author: Nathan
 */
#include "Plane.h"

namespace priori{

	Plane::Plane(Vector3D v, double offset) : vector(v), offset(offset) {};
	Plane::Plane(double a, double b, double c, double d) : vector(a, b, c), offset(d) {};

	double Plane::distance(Point3D point){
		return vector.normalize()*point+offset;
	}

	double Plane::intersectionPercent(Point3D p1, Point3D p2){
		return (-offset - (vector*p1))/(vector*(p2-p1));
	}

	Point3D Plane::intersection(Plane plane, Point3D p1, Point3D p2){
		return p1+(p2-p1)*intersectionPercent(p1, p2);
	}

}
