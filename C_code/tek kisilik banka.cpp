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
			printf("\n HOﬁGELD›N›Z,›ﬁLEMLER›N›Z ›«›N ÷NCEL›KLE ﬁ›FREN›Z› G›R›N›Z:  ");scanf("%d",&sifre1);
			if(sifre!=sifre1)
			printf("\n\t ﬁ›FRE YANLIﬁ L‹TFEN DO–RU ﬁ›FREY› G›R›N. ");
			else if(sifre==sifre1){
			printf("\n\tHOﬁGELD›N›Z BAY KEMAL,›STED›–›N›Z M›KTARI G›R›N›Z: ");scanf("%d",&istenen);
				if(istenen<=hesap){
				printf("\n\tPARANIZI AﬁA–IDAK› B÷LMEDEN ALAB›L›RS›N›Z.");
				printf("\n\tKALAN BAK›YE B›LG›S› ›«›N EVET ANLAMINDA E TUﬁUNA «IKIﬁ ›«›N D TUﬁUNA BASINIZ.");d=getch();
				if(d=='E'||d=='e'){
					printf("\n\tHESABINIZDA KALAN BAK›YE %d TL",hesap-istenen);
				}
				if(d=='d'||d=='D')
				printf("\n\t\t ›ﬁLEM›N›Z›N B›T›ﬁ› SA–LANMIﬁTIR.");
		}
				if(istenen>hesap){
					printf("\n\t ›STED›–›N›Z M›KTAR HESABINIZDA BULUNMAMAKTADIR HESABINIZDA BULUNAN M›KTAR %d TL",hesap);
				
		} 
		
	
	printf("\n\t\t«IKIﬁ YAPMAK ›«›N «IKIﬁ ANLAMINDA C TUﬁUNA ›ﬁLEM TEKRARI ›«›N T TUﬁUNA BASINIZ.");x=getch();
	if(x=='C'||x=='c')
	printf("\n\t\t HESABINIZDAN BAﬁARIYLA «IKIﬁ YAPILMIﬁTIR ›Y› G‹NLER D›LER›Z...");
}
	hesap=hesap-istenen;
}	while(x=='t'||x=='T');
	}
		
		
	
