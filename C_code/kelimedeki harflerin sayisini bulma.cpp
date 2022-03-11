#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
	int main(){
		char sozcuk[20],c;
		do{
			system("CLS");
		printf("\n\tSozcugunuzu giriniz:  ");gets(sozcuk);
		for(int k=0;sozcuk[k]!='\0';k++){
		printf("\n\t\t%d",sozcuk[k]);
	}
		printf("\n\tTekrar etmek ister misiniz? E/H");c=getch();
		}
		while(c=='e'||c=='E');
			if(c=='h'||c=='H'){
				system("CLS");
					printf("\n\t program sonlandi");
			}
	}
