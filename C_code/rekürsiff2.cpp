#include<stdio.h>
	int asal(int x,int y){
		if(y==1) return 1;
		if(x<2)  return 0;
		if(x%y==0) return 0;
		else
		return asal(x,y-1);
	}
	int main(){
		int sayi,sonuc;
		printf("sayi girin : ");scanf("%d",&sayi);
		sonuc=asal(sayi,sayi-1);
		if(sonuc==1)
			printf("asal");
		else
			printf("degil");
	}
