/*
 * TransformationMatrix.h
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */

#ifndef PRIORI_MATH3D_TRANSFORMATIONMATRIX_H_
#define PRIORI_MATH3D_TRANSFORMATIONMATRIX_H_

#include "Vector3D.h"

namespace priori{
	struct TransformationMatrix{
		double matrix[4][4] = {{1, 0, 0, 0},
							   {0, 1, 0, 0},
							   {0, 0, 1, 0},
							   {0, 0, 0, 1}};
		TransformationMatrix() {};
		TransformationMatrix(double x, double y, double z) {
			matrix[3][0] = x;
			matrix[3][1] = y;
			matrix[3][2] = z;
		};

		Point3D transform(const Vector3D &vector) const;

		TransformationMatrix operator*(const TransformationMatrix &other) const;

		TransformationMatrix operator*=(const TransformationMatrix &other);

		Point3D operator*(const Vector3D &vector) const;

		double* operator[](const int &n);
		const double* operator[](const int &n) const;
	};
}

#endif /* PRIORI_MATH3D_TRANSFORMATIONMATRIX_H_ */
