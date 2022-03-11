#include<stdio.h>
	struct ders{
		int ders_kod,vize,final;
		float gecme_n[2];
	}dersler[2];
	struct ogrenci{
		char kim[50];
		int numara;
		struct ders dersler[2];
	}ogr[2];
	int main(){
		for(int i=0;i<2;i++){
			printf("ogrencinin adi ve soyadi: ");gets(ogr[i].kim);
			printf("ogrencinin numarasi     : ");scanf("%d",&ogr[i].numara);
			for(int j=0;j<2;j++){
				printf("%d.dersin kodu : ",j+1);scanf("%d",&ogr[j].dersler[j].ders_kod);
				printf("%d.dersin vize notu:  ",j+1);scanf("%d",&ogr[j].dersler[j].vize);
				printf("%d.dersin final notu: ",j+1);scanf("%d",&ogr[j].dersler[j].final);
				ogr[j].dersler[j].gecme_n[j]=(float)(ogr[j].dersler[j].vize*0.4)+(ogr[j].dersler[j].final*0.6);
			}
			printf("\n-----------------------------------------------------------------\n");
			printf("%s'nin %d.dersininin gecme notu= %2.2f ",ogr[i].kim,i+1,ogr[i].dersler[i].gecme_n[i]);
		}
	}
