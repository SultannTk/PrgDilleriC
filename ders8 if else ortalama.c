#include <stdio.h>
#include <stdlib.h>


int main() {
	
	printf("ogrenci ortalama hesap bigi sistemi  ");
	printf("\n\n");
	
	int s1,s2,ort;
	
	printf("1.sinav notunuzu giriniz: ");
	scanf("%d",&s1);
	printf("2.sinav notunuzu giriniz");
	scanf("%d",&s2);
	
	ort=(s1+s2)/2;
	
	printf("ortalamaniz: %d\n",ort);
	
	if (ort>=50)
	{
		printf("tebrikler gectiniz:)");
	}
	else
	{
		printf("maalesef kaldiniz:(");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
