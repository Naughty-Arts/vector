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

	return 0;
};