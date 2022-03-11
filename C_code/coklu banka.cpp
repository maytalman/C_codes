#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
	struct hesaplar{
		int sifre,hesap;
		char kim[25];
		}b[5]={{3456,5000,"Turan Maytalman"},{9663,500,"Ebru Maytalman"},{1001,8500,"Rýza Nur"},{1233,1000,"Evren Gur"},{1554,60000,"baturalp demir"}};
		int main(){	
		setlocale(LC_ALL,"Turkish");
			char x,w,y,d,z;
			int sifre1,istenen,tercih;
		do{
			printf("\n\tHOÞGELDÝNÝZ LÜTFEN 4 HANELÝ HESAP ÞÝFRENÝZÝ GÝRÝN:  ");scanf("%d",&sifre1);
if(sifre1==b[0].sifre){
		do{
			system("CLS");

				printf("\n\t[1]--> PARA ÇEKME\n\t[2]-->PARA YATIRMA");
				printf("\n\t HOÞGELDÝNÝZ %s...\n\t YAPMAK ÝSTEDÝÐÝNÝZ ÝÞLEMÝN NUMARASINI GÝRÝNÝZ: ",b[0].kim);scanf("%d",&tercih);
				switch(tercih){
					case 1:do{
					system("CLS");
					printf("\n\t ÝSTEDÝÐÝNÝZ MÝKTARI GÝRÝNÝZ: ");scanf("%d",&istenen);
					if(istenen<=b[0].hesap){
						printf("\n\t PARANIZI BÖLMEDEN ALINIZ.\n\tKalan bakiyenizi ogrenmek icin e tuþuna cikis icin h tusuna basiniz.");w=getch();
						if(w=='e'||w=='E')
						printf("\n\tHesabinizda kalan %d TL",b[0].hesap=b[0].hesap-istenen);
						else if(w=='h'||w=='H')
						printf("\n\tisleminiz sonlandi.");
					}	
					else{		
						printf("\n\t istenen miktar hesabinizda bulunmamaktadir.Hesabinizda bulunan miktar %d TL\n\t cýkýs yapmak icin c tusuna tekrar islem icin t tusuna basiniz.",b[0].hesap);
						x=getch();
					}
			
					}while(x=='t'||x=='T');
					if(x=='c'||x=='C')
					printf("\n\tislem sonlandi.");
					break;
					case 2:printf("\n\t yatirmak istediginiz miktari girin: ");scanf("%d",&istenen);
					printf("\n\t yatirmak istediginiz miktari sag alta gosterilen sekilde koyun...\n\tyatirmak istediginiz miktar %d TL onaylamak icin e tusuna cikis icin h tusuna basin.",istenen);
					y=getch();
					if(y=='e'||y=='E')
					printf("\n\t islem onaylandi.Hesabinizdaki yeni miktar %d TL",b[0].hesap=b[0].hesap+istenen);
					else
					printf("\n\tisleminiz iptal edildi.");
					break;
				}
				printf("\n\t tekrar etmek icin e tusuna cikis icin h tusuna basiniz.");d=getch();
				}while(d=='e'||d=='E');
				if(d=='h'||d=='H')
				printf("\n\t islemleriniz bitti ve hesabiniz kapatildi %s iyi gunler dileriz...",b[0].kim);
			}
if(sifre1==b[1].sifre){
				do{
			system("CLS");

				printf("\n\t[1]--> PARA CEKME\n\t[2]-->PARA YATIRMA");
				printf("\n\t hosgeldiniz %s...\n\t Yapmak istediginiz islemi seciniz: ",b[1].kim);scanf("%d",&tercih);
				switch(tercih){
					case 1:do{
					system("CLS");
					printf("\n\t istediginiz miktarý giriniz: ");scanf("%d",&istenen);
					if(istenen<=b[1].hesap){
						printf("\n\t paranizi bolmeden aliniz.\n\tKalan bakiyenizi ogrenmek icin e tuþuna cikis icin h tusuna basiniz.");w=getch();
						if(w=='e'||w=='E')
						printf("\n\tHesabinizda kalan %d TL",b[1].hesap=b[1].hesap-istenen);
						else if(w=='h'||w=='H')
						printf("\n\tisleminiz sonlandi.");
					}	
					else{		
						printf("\n\t istenen miktar hesabinizda bulunmamaktadir.Hesabinizda bulunan miktar %d TL\n\t cýkýs yapmak icin c tusuna tekrar islem icin t tusuna basiniz.",b[1].hesap);
						x=getch();
					}
			
					}while(x=='t'||x=='T');
					if(x=='c'||x=='C')
					printf("\n\tislem sonlandi.");
					break;
					case 2:printf("\n\t yatirmak istediginiz miktari girin: ");scanf("%d",&istenen);
					printf("\n\t yatirmak istediginiz miktari sag alta gosterilen sekilde koyun...\n\tyatirmak istediginiz miktar %d TL onaylamak icin e tusuna cikis icin h tusuna basin.",istenen);
					y=getch();
					if(y=='e'||y=='E')
					printf("\n\t islem onaylandi.Hesabinizdaki yeni miktar %d TL",b[1].hesap=b[1].hesap+istenen);
					else
					printf("\n\tisleminiz iptal edildi.");
					break;
				}
				printf("\n\t tekrar etmek icin e tusuna cikis icin h tusuna basiniz.");d=getch();
				}while(d=='e'||d=='E');
				if(d=='h'||d=='H')
				printf("\n\t islemleriniz bitti ve hesabiniz kapatildi %s iyi gunler dileriz...",b[1].kim);
		}
if(sifre1==b[2].sifre){
					do{
			system("CLS");

				printf("\n\t[1]--> PARA CEKME\n\t[2]-->PARA YATIRMA");
				printf("\n\t hosgeldiniz %s...\n\t Yapmak istediginiz islemi seciniz: ",b[2].kim);scanf("%d",&tercih);
				switch(tercih){
					case 1:do{
					system("CLS");
					printf("\n\t istediginiz miktarý giriniz: ");scanf("%d",&istenen);
					if(istenen<=b[2].hesap){
						printf("\n\t paranizi bolmeden aliniz.\n\tKalan bakiyenizi ogrenmek icin e tuþuna cikis icin h tusuna basiniz.");w=getch();
						if(w=='e'||w=='E')
						printf("\n\tHesabinizda kalan %d TL",b[2].hesap=b[2].hesap-istenen);
						else if(w=='h'||w=='H')
						printf("\n\tisleminiz sonlandi.");
					}	
					else{		
						printf("\n\t istenen miktar hesabinizda bulunmamaktadir.Hesabinizda bulunan miktar %d TL\n\t cýkýs yapmak icin c tusuna tekrar islem icin t tusuna basiniz.",b[2].hesap);
						x=getch();
					}
			
					}while(x=='t'||x=='T');
					if(x=='c'||x=='C')
					printf("\n\tislem sonlandi.");
					break;
					case 2:printf("\n\t yatirmak istediginiz miktari girin: ");scanf("%d",&istenen);
					printf("\n\t yatirmak istediginiz miktari sag alta gosterilen sekilde koyun...\n\tyatirmak istediginiz miktar %d TL onaylamak icin e tusuna cikis icin h tusuna basin.",istenen);
					y=getch();
					if(y=='e'||y=='E')
					printf("\n\t islem onaylandi.Hesabinizdaki yeni miktar %d TL",b[2].hesap=b[2].hesap+istenen);
					else
					printf("\n\tisleminiz iptal edildi.");
					break;
				}
				printf("\n\t tekrar etmek icin e tusuna cikis icin h tusuna basiniz.");d=getch();
				}while(d=='e'||d=='E');
				if(d=='h'||d=='H')
				printf("\n\t islemleriniz bitti ve hesabiniz kapatildi %s iyi gunler dileriz...",b[2].kim);
	}
if(sifre1==b[3].sifre){
		do{
			system("CLS");

				printf("\n\t[1]--> PARA CEKME\n\t[2]-->PARA YATIRMA");
				printf("\n\t hosgeldiniz %s...\n\t Yapmak istediginiz islemi seciniz: ",b[3].kim);scanf("%d",&tercih);
				switch(tercih){
					case 1:do{
					system("CLS");
					printf("\n\t istediginiz miktarý giriniz: ");scanf("%d",&istenen);
					if(istenen<=b[3].hesap){
						printf("\n\t paranizi bolmeden aliniz.\n\tKalan bakiyenizi ogrenmek icin e tuþuna cikis icin h tusuna basiniz.");w=getch();
						if(w=='e'||w=='E')
						printf("\n\tHesabinizda kalan %d TL",b[3].hesap=b[3].hesap-istenen);
						else if(w=='h'||w=='H')
						printf("\n\tisleminiz sonlandi.");
					}	
					else{		
						printf("\n\t istenen miktar hesabinizda bulunmamaktadir.Hesabinizda bulunan miktar %d TL\n\t cýkýs yapmak icin c tusuna tekrar islem icin t tusuna basiniz.",b[3].hesap);
						x=getch();
					}
			
					}while(x=='t'||x=='T');
					if(x=='c'||x=='C')
					printf("\n\tislem sonlandi.");
					break;
					case 2:printf("\n\t yatirmak istediginiz miktari girin: ");scanf("%d",&istenen);
					printf("\n\t yatirmak istediginiz miktari sag alta gosterilen sekilde koyun...\n\tyatirmak istediginiz miktar %d TL onaylamak icin e tusuna cikis icin h tusuna basin.",istenen);
					y=getch();
					if(y=='e'||y=='E')
					printf("\n\t islem onaylandi.Hesabinizdaki yeni miktar %d TL",b[3].hesap=b[3].hesap+istenen);
					else
					printf("\n\tisleminiz iptal edildi.");
					break;
				}
				printf("\n\t tekrar etmek icin e tusuna cikis icin h tusuna basiniz.");d=getch();
				}while(d=='e'||d=='E');
				if(d=='h'||d=='H')
				printf("\n\t islemleriniz bitti ve hesabiniz kapatildi %s iyi gunler dileriz...",b[3].kim);
		
}
if(sifre1==b[4].sifre){
		do{
			system("CLS");

				printf("\n\t[1]--> PARA CEKME\n\t[2]-->PARA YATIRMA");
				printf("\n\t hosgeldiniz %s...\n\t Yapmak istediginiz islemi seciniz: ",b[4].kim);scanf("%d",&tercih);
				switch(tercih){
					case 1:do{
					system("CLS");
					printf("\n\t istediginiz miktarý giriniz: ");scanf("%d",&istenen);
					if(istenen<=b[4].hesap){
						printf("\n\t paranizi bolmeden aliniz.\n\tKalan bakiyenizi ogrenmek icin e tuþuna cikis icin h tusuna basiniz.");w=getch();
						if(w=='e'||w=='E')
						printf("\n\tHesabinizda kalan %d TL",b[4].hesap=b[4].hesap-istenen);
						else if(w=='h'||w=='H')
						printf("\n\tisleminiz sonlandi.");
					}	
					else{		
						printf("\n\t istenen miktar hesabinizda bulunmamaktadir.Hesabinizda bulunan miktar %d TL\n\t cýkýs yapmak icin c tusuna tekrar islem icin t tusuna basiniz.",b[4].hesap);
						x=getch();
					}
			
					}while(x=='t'||x=='T');
					if(x=='c'||x=='C')
					printf("\n\tislem sonlandi.");
					break;
					case 2:printf("\n\t yatirmak istediginiz miktari girin: ");scanf("%d",&istenen);
					printf("\n\t yatirmak istediginiz miktari sag alta gosterilen sekilde koyun...\n\tyatirmak istediginiz miktar %d TL onaylamak icin e tusuna cikis icin h tusuna basin.",istenen);
					y=getch();
					if(y=='e'||y=='E')
					printf("\n\t islem onaylandi.Hesabinizdaki yeni miktar %d TL",b[4].hesap=b[4].hesap+istenen);
					else
					printf("\n\tisleminiz iptal edildi.");
					break;
				}
				printf("\n\t tekrar etmek icin e tusuna cikis icin h tusuna basiniz.");d=getch();
				}while(d=='e'||d=='E');
				if(d=='h'||d=='H')
				printf("\n\t islemleriniz bitti ve hesabiniz kapatildi %s iyi gunler dileriz...",b[4].kim);
		
}
	else 
	printf("\n\tGÝRDÝÐÝNÝZ ÞÝFRE YANLIÞ LÜTFEN TEKRAR DENEMEK ÝÇÝN E TUÞUNA BASINIZ.");z=getch();
}while(z=='e'||z=='E');
	if(z!='E'||z!='e') printf("\n\t ÝYÝ GÜNLER DÝLERÝZ...");
/*	for(int i=0;i<5;i++){
		printf("\n sifre= %d\n hesaptaki miktar=%d\n ad soyad=%s",b[i].sifre,b[i].hesap,b[i].kim);
	}	
*/			
			
			
}
