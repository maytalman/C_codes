#include<stdio.h>
#include<conio.h>
#include<math.h>
	int main(){
		int x,y;
		float turev;
		printf("taban ve us giriniz: ");scanf("%d%d",&x,&y);
		float fonksiyon=(float)pow(x,y);
		printf("\nfonksiyonun degeri: %.2f",fonksiyon);
		turev=y*pow(x,y-1);
		printf("\nfonksiyonun turevinin degeri = %.2f",turev);
		float kok=(float)sqrt(x);
		printf("\n koku: %.2f",kok);
	}
