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

		Plane(Vector3D v, double offset = 0) : vector(v), offset(offset) {};
		Plane(double a, double b, double c, double d) : vector(a, b, c), offset(d) {};
	};
}

#endif /* PRIORI_MATH3D_PLANE_H_ */
