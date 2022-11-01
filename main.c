#include <stdio.h>

#include "vector.h"

int main()
{
	Vector v1 = create_vector(1, 2, 3);
	Vector p1 = create_point(2, 3, 4);

	printf("Vector: %s\n", vector_string(v1));
	printf("Point: %s\n", vector_string(p1));

	return 0;
};