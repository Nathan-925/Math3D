/*
 * Plane.h
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */

#ifndef PRIORI_MATH3D_PLANE_H_
#define PRIORI_MATH3D_PLANE_H_

#include "Point3D.h"

namespace priori{
	struct Plane{
		Vector3D vector;
		double offset;

		Plane(Vector3D v, double offset = 0);
		Plane(double a, double b, double c, double d);

		double distance(Point3D point);
		double intersectionPercent(Point3D p1, Point3D p2);
		Point3D intersection(Plane plane, Point3D p1, Point3D p2);
	};
}

#endif /* PRIORI_MATH3D_PLANE_H_ */
