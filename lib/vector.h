#ifndef _VECTOR_H_
#define _VECTOR_H_

typedef struct
{
	float x;
	float y;
	float z;
} Vector3;

Vector3* vector3_create(float x, float y, float z);
Vector3* vector3_copy(Vector3* v);
Vector3* vector3_create_zero();
Vector3* vector3_create_times(Vector3* v, float f);
Vector3* vector3_create_divide(Vector3* v, float f);
Vector3* vector3_create_normalized(Vector3* v);
Vector3* vector3_create_plus(Vector3* v1, Vector3* v2);
Vector3* vector3_create_minus(Vector3* v1, Vector3* v2);
void vector3_free(Vector3* v);
char* vector3_string(Vector3* v);
float vector3_magnitude(Vector3* v);
void vector3_times(Vector3* v, float f);
void vector3_divide(Vector3* v, float f);
void vector3_normalize(Vector3* v);
void vector3_plus(Vector3* v, Vector3* v2);
void vector3_minus(Vector3* v, Vector3* v2);

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
