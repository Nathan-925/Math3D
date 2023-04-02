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
		bool isPoint;

		double magnitude() const;
		Vector3D normalize() const;

		Vector3D operator+(Vector3D other) const;
		Vector3D operator-(Vector3D other) const;
		Vector3D operator^(Vector3D other) const;

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

		double operator[](const int &n) const;
	};
}

#endif /* PRIORI_MATH3D_VECTOR3D_H_ */
