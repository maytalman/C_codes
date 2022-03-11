#include<stdio.h>
#include<conio.h>
	int main(){
		int sayi,i,j=0,bolenler[100],bolmeyenler[100];
		printf("sayi giriniz:",sayi);
		scanf("%d",&sayi);
		for(i=2;i<sayi;i++){
			if(sayi%i==0){
				printf("\n tam bolen=%d",i);
				j++;
			}
		}
			if(j==0){
				printf("\n tam bolen yok...");
			
	}
}
