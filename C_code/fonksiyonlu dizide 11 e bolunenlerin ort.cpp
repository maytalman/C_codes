#include<stdio.h>
#define k 5
	float obul(int sayilar[],int boyut){
		int toplam=0,kanak=0;
		float ortalama;
		for(int i=0;i<k;i++){
			if(sayilar[i]%11==0){
				toplam+=sayilar[i];
				kanak++;
			}
		}
		ortalama=(float)(toplam/kanak);
		return ortalama;
	}
	int main(){
		int dizi[k];
		for(int i=0;i<k;i++){
			printf("\n\tsayi girin: ");scanf("%d",&dizi[i]);
		}
		printf("\n\t girilen sayilarin icinde 11 e bolunen sayilarin ortalamasi: %2.5f",obul(dizi,k));
	}
