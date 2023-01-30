/*
 * Transformations.cpp
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */
#include <cmath>

#include "Transformations.h"

namespace priori{
	TransformationMatrix translate(double x, double y, double z){
		TransformationMatrix translate;

		translate.matrix[3][0] = x;
		translate.matrix[3][1] = y;
		translate.matrix[3][2] = z;

		return translate;
	}

	TransformationMatrix rotateX(double angle){
		TransformationMatrix rx;

		rx.matrix[1][1] = cos(angle);
		rx.matrix[1][2] = -sin(angle);
		rx.matrix[2][1] = sin(angle);
		rx.matrix[2][2] = cos(angle);

		return rx;
	}

	TransformationMatrix rotateY(double angle){
		TransformationMatrix ry;

		ry.matrix[0][0] = cos(angle);
		ry.matrix[0][2] = sin(angle);
		ry.matrix[2][0] = -sin(angle);
		ry.matrix[2][2] = cos(angle);

		return ry;
	}

	TransformationMatrix rotateZ(double angle){
		TransformationMatrix rz;

		rz.matrix[0][0] = cos(angle);
		rz.matrix[0][1] = -sin(angle);
		rz.matrix[1][0] = sin(angle);
		rz.matrix[1][1] = cos(angle);

		return rz;
	}

	TransformationMatrix scale(double xFactor, double yFactor, double zFactor){
		TransformationMatrix scale;

		scale.matrix[0][0] = xFactor;
		scale.matrix[1][1] = yFactor;
		scale.matrix[2][2] = zFactor;

		return scale;
	}

	TransformationMatrix flipX(){
		TransformationMatrix flipX;
		flipX[0][0] = -1;
		return flipX;
	}

	TransformationMatrix flipY(){
		TransformationMatrix flipY;
		flipY[1][1] = -1;
		return flipY;
	}

	TransformationMatrix flipZ(){
		TransformationMatrix flipZ;
		flipZ[2][2] = -1;
		return flipZ;
	}
}
