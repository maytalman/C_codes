#include<stdio.h>
#include<conio.h>
	void kontrol(int sayi){
		int adet=0;
		for(int i=2;i<sayi;i++){
			if(sayi%i==0)
			adet++;
		}
		if(adet==0){
			printf("\n\tSayi asaldir.");
		}
		else
		printf("\n\tSayi asal degildir.");
	}
	int main(){
		int sayi;
		printf("\n\tSayi giriniz:");scanf("%d",&sayi);
		kontrol(sayi);
		
		
		
	}
	
