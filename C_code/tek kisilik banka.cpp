#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
	int main(){
		setlocale(LC_ALL,"Turkish");
		char d,x;
		int hesap=5000,istenen,kbakiye,sifre=10011,sifre1;
		do{
			system("CLS");
			printf("\n HO�GELD�N�Z,��LEMLER�N�Z ���N �NCEL�KLE ��FREN�Z� G�R�N�Z:  ");scanf("%d",&sifre1);
			if(sifre!=sifre1)
			printf("\n\t ��FRE YANLI� L�TFEN DO�RU ��FREY� G�R�N. ");
			else if(sifre==sifre1){
			printf("\n\tHO�GELD�N�Z BAY KEMAL,�STED���N�Z M�KTARI G�R�N�Z: ");scanf("%d",&istenen);
				if(istenen<=hesap){
				printf("\n\tPARANIZI A�A�IDAK� B�LMEDEN ALAB�L�RS�N�Z.");
				printf("\n\tKALAN BAK�YE B�LG�S� ���N EVET ANLAMINDA E TU�UNA �IKI� ���N D TU�UNA BASINIZ.");d=getch();
				if(d=='E'||d=='e'){
					printf("\n\tHESABINIZDA KALAN BAK�YE %d TL",hesap-istenen);
				}
				if(d=='d'||d=='D')
				printf("\n\t\t ��LEM�N�Z�N B�T��� SA�LANMI�TIR.");
		}
				if(istenen>hesap){
					printf("\n\t �STED���N�Z M�KTAR HESABINIZDA BULUNMAMAKTADIR HESABINIZDA BULUNAN M�KTAR %d TL",hesap);
				
		} 
		
	
	printf("\n\t\t�IKI� YAPMAK ���N �IKI� ANLAMINDA C TU�UNA ��LEM TEKRARI ���N T TU�UNA BASINIZ.");x=getch();
	if(x=='C'||x=='c')
	printf("\n\t\t HESABINIZDAN BA�ARIYLA �IKI� YAPILMI�TIR �Y� G�NLER D�LER�Z...");
}
	hesap=hesap-istenen;
}	while(x=='t'||x=='T');
	}
		
		
	
