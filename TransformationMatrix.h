/*
 * TransformationMatrix.h
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */

#ifndef PRIORI_MATH3D_TRANSFORMATIONMATRIX_H_
#define PRIORI_MATH3D_TRANSFORMATIONMATRIX_H_

namespace priori{
	struct TransformationMatrix{
		long double matrix[4][4] = {{1, 0, 0, 0},
									{0, 1, 0, 0},
									{0, 0, 1, 0},
									{0, 0, 0, 1}};
		TransformationMatrix() {};
		TransformationMatrix(long double x, long double y, long double z) {
			matrix[3][0] = x;
			matrix[3][1] = y;
			matrix[3][2] = z;
		};

		TransformationMatrix operator*(const TransformationMatrix &other);
	};
}

#endif /* PRIORI_MATH3D_TRANSFORMATIONMATRIX_H_ */
