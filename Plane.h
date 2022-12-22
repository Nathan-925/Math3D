/*
 * Plane.h
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */

#ifndef PRIORI_MATH3D_PLANE_H_
#define PRIORI_MATH3D_PLANE_H_

struct Plane{
	struct{
		double a, b, c, d;
	};
	double arr[4];

	Plane() : a(0), b(0), c(0), d(0) {};
	Plane(double a, double b, double c, double d) : a(a), b(b), c(c), d(d) {};
};

#endif /* PRIORI_MATH3D_PLANE_H_ */
