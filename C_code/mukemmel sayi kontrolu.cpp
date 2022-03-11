#include<stdio.h>
#include<conio.h>
	int main(){
		int sayi,toplam=0;
		printf("sayi giriniz:");scanf("%d",&sayi);
		for(int i=1;i<sayi;i++){
			if(sayi%i==0){
				toplam+=i;
			}
		}
		if(sayi==toplam){
			printf("\n mukemmel sayi");
		}
		else
		printf("mukemmel sayi degil.");
	}
