#include "add.h"

float add(float a, float b)
{
	f2i a_i, b_i, s_i;
	int *pa, *pb;
	pa = (int *)&a;
	pb = (int *)&b;

	a_i.sign = (*pa >> 31) & 0x00000001;
	a_i.exp = ((*pa >> 23) & 0x000000ff) - 150;
	a_i.frac = (*pa & 0x007fffff) | 0x00800000;
	b_i.sign = (*pb >> 31) & 0x00000001;
	b_i.exp = ((*pb >> 23) & 0x000000ff) - 150;
	b_i.frac = (*pb & 0x007fffff) | 0x00800000;

	if(a_i.exp < b_i.exp){
		b_i.frac = b_i.frac << (b_i.exp - a_i.exp);
		b_i.exp = a_i.exp;
	}
	else{
		a_i.frac = a_i.frac << (a_i.exp - b_i.exp);
		a_i.exp = b_i.exp;
	}
	
	s_i.sign = a_i.sign;  //printf("%d     %lf\n",s_i.sign, pow(-1,s_i.sign));
	s_i.exp = a_i.exp;    //printf("%d\n",s_i.exp);

	if(a_i.sign == b_i.sign){
		s_i.frac = a_i.frac + b_i.frac;  //printf("%d\n",s_i.frac);
	}
	else{
		s_i.frac = a_i.frac - b_i.frac;  //printf("%d\n",s_i.frac);
	}

	return pow(-1,s_i.sign) * (pow(2,s_i.exp)) * s_i.frac;
}
