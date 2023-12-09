#include <stdio.h>
#include <stdlib.h>

float celsius_to_fahrenheit(float t)
{
	return t*9/5 + 32;
}

float celsius_to_kelvin(float t)
{
	return t + 273.15;

}

int main()
 {
 	float t_c,t_f,t_k;
 	printf("hava sicakligini celcius cinsinden giriniz: ");
 	scanf("%f",&t_c);
 	
 	t_f= celsius_to_fahrenheit(t_c);
 	t_k= celsius_to_kelvin(t_c);
 	
 	printf("sicaklik %.2fC, %.2fF, %.2fK.\n",t_c,t_f,t_k);
 	
 	if(t_f>100){
 		printf("bugun hava cok sicak! Dikkatli olun!\n");
	 }
	return 0;
}
