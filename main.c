#include <stdio.h>

#include "vector.h"

int main()
{
	Vector3 *v = vector3_create(1, 2, 3);
	printf("V3: %s\n", vector3_string(v));
	vector3_free(v);

	return 0;
};