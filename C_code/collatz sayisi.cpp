#include<stdio.h>
#include<conio.h>
	int main(){
		int sonuc,sayi;
		printf("sayi giriniz:");scanf("%d",&sayi);
		while(sonuc==1)
		
			if(sayi%2==0){
			sonuc=sayi/2;
			printf("%d",sonuc);
		    }
			else
			{
			sonuc=(sayi*3)+1;
			printf("%d",sonuc);
		    }
			if(sayi==1)
		    {
			printf("program sonlandý.1'den farklý bir sayi girin...");
			
			}
		if(sonuc==1)
		printf("bitti");
	}
	
	//VOÝD BÝLMÝYORUM DÖNMEDÝ
