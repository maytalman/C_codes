#include<stdio.h>
#include<conio.h>
	int basamaklar_t(int sayi){
		int basamak1,basamak2,basamak3,basamak4,ara1,ara2,toplam;
		basamak1=sayi/1000;
		basamak4=sayi%10;
		ara1=sayi%100;
		basamak3=ara1/10;
		ara2=sayi-(basamak1*1000+ara1);
		basamak2=ara2/100;
		toplam=basamak1+basamak2+basamak3+basamak4;
		return toplam;
	}
	int main(){
		int a;
		printf("\n\t4 basamakli bir sayi giriniz -->");scanf("%d",&a);
		printf("\n\tBasamaklar toplami = %d  ",basamaklar_t(a));
	}
	
