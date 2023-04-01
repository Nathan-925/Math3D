/*
 * Point3D.h
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */

#ifndef PRIORI_MATH3D_VECTOR3D_H_
#define PRIORI_MATH3D_VECTOR3D_H_

namespace priori{
	struct Vector3D{
		double x, y, z;

		Vector3D() : x(0), y(0), z(0) {};
		Vector3D(double x, double y, double z) : x(x), y(y), z(z) {};
		virtual ~Vector3D() {};

		double magnitude() const;
		Vector3D normalize();

		Vector3D operator+(const Vector3D &other) const;
		Vector3D operator-(const Vector3D &other) const;
		Vector3D operator^(const Vector3D &other) const;

		double operator*(const Vector3D &other) const;

		Vector3D operator+=(const Vector3D &other);
		Vector3D operator-=(const Vector3D &other);
		Vector3D operator^=(const Vector3D &other);

		Vector3D operator*(const double &d) const;
		Vector3D operator/(const double &d) const;

		Vector3D operator*=(const double &d);
		Vector3D operator/=(const double &d);

		bool operator==(const Vector3D &other) const;
		bool operator!=(const Vector3D &other) const;

		virtual double operator[](const int &n) const;
	};

	struct Point3D : Vector3D{
		Point3D() : Vector3D() {};
		Point3D(double x, double y, double z) : Vector3D(x, y, z) {};
		Point3D(Vector3D other) : Vector3D(other) {};

		Point3D operator+(const Point3D &other) const;
		Point3D operator-(const Point3D &other) const;
		Point3D operator^(const Point3D &other) const;

		double operator*(const Point3D &other) const;

		Point3D operator+=(const Point3D &other);
		Point3D operator-=(const Point3D &other);
		Point3D operator^=(const Point3D &other);

		Point3D operator*(const double &d) const;
		Point3D operator/(const double &d) const;

		Point3D operator*=(const double &d);
		Point3D operator/=(const double &d);

		bool operator==(const Point3D &other) const;
		bool operator!=(const Point3D &other) const;

		double operator[](const int &n) const;
	};
}

#endif /* PRIORI_MATH3D_VECTOR3D_H_ */
