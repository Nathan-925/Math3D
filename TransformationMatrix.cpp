/*
 * TransformationMatrix.cpp
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */
#include "TransformationMatrix.h"

namespace priori{
	Point3D TransformationMatrix::transform(const Vector3D &point) const{
		long double arr[3];
		for(int i = 0; i < 3; i++){
			arr[i] = 0;
			for(int j = 0; j < 4; j++)
				arr[i] += matrix[j][i]*point[j];
		}
		return Point3D(arr[0], arr[1], arr[2]);
	}

	TransformationMatrix TransformationMatrix::operator*(const TransformationMatrix &other) const{
		TransformationMatrix out;
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < 4; j++){
				out.matrix[i][j] = 0;
				for(int l = 0; l < 4; l++){
					out[i][j] += matrix[i][l]*other[l][j];
				}
			}
		}
		return out;
	}

	TransformationMatrix TransformationMatrix::operator*=(const TransformationMatrix &other){
		*this = *this*other;
		return *this;
	}

	Point3D TransformationMatrix::operator*(const Vector3D &point) const{
		return transform(point);
	}

	double* TransformationMatrix::operator[](const int &n){
		return matrix[n];
	}

	const double* TransformationMatrix::operator[](const int &n) const{
		return matrix[n];
	}
}
