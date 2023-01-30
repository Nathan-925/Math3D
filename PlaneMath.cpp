/*
 * PlaneMath.cpp
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */
#include <cmath>

#include "PlaneMath.h"

namespace priori{
	double distanceToPlane(Point3D point, Plane plane){
		Vector3D v = plane.vector.normalize();
		return point.x*v.x +
			   point.y*v.y +
			   point.z*v.z +
			   plane.offset;
	}

	double intersectionPercent(Plane plane, Point3D p1, Point3D p2){
		Point3D num = plane.vector*p1;
		Point3D den = plane.vector*(p2-p1);
		return (-plane.offset - (num.x + num.y + num.z))/
						   	    (den.x + den.y + den.z);
	}

	Point3D intersectionToPlane(Plane plane, Point3D neg, Point3D pos){
		double t = intersectionPercent(plane, neg, pos);
		return neg+(pos-neg)*t;
	}
}
