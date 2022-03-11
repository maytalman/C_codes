#include<stdio.h>
#include<conio.h>
#include<math.h>
	int main(){
		int sayi,basamak1,basamak2,basamak3,aradeger,kup;
		printf("3 basamaklı sayi girin:"); scanf("%d",&sayi);
		basamak1=sayi/100;
		printf("yuzler basamagi: %d\n",basamak1);
		basamak3=sayi%10;
		printf("birler basamagi: %d\n",basamak3);
		aradeger=sayi-(basamak1*100+basamak3);
		basamak2=aradeger/10;
		printf("onlar basamagi:%d\n",basamak2);
		kup=basamak1*basamak1*basamak1+basamak2*basamak2*basamak2+basamak3*basamak3*basamak3;
		if(kup==sayi){
			printf("\n sayiniz armstrong sayidir...");
		}
		else
		printf("\n sayi armstrong sayi degildir...");
		
	}
