/*
 * Transformations.h
 *
 *  Created on: Dec 21, 2022
 *      Author: Nathan
 */

#ifndef PRIORI_MATH3D_TRANSFORMATIONS_H_
#define PRIORI_MATH3D_TRANSFORMATIONS_H_

#include "TransformationMatrix.h"

TransformationMatrix translate(TransformationMatrix transform, long double x, long double y, long double z);
TransformationMatrix rotateX(TransformationMatrix transform, long double angle);
TransformationMatrix rotateY(TransformationMatrix transform, long double angle);
TransformationMatrix rotateZ(TransformationMatrix transform, long double angle);
TransformationMatrix scale(TransformationMatrix transform, long double xFactor, long double yFactor, long double zFactor);

#endif /* PRIORI_MATH3D_TRANSFORMATIONS_H_ */
