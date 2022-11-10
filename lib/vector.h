#ifndef _VECTOR_H_
#define _VECTOR_H_

typedef struct
{
	float x;
	float y;
	float z;
	float w;
} v;

#define vv(x, y, z) ({ v result = { x, y, z, 0 }; result; })
#define vp(x, y, z) ({ v result = { x, y, z, 1 }; result; })
#define vc(v1) ({ v result = { v1.x, v1.y, v1.z, v1.w }; result; })
#define vvz { 0, 0, 0, 0 }
#define vpz { 0, 0, 0, 1 }
#define vplus(v1, v2) ({ v result = { v1.x + v2.x, v1.y + v2.y, v1.z + v2.z, v1.w + v2.w}; result; })
#define vplusa(v1, v2) v1.x += v2.x; v1.y += v2.y; v1.z += v2.z; v1.w += v2.w
#define vminus(v1, v2) ({ v result = { v1.x - v2.x, v1.y - v2.y, v1.z - v2.z, v1.w - v2.w}; result; })
#define vminusa(v1, v2) v1.x -= v2.x; v1.y -= v2.y; v1.z -= v2.z; v1.w -= v2.w
#define vtimes(v1, a) ({ v result = { v1.x * a, v1.y * a, v1.z * a, v1.w * a}; result; })
#define vtimesa(v1, a) v1.x *= a; v1.y *= a; v1.z *= a; v1.w *= a
#define vdiv(v1, a) { v1.x / a, v1.y / a, v1.z / a, v1.w / a }
#define vdiva(v1, a) v1.x /= a; v1.y /= a; v1.z /= a; v1.w /= a
#define vmag(v1) sqrt(v1.x * v1.x + v1.y * v1.y + v1.z * v1.z + v1.w * v1.w)
#define vn(v1) ({ float mag = vmag(v1); v result = vdiv(v1, mag); result; })
#define vna(v1) {float mag = vmag(v1); vdiva(v1, mag);}
#define vd(v1, v2) (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w)
#define vcr(v1, v2) { v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.x, 0 }
#define vprnt(l, v1) printf("%s: %f, %f, %f, %f\n", l, v1.x, v1.y, v1.z, v1.w)

#endif
