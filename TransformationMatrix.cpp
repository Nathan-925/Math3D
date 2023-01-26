/*
 * TransformationMatrix.cpp
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */
#include "TransformationMatrix.h"

namespace priori{
	Point3D TransformationMatrix::transform(const Point3D &point){
		long double arr[3];
		for(int i = 0; i < 3; i++){
			arr[i] = 0;
			for(int j = 0; j < 4; j++)
				arr[i] += matrix[j][i]*point.mat[j];
		}
		return Point3D(arr[0], arr[1], arr[2]);
	}

	TransformationMatrix TransformationMatrix::operator*(const TransformationMatrix &other){
		TransformationMatrix out;
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < 4; j++){
				out.matrix[i][j] = 0;
				for(int l = 0; l < 4; l++){
					out.matrix[i][j] += matrix[i][l]*other.matrix[l][j];
				}
			}
		}
		return out;
	}
}
