#include<stdio.h>
	struct dersbilgi{
		int derskod,vize,final;
		float gecme_notu;
	}ders[5];
	struct ogrenci{
		char kim[50];
		int numara;
	}ogr[5];
	int main(){
		for(int i=0;i<5;i++){
			printf("adiniz ve soyadiniz: ");gets(ogr[i].kim);
			printf("\n\tokul numaranizi girin: ");scanf("%d",&ogr[i].numara);
			for(int j=0;j<5;j++){
			printf("\n\t%d.dersin kodu: ",j+1);scanf("%d",&ders[i].derskod);
			printf("\n\t%d.dersin vize notu: ",j+1);scanf("%d",&ders[i].vize);
			printf("\n\t%d.dersin final notu: ",j+1);scanf("%d",&ders[i].final);
			printf(">>>>%d kodlu dersin gecme notu=%2.2f ",ders[i].derskod,ders[i].gecme_notu=(float)(ders[i].vize*0.4)+(ders[i].final*0.6));
	}
		}
	}
