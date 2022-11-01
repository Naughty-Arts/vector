#ifndef _VECTOR_H_
#define _VECTOR_H_

typedef struct
{
	float x;
	float y;
	float z;
	float w;
} Vector;

Vector create_vector(float x, float y, float z);
Vector create_point(float x, float y, float z);
Vector vector_add(Vector v1, Vector v2);
Vector vector_subtract(Vector v1, Vector v2);
Vector vector_times(Vector v, float a);
Vector vector_div(Vector v, float a);
float vector_magnutude(Vector v);
Vector vector_normal(Vector v);
float vector_dot(Vector v1, Vector v2);
Vector vector_cross(Vector v1, Vector v2);
char* vector_string(Vector v);

#endif
