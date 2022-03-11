#include<stdio.h>
#include<conio.h>
	int main(){
		int sayi,kalan[10],basamak=0,i=0,taban;
	printf("\n\t ondalik tabanda bir sayi giriniz : ");scanf("%d",&sayi);
	printf("\n\t hangi tabandaki karsiligini istiyorsunuz?(2/3/4/5/6/7/8)-->");scanf("%d",&taban);
		do{
			kalan[i]=sayi%taban;
			sayi=sayi/taban;
			basamak++;
			i++;
		}while(sayi!=0);
		printf("\n\t sayinizin %d tabanindaki karsiligi--> ",taban);
		for(int i=basamak-1;i>=0;i--){
			printf("%d",kalan[i]);
	}
		
	}
