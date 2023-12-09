#include <stdio.h>
#include <stdlib.h>


int main() {
	int dizi1[3][4]={{3,6,1,4},{1,3,2,4},{7,5,0,3}};
	int dizi2[3][4]={{3,1,3,2},{6,3,3,1},{7,3,0,5}};
	int i,j;
	int toplam[i][j];
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			toplam[i][j]= dizi1[i][j]+dizi2[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%4d",toplam[i][j]);
		}
		printf("\n");
	}	
	return 0;
}


