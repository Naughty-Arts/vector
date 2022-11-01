#include "vector.h"

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

Vector create_vector(float x, float y, float z)
{
	Vector v = { x, y, z, 0 };
	return v;
}

Vector create_point(float x, float y, float z)
{
	Vector v = { x, y, z, 1 };
	return v;
}

Vector vector_add(Vector v1, Vector v2)
{
	Vector v = { v1.x + v2.x, v1.y + v2.y, v1.z + v2.z, v1.w + v2.w };
	return v;
}

Vector vector_subtract(Vector v1, Vector v2)
{
	Vector v = { v1.x - v2.x, v1.y - v2.y, v1.z - v2.z, v1.w - v2.w };
	return v;
}

Vector vector_times(Vector v, float a)
{
	Vector r = { v.x * a, v.y * a, v.z * a, v.w * a };
	return r;
}

Vector vector_div(Vector v, float a)
{
	Vector r = { v.x / a, v.y / a, v.z / a, v.w / a };
	return r;
}

float vector_magnutude(Vector v)
{
	return sqrt(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w);
}

Vector vector_normal(Vector v)
{
	float m = vector_magnutude(v);
	Vector r = { v.x / m, v.y / m, v.z / m, v.w / m };
	return r;
}

float vector_dot(Vector v1, Vector v2)
{
	return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w;
}

Vector vector_cross(Vector v1, Vector v2)
{
	Vector r = { 
	    v1.y * v2.z - v1.z * v2.y,
	    v1.z * v2.x - v1.x * v2.z,
	    v1.x * v2.y - v1.y * v2.x,
	    0
	};
	return r;
}

char* vector_string(Vector v)
{
	char* buffer = malloc(sizeof(char) * 256);
	sprintf(buffer, "%f %f %f %f", v.x, v.y, v.z, v.w);
	return buffer;
}