#include<stdio.h>
#include<conio.h>
#include<math.h>
	int main(){
		int vize[10],toplam=0;
		float aritmetik_o,fark_k,k_toplam=0,sonuc,standartsapma;
		for(int i=0;i<10;i++){
			printf("\n\t %d. ogrencinin vize notu : ",i+1);scanf("%d",&vize[i]);
			toplam+=vize[i];
		}
		aritmetik_o=(float)toplam/10;
		for(int i=0;i<10;i++){
			fark_k=pow(vize[i]-aritmetik_o,2);
			k_toplam+=fark_k;
				}
				sonuc=(float)k_toplam/9;
				standartsapma=sqrt(sonuc);
		printf("\n\t standart sapma = %2.2f",standartsapma);
	}
	//standart sapma sýfýra ne kadar yakýnsa grup verilerinin arasýndaki fark o kadar azalýr.
