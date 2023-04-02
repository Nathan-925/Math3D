/*
 * Plane.h
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */

#ifndef PRIORI_MATH3D_PLANE_H_
#define PRIORI_MATH3D_PLANE_H_

#include "Vector3D.h"

namespace priori{
	struct Plane{
		Vector3D vector;
		double offset;

		double distance(Vector3D point);
		double intersectionPercent(Vector3D p1, Vector3D p2);
		Vector3D intersection(Plane plane, Vector3D p1, Vector3D p2);
	};
}

#endif /* PRIORI_MATH3D_PLANE_H_ */
