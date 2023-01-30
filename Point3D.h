/*
 * Point3D.h
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */

#ifndef PRIORI_MATH3D_POINT3D_H_
#define PRIORI_MATH3D_POINT3D_H_

namespace priori{
	struct Point3D{
		double x, y, z;

		Point3D() : x(0), y(0), z(0) {};
		Point3D(double x, double y, double z) : x(x), y(y), z(z) {};

		Point3D operator+(const Point3D &other) const;
		Point3D operator-(const Point3D &other) const;
		Point3D operator*(const Point3D &other) const;
		Point3D operator/(const Point3D &other) const;

		Point3D operator+=(const Point3D &other);
		Point3D operator-=(const Point3D &other);
		Point3D operator*=(const Point3D &other);
		Point3D operator/=(const Point3D &other);

		Point3D operator*(const double &d);
		Point3D operator/(const double &d);

		Point3D operator*=(const double &d);
		Point3D operator/=(const double &d);

		double operator[](const int &n) const;
	};

	struct Vector3D : Point3D{
		Vector3D() : Point3D() {};
		Vector3D(double x, double y, double z) : Point3D(x, y, z) {};

		double magnitude() const;
		Vector3D normalize();

		double operator[](const int &n) const;
	};
}

#endif /* PRIORI_MATH3D_POINT3D_H_ */
