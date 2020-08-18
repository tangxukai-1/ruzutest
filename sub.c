#include "sub.h"
#include "add.h"

float sub(float a, float b)
{
	if(b >= 0){
		return add(a, -b);
	}
	else{
		return add(a, b);
	}
}
