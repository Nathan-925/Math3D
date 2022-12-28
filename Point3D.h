/*
 * Point3D.h
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */

#ifndef PRIORI_MATH3D_POINT3D_H_
#define PRIORI_MATH3D_POINT3D_H_

#include "TransformationMatrix.h"

namespace priori{
	struct Point3D{
		union{
			struct{
				long double x, y, z;
			};
			long double mat[4];
		};

		Point3D() : mat{0, 0, 0, 1} {};
		Point3D(long double x, long double y, long double z) : mat{x, y, z, 1} {};
		Point3D transform(const TransformationMatrix &matrix);

		Point3D operator+(const Point3D &other) const;
		Point3D operator-(const Point3D &other) const;
		Point3D operator*(const Point3D &other) const;
		Point3D operator/(const Point3D &other) const;

		Point3D operator+=(const Point3D &other);
		Point3D operator-=(const Point3D &other);
		Point3D operator*=(const Point3D &other);
		Point3D operator/=(const Point3D &other);

		Point3D operator+(const double &other);
		Point3D operator-(const double &other);
		Point3D operator*(const double &other);
		Point3D operator/(const double &other);

		Point3D operator+=(const double &other);
		Point3D operator-=(const double &other);
		Point3D operator*=(const double &other);
		Point3D operator/=(const double &other);
	};

	struct Vector3D: Point3D{
		Vector3D() : Point3D() { mat[4] = 0; };
		Vector3D(long double x, long double y, long double z) : Point3D(x, y, z) { mat[4] = 0; };
	};
}

#endif /* PRIORI_MATH3D_POINT3D_H_ */
