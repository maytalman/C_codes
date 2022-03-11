#include<stdio.h>
#include<conio.h>
	int main(){
		int sayac=0,enbuyuksayi;
		printf("[0,200) araliginda 2,3,4 ve 5 sayilarina kalansýz bolunenler:");
		for(int i=0;i<200;i++){
			if((i%5==0)&&(i%3==0)&&(i%2==0)&&(i%4==0)){
			printf(" %d \n",i);
			enbuyuksayi=i;
			sayac++;                   
			if(i==0) { printf(" "); sayac=0;}
		}
		}
		printf("adet:%d",sayac);
		printf("\nen buyuk sayi:%d",enbuyuksayi);
	}
