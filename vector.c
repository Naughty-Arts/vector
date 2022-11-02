#include "vector.h"

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

Vector3* vector3_create(float x, float y, float z)
{
	Vector3 *r = malloc(sizeof(Vector3));
	r->x = x;
	r->y = y;
	r->z = z;
	return r;
}

Vector3* vector3_copy(Vector3* v)
{
	Vector3* r = malloc(sizeof(Vector3));
	r->x = v->x;
	r->y = v->y;
	r->z = v->z;
	return r;
}

Vector3* vector3_create_zero()
{
	Vector3* r = malloc(sizeof(Vector3));
	memset(r, 0, sizeof(Vector3));
	return r;
}

Vector3* vector3_create_times(Vector3* v, float f)
{
	Vector3* r = malloc(sizeof(Vector3));
	r->x = v->x * f;
	r->y = v->y * f;
	r->z = v->z * f;
	return r;
}

Vector3* vector3_create_divide(Vector3* v, float f)
{
	Vector3* r = malloc(sizeof(Vector3));
	r->x = v->x / f;
	r->y = v->y / f;
	r->z = v->z / f;
	return r;
}

Vector3* vector3_create_normalized(Vector3* v)
{
	Vector3* r = vector3_copy(v);
	float m = vector3_magnitude(v);
	vector3_divide(r, m);
	return r;
}

void vector3_free(Vector3* v)
{
	free(v);
}

char* vector3_string(Vector3* v)
{
	char* result = malloc(sizeof(char) * 128);
	sprintf(result, "%f, %f, %f", v->x, v->y, v->z);
	return result;
}

float vector3_magnitude(Vector3* v)
{
	return sqrt((v->x * v->x) + (v->y * v->y) + (v->z * v->z));
}

void vector3_times(Vector3* v, float f)
{
	v->x *= f;
	v->y *= f;
	v->z *= f;
}

void vector3_divide(Vector3* v, float f)
{
	v->x /= f;
	v->y /= f;
	v->z /= f;
}

void vector3_normalize(Vector3* v)
{
	float m = vector3_magnitude(v);
	vector3_divide(v, m);
}

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