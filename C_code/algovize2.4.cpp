#include<stdio.h>
#include<conio.h>
	int asalmi(int n,int i){
		if(n<2)
			return 1;
		if(i==1)
			return 0;	
		if(n%i==0) 
			return 1;
			return asalmi(n,i-1);
}
	int main(){
		int sonuc,sayi;
		printf("\t sayi girin: ");scanf("%d",&sayi);
		sonuc=asalmi(sayi,sayi/2);
		if(sonuc==0)
			printf("\n asal");
		else
			printf("\n degil");
	}
