#include <stdio.h>
#include <stdlib.h>
#include "add.h"
#include "sub.h"

float add(float a, float b);
float sub(float a, float b);

int main(int argc, char *argv[])
{
	float x,y,z;
	
	if(argc == 3){
		y = atof(argv[1]);
		z = atof(argv[2]);
		x = add(y, z);
		printf("%f\n",x);
	}
	else{
		printf("!");
		return 1;
	}
	return 0;
}
