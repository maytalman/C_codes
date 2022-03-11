#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
	int main(){
	char c;
	int x,tahmin,sayac=0;

		do{
		srand(time(NULL));
		x=rand()%100;
		system("CLS");
		do
		{
		printf("\n tahmininiz:");
		scanf("%d",&tahmin);
		sayac++;
		if(x>tahmin){
		printf("daha buyuk bir sayi girin...");
		}
		else if(x<tahmin){
		printf("daha kucuk bir sayi girin...");
		}
		else{
		printf(">>>>>>>>TEBRÝKLER %d.tahminde buldunuz<<<<<<<<<",sayac);
	}
		}while(tahmin!=x);
		printf("\n\t Tekrar etmek ister misiniz? E/H ");c=getch();
	}
		while(c=='e'||c=='E');	
	}


