#include <stdio.h>
#include <math.h>

float kurenin_hacmi(float r);

int main() 
	{
		float r;
		printf("kurenin yaricapini girin: ");
		scanf("%f",&r);
		
		float hacim=kurenin_hacmi(r);
		printf("yaricapi %.2f olan kurenin hacmi : %.2f\n",r,hacim);
		 	
	
	return 0;
}
	float kurenin_hacmi(float r)
	{
		return 4.0/3.0*M_PI*r*r*r;
	}
