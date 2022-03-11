#include<stdio.h>
#include<conio.h>
	int toplam(int y){
		int sonuc;
		if(y<=1)
		sonuc=1;
		else
			sonuc=y+toplam(y-1);
			return sonuc;
	}
	int main(){
		int sayi;
		printf("\n\t sayi girin: ");scanf("%d",&sayi);
		printf("\n\t girdiginiz sayiya kadar olan P.T.S toplami=%d ",toplam(sayi));
	}
