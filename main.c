#include <stdio.h>
#include <math.h>

#include "vector.h"

int main()
{
	v v1 = vv(1, 2, 3);
	v v2 = vv(2, 3, 4);
	v result = vplus(v1, v2);
	v copy = vc(result);

	v vzero = vvz;
	v vpoint = vpz;

	vprnt("result", result);
	vprnt("copy", copy);
	vprnt("zero vector", vzero);
	vprnt("zero point", vpoint);

	v normal = vn(v2);
	vprnt("normal", normal);

	v normal2 = vn(result);
	vprnt("another normal", normal2);


	return 0;
};