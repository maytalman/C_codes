#include<stdio.h>
#include<conio.h>
	int main(){
		int dizi[10]={8,5,2,6,7,9,3,4,0,1},min,gecici;
		for(int i=0;i<10;i++){
			min=i;
			for(int j=i+1;j<10;j++){
				if(dizi[j]<dizi[min]){
				min=j;
			}
			}
			gecici=dizi[i];
			dizi[i]=dizi[min];
			dizi[min]=gecici;
		}
		for(int i=0;i<10;i++){
			printf("%d  ",dizi[i]);
		}
		
	} 
	/*
burada yapýlan basta dizinin 0.indisine minimum deyip onu dizideki diðer elemanlarla karþýlaþtýrmak.ki 0. indis elemanýndan
daha küçüðünü bulursa minimuma atýyor.Yani baþta en küçüðü seçip daha sonra kalanlarýn içinden küçüðünü kalanlarýn içinden küçüðünü seçerek sýralamýþ oluyor.	
	*/
