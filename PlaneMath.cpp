/*
 * PlaneMath.cpp
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */
#include <cmath>

#include "PlaneMath.h"

namespace priori{

	double intersectionPercent(Plane plane, Point3D p1, Point3D p2){
		return (-plane.offset - (plane.vector*p1))/
						   	    (plane.vector*(p2-p1));
	}

	Point3D intersectionToPlane(Plane plane, Point3D neg, Point3D pos){
		double t = intersectionPercent(plane, neg, pos);
		return neg+(pos-neg)*t;
	}
}
