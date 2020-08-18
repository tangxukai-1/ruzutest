#include "add.h"
#include "sub.h"

float add(float a, float b);
float sub(float a, float b);

int main(int argc, char *argv[])
{
	float x,y,z;
	char tp;
	printf("Please enter formula like 'a + b':");

	while(scanf("%f %c %f", &x, &tp, &y) == 3){

//		printf("%f %c %f ",x,tp,y);




		if(tp == '+'){
			z = add(x, y);
			printf("Result: %f\n",z);
			continue;
		}
		else if(tp == '-'){
			z = sub(x, y);
			printf("Result: %f\n",z);
			continue;
		}
		else{
			printf("Can't recognize! Exit!\n");
			break;
		}
	}

	printf("Thank you !\n");

	return 0;
}
