/*
 * Math helpers
 * Copyright 2015 Philipp Zabel
 * SPDX-License-Identifier:	LGPL-2.0+ or BSL-1.0
 */
#ifndef __MATH_H__
#define __MATH_H__

#include <stdint.h>

typedef struct {
	float x, y, z;
} vec3;

typedef struct {
	double x, y, z;
} dvec3;

typedef struct {
	double x, y, z, w;
} dquat;

typedef struct {
	double m[9];
} dmat3;

float f16_to_float(uint16_t f16);
void dquat_from_axis_angle(dquat *quat, const dvec3 *axis, double angle);
void vec3_normalize(vec3 *v);

#endif /* __MATH_H__ */
