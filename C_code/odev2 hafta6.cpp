#include<stdio.h>
	struct ders{
		int ders_kod,vize,final;
		float gecme_n;
	}dersler[5];
	struct ogrenci{
		char ad[20],soyad[20];
		int numara;
		struct ders dersler[5];
	}ogr[5];
	int main(){
		for(int i=0;i<5;i++){
			printf("%d.ogrencinin adi: ",i+1);scanf("%s",ogr[i].ad);
			printf("%d.ogrencinin soyadi: ",i+1);scanf("%s",ogr[i].soyad);
			printf("ogrencinin numarasi     : ");scanf("%s",&ogr[i].numara);
			for(int j=0;j<5;j++){
				printf("%d.dersin kodu : ",j+1);scanf("%d",&ogr[i].dersler[j].ders_kod);
				printf("%d.dersin vize notu:  ",j+1);scanf("%d",&ogr[i].dersler[j].vize);
				printf("%d.dersin final notu: ",j+1);scanf("%d",&ogr[i].dersler[j].final);
			}
		}
		for(int i=0;i<5;i++){
			printf("\n\t%d-Ad Soyad :\t\t %s %s",i+1,ogr[i].ad,ogr[i].soyad);
			printf("\n\t%d-Numara: \t\t %d",i+1,ogr[i].numara);
			for(int j=0;j<5;j++){
			printf("\n\t%d.dersin kodu: \t\t %d",j+1,ogr[i].dersler[j].ders_kod);
			printf("\n\t%d.dersin gecme notu:\t%2.2f",j+1,ogr[i].dersler[j].gecme_n=(float)(ogr[i].dersler[j].vize*0.4)+(ogr[i].dersler[j].final*0.6));
	}
			printf("\n---------------------------------------------------------------------------------------\n");
		}
	}
