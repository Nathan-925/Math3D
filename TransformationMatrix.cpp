/*
 * TransformationMatrix.cpp
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */
#include "TransformationMatrix.h"

namespace priori{
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
