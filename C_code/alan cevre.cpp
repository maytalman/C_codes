#include<stdio.h>
#include<conio.h>
main(){
	int taban,yukseklik,kenar,cevre;
	float alan;
	printf("taban,yukseklik ve kenar icin deger girin...");
	scanf("%d%d%d",&taban,&yukseklik,&kenar);
	printf("alan=%f ",(taban*yukseklik)/2.0);
	printf("cevre=%d",taban+yukseklik+kenar);
	
}
