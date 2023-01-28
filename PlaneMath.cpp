/*
 * PlaneMath.cpp
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */
#include "PlaneMath.h"

namespace priori{
	Plane toUnitPlane(Plane plane){
		double mag = (plane.a+plane.b+plane.c)/3;
		return Plane(plane.a/mag, plane.b/mag, plane.c/mag, plane.d);
	}

	double distanceToPlane(Point3D point, Plane plane){
		plane = toUnitPlane(plane);
		return point.x*plane.a +
			   point.y*plane.b +
			   point.z*plane.c +
			   plane.d;
	}

	double intersectionPercent(const Plane &plane, const Point3D &p1, const Point3D &p2){
		Point3D n(plane.a, plane.b, plane.c);
		Point3D num = n*p1;
		Point3D den = n*(p2-p1);
		return (-plane.d - (num.x + num.y + num.z))/
						   (den.x + den.y + den.z);
	}

	Point3D intersectionToPlane(Plane &plane, Point3D &neg, Point3D &pos){
		double t = intersectionPercent(plane, neg, pos);
		return neg+(pos-neg)*t;
	}
}
