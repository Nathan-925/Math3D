/*
 * PlaneMath.h
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */

#ifndef PRIORI_MATH3D_PLANEMATH_H_
#define PRIORI_MATH3D_PLANEMATH_H_

#include "Plane.h"
#include "Point3D.h"

namespace priori{
	double intersectionPercent(Plane plane, Point3D p1, Point3D p2);
	Point3D intersectionToPlane(Plane plane, Point3D neg, Point3D pos);
}

#endif /* PRIORI_MATH3D_PLANEMATH_H_ */
