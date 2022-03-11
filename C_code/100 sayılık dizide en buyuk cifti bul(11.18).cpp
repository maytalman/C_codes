#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
	int main(){
		int i,dizi[100],adet=0,buyuk=0;
		srand(time(NULL));
		for(i=0;i<100;i++){
			dizi[i]=rand()%100;
			printf("%d  ",dizi[i]);
		}
		for(i=0;i<100;i++){
			if(dizi[i]%2==0){
				if(buyuk<dizi[i])
				buyuk=dizi[i];
			}
			if(buyuk==dizi[i])
			adet++;
		}
		printf("\n en buyuk cift sayi %d'dir ve %d kez tekrar etmistir.",buyuk,adet);
	}

