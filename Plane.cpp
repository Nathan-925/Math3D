/*
 * Plane.cpp
 *
 *  Created on: Feb 2, 2023
 *      Author: Nathan
 */
#include "Plane.h"

namespace priori{

	double Plane::distance(Vector3D point){
		return vector.normalize()*point+offset;
	}

	double Plane::intersectionPercent(Vector3D p1, Vector3D p2){
		return (-offset - (vector*p1))/(vector*(p2-p1));
	}

	Vector3D Plane::intersection(Plane plane, Vector3D p1, Vector3D p2){
		return p1+(p2-p1)*intersectionPercent(p1, p2);
	}

}
