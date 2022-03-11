#include<stdio.h>
#include<conio.h>
	int sayiyakadaryaz(int x){
		if(x==0){
		printf("\n 0");
		return 0;		
	}
		else{
			printf("\n %d",x);
			return sayiyakadaryaz(x-1);
		}
	}
	int main(){
		int sayi;
		printf("\t sayi girin:");scanf("%d",&sayi);
		sayiyakadaryaz(sayi);
	}
