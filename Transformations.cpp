/*
 * Transformations.cpp
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */
#include <cmath>

#include "Transformations.h"

TransformationMatrix translate(TransformationMatrix transform, long double x, long double y, long double z){
	TransformationMatrix translate;

	translate.matrix[3][0] = x;
	translate.matrix[3][1] = y;
	translate.matrix[3][2] = z;

	return transform*translate;
}

TransformationMatrix rotate(TransformationMatrix transform, long double xAngle, long double yAngle, long double zAngle){
		TransformationMatrix rx, ry, rz;

		rx.matrix[1][1] = cos(xAngle);
		rx.matrix[1][2] = -sin(xAngle);
		rx.matrix[2][1] = sin(xAngle);
		rx.matrix[2][2] = cos(xAngle);

		ry.matrix[0][0] = cos(yAngle);
		ry.matrix[0][2] = sin(yAngle);
		ry.matrix[2][0] = -sin(yAngle);
		ry.matrix[2][2] = cos(yAngle);

		rz.matrix[0][0] = cos(zAngle);
		rz.matrix[0][1] = -sin(zAngle);
		rz.matrix[1][0] = sin(zAngle);
		rz.matrix[1][1] = cos(zAngle);

		return transform*rx*ry*rz;
	}

TransformationMatrix rotateX(TransformationMatrix transform, long double angle){
	TransformationMatrix rx;

	rx.matrix[1][1] = cos(angle);
	rx.matrix[1][2] = -sin(angle);
	rx.matrix[2][1] = sin(angle);
	rx.matrix[2][2] = cos(angle);

	return transform*rx;
}

TransformationMatrix rotateY(TransformationMatrix transform, long double angle){
	TransformationMatrix ry;

	ry.matrix[0][0] = cos(angle);
	ry.matrix[0][2] = sin(angle);
	ry.matrix[2][0] = -sin(angle);
	ry.matrix[2][2] = cos(angle);

	return transform*ry;
}

TransformationMatrix rotateZ(TransformationMatrix transform, long double angle){
	TransformationMatrix rz;

	rz.matrix[0][0] = cos(angle);
	rz.matrix[0][1] = -sin(angle);
	rz.matrix[1][0] = sin(angle);
	rz.matrix[1][1] = cos(angle);

	return transform*rz;
}

TransformationMatrix scale(TransformationMatrix transform, long double xFactor, long double yFactor, long double zFactor){
	TransformationMatrix scale;

	scale.matrix[0][0] = xFactor;
	scale.matrix[1][1] = yFactor;
	scale.matrix[2][2] = zFactor;

	return transform*scale;
}
