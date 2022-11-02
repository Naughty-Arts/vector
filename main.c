#include <stdio.h>

#include "vector.h"

int main()
{
	Vector3 *v = vector3_create(1, 2, 3);
	printf("V3: %s\n", vector3_string(v));
	printf("|V3| = %f\n", vector3_magnitude(v));
	vector3_times(v, 2);
	printf("V3 * 2 = %s\n", vector3_string(v));
	printf("|V3 * 2| = %f\n", vector3_magnitude(v));
	vector3_divide(v, 2);
	printf("V3: %s\n", vector3_string(v));
	printf("|V3| = %f\n", vector3_magnitude(v));
	vector3_normalize(v);
	printf("normalized V3: %s\n", vector3_string(v));
	printf("|V3| = %f\n", vector3_magnitude(v));
	vector3_free(v);

	v = vector3_create(2, 3, 4);
	Vector3* v2 = vector3_create(1, 2, 3);
	vector3_plus(v, v2);
	printf("Adding vectors: %s\n", vector3_string(v));
	vector3_minus(v, v2);
	printf("Subtracting vectors: %s\n", vector3_string(v));

	return 0;
};