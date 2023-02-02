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

}
