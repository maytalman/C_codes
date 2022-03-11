#include<stdio.h>
	struct rehber{
		char ad[20],soyad[20];
		int numara;
	}dizgim[2];
	int main(){
		int secim;
		for(int i=0;i<2;i++){
			printf("%d-ad: ",i+1);scanf("%s",dizgim[i].ad);
			printf("%d-soyad: ",i+1);scanf("%s",dizgim[i].soyad);
			printf("%d-numara: ",i+1);scanf("%d",&dizgim[i].numara);
		}
		printf("rehberdeki kacinci bireyi ogrenmek istiyorsunuz?(1-2) ");scanf("%d",&secim);
		switch(secim)
		{
			case 1:printf("\n1-ad soyad : %s %s ",dizgim[0].ad,dizgim[0].soyad);
				   printf("\n1-numara   : %d ",dizgim[0].numara);break;
			case 2:printf("\n2-ad soyad : %s %s",dizgim[1].ad,dizgim[1].soyad);
				   printf("\n2-numara   : %d ",dizgim[1].numara);break;
			default:printf("\n yanlis numara girdiniz 1 ile 2 arasinda giriniz.");break;
		}
		
		
	}
