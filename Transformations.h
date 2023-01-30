/*
 * Transformations.h
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */

#ifndef PRIORI_MATH3D_TRANSFORMATIONS_H_
#define PRIORI_MATH3D_TRANSFORMATIONS_H_

#include "TransformationMatrix.h"

namespace priori{
	TransformationMatrix translate(double x, double y, double z);
	TransformationMatrix rotateX(double angle);
	TransformationMatrix rotateY(double angle);
	TransformationMatrix rotateZ(double angle);
	TransformationMatrix scale(double xFactor, double yFactor, double zFactor);
	TransformationMatrix flipX();
	TransformationMatrix flipY();
	TransformationMatrix flipZ();
}

#endif /* PRIORI_MATH3D_TRANSFORMATIONS_H_ */
