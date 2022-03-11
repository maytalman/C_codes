#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct dugum{
		int num;
		char ad[10],soyad[10];
		struct dugum *sonraki;
	};
	typedef dugum node;
	node *ilk=NULL,*gecici=NULL,*gezen=NULL;

		void yazdir(){//Listeleyi yazan fonksiyon
			gezen=ilk;
			while(gezen->sonraki!=NULL){
				printf("%d %s %s\n",gezen->num,gezen->ad,gezen->soyad);
				gezen=gezen->sonraki;
			}
			printf("%d %s %s\n",gezen->num,gezen->ad,gezen->soyad);
		}
		int Uzunluk(node *ilk){//listenin ka� elemanl� oldu�unu bulan fonksiyon
			int count=0;
			gezen=ilk;
				while(gezen->sonraki!=NULL){
					gezen=gezen->sonraki;
					count++;
				}
			return count+1;
	}
		int AraBul(node *ilk,int bul){//Kullan�c�n�n girdi�i say�n�n listede olup olmad���n� kontrol eden fonksiyon
			int step=1,flag=0;
			gezen=ilk;
				while(gezen!=NULL){
					if(gezen->num==bul){
						flag=1;
						break;
					} 
					step++;
					gezen=gezen->sonraki;
				}
					if(flag==1)
					printf("\nAranan %d sayisi %d adimda bulundu.",bul,step);
					
					else if(flag==0) 
					printf("\nAranan %d sayisi listede bulunamadi.",bul,step);	
		}
		void Delete(int del){//Silme fonsiyonu
			if(ilk->num==del){//Listedeki ilk eleman silinecekse bu if �al���yor
				node *temp=NULL;
				temp=ilk->sonraki;
					free(ilk);
					ilk=temp;	
				}
				else{//Listedeki ilk eleman silinecek eleman de�ilse else i�ine girer.
					gezen=ilk;
				while(gezen->sonraki->num!=del){//silinecek numaran�n �n�ndeki eleman�n� tutuyorum.
					gezen=gezen->sonraki;
				}
				gecici=gezen->sonraki->sonraki;//geciciye silinecek numaran�n sonrakini att�m.
				free(gezen->sonraki);//gezen=silinecek eleman�n �ncekiydi.Burada gezen->sonraki diyerek silinmek isteneni sildim.
				gezen->sonraki=gecici;//silinenin �ncekinin sonraki silinenin sonraki oldu.
			
	}
		}
		int TekrarDizisi(node *ilk,int uzunluk){//Bu fonksiyonla amac�m listedeki hangi say�dan ka� adet oldu�unu bulup dizide tutmakt�.
			int dizilist[uzunluk],tekrardizisi[uzunluk][2],adet=0,elemansay=0,i=0,k=0;//elemansay dizide ka� farkl� eleman oldu�unu g�sterir.
			gezen=ilk;
				while(gezen!=NULL){//ba�l� listeyi dizi adl� bir diziye att�m.
					dizilist[i]=gezen->num;
					gezen=gezen->sonraki;
					i++;
				} 
						for(int i=0;i<uzunluk;i++){//bu yol ile hangi say�dan ka� adet oldu�unu bir dizide tutaca��m.
							adet=1;
							for(int j=i+1;j<uzunluk;j++){
								if(dizilist[i]%10==dizilist[j]%10){
									adet++;//ayn� say�dan ka� adet oldu�unu say�yor.
									dizilist[j]=-1;//sayd��� say�y� tekrar tekrar saymamas� i�in bo�luyorum. 
								}
							}
						if(i==uzunluk-1){//son elemansa buraya gelecek.
							tekrardizisi[k][0]=dizilist[i]%10;
							tekrardizisi[k][1]=adet;
							k++;
							elemansay++;
							}
						if(dizilist[i]!=-1){//bo� eleman de�ilse buraya gecelek.
							tekrardizisi[k][0]=dizilist[i]%10;
							tekrardizisi[k][1]=adet;
							k++;elemansay++;
						}
					
					}
						//En �ok tekrar eden say�dan en az tekrar eden say�ya do�ru s�ralama yap�yorum.
						int gecici1,gecici2;
						for(int a=0;a<elemansay-1;a++){
							for(int b=a+1;b<elemansay-1;b++){
								if(tekrardizisi[b][1]>tekrardizisi[a][1]){
								gecici1=tekrardizisi[a][1];
								gecici2=tekrardizisi[a][0];
								tekrardizisi[a][1]=tekrardizisi[b][1];
								tekrardizisi[a][0]=tekrardizisi[b][0];
								tekrardizisi[b][0]=gecici2;
								tekrardizisi[b][1]=gecici1;
								
								}
							}
						}//Listeye hangi i�lem yap�l�rsa yap�ls�n birler basama�� en �ok tekrar eden say�dan 
						//en az tekrar eden say�ya do�ru tekrardizisi adl� dizide elemanlar� tutabiliyorum.
						
					printf("\nListedeki elemanlarin en coktan en aza tekrar etme sayilari :\n ");
						for(int a=0;a<elemansay-1;a++){
							printf("%d sayisindan %d adet =>",tekrardizisi[a][0],tekrardizisi[a][1]);	
					}
					
							
		}
		
			
int main(){
	FILE *dosya,*dosya2;
	dosya=fopen("dosya.txt","r");
	int k=0;char x;
	while(!feof(dosya)){
		fscanf(dosya,"%c",&x);
		if(x==' ')
		k++;
	}
	fclose(dosya);
	k=k/2;
		dosya=fopen("dosya.txt","r");
		char ad[k][10],soyad[k][10];
		int no[k],i=0,t=0;	
			if((dosya=fopen("dosya.txt","r"))!=NULL){
				for(i=0;i<k;i++){
					fscanf(dosya,"%d %s %s",&no[i],ad[i],soyad[i]);	
					node *ekle=(node *)malloc(sizeof(node));
					ekle->num=no[i];
					strcpy(ekle->ad,ad[i]);
					strcpy(ekle->soyad,soyad[i]);
					ekle->sonraki=NULL;
					if(ilk == NULL) 
					ilk=ekle;
					else{
						gezen=ilk;
						while(gezen->sonraki!=NULL){
							gezen=gezen->sonraki;
						}
						gezen->sonraki=ekle;
					}
	}printf("Dosyadan alinan veriler:\n");
	yazdir();
}

		int secim,sayi;
		char a[10],b[10],devam;
		do{

		printf("\n>>>Ekleme yapmak icin :1\n");
		printf(">>>Eleman aramak icin :2\n");
		printf(">>>Eleman silmek icin :3\n");
		printf(">>>Elemanlari listelemek icin :4\n");
		printf(">>>Elemanlari siralamak icin  :5\n");
		printf("<<<<<<<<<<<<<<<<<<<<<<<\n");
		printf("\tSECIM YAPINIZ...:");scanf("%d",&secim);
		printf("<<<<<<<<<<<<<<<<<<<<<<<<\n");
		
			switch(secim){
				case 1 :printf("\tEklemek istediginiz numara bilgisini giriniz : ");
						scanf("%d",&sayi);fflush(stdin);
						printf("\tEklemek istediginiz Ad Soyad bilgisini giriniz : ");
						scanf("%s %s",&a,&b);fflush(stdin);
								gezen=ilk;
								while(gezen->sonraki!=NULL){
									gezen=gezen->sonraki;
								}
								gezen->sonraki=(node *)malloc(sizeof(node));
								gezen->sonraki->num=sayi;
								strcpy(gezen->sonraki->ad,a);
								strcpy(gezen->sonraki->soyad,b);
								gezen=gezen->sonraki;
								gezen->sonraki=NULL;
					break;
				
				case 2 :printf("\tAramak istediginiz numara bilgisini giriniz : ");
						scanf("%d",&sayi);fflush(stdin);
						AraBul(ilk,sayi);
				
					break;
				
				
				case 3 :printf("\tSilmek istediginiz numara bilgisini giriniz : ");
						scanf("%d",&sayi);fflush(stdin);
						Delete(sayi);
					break;
				
				case 4 :yazdir();
					break;
				case 5  :
					TekrarDizisi(ilk,Uzunluk(ilk));
					break;
			}	printf("\nDevam etmek icin e'yi tuslayin.Cikmak icin herhangi bir tusa basiniz.");devam=getch();
			
		}while(devam=='e' || devam=='E');
			if(devam!='e' || devam=='E')
			printf("\nPROGRAM BITTI BILGILER 'dosya2.txt' DOSYASINA KAYDEDILDI.");
			dosya2=fopen("dosya2.txt","w");
			fprintf(dosya2,"L�STEN�N SON HAL� \n");
					gezen=ilk;
						while(gezen->sonraki!=NULL){
							fprintf(dosya2,"%d %s %s=>\n",gezen->num,gezen->ad,gezen->soyad);
							gezen=gezen->sonraki;
						}
						fprintf(dosya2,"%d %s %s",gezen->num,gezen->ad,gezen->soyad);
						fclose(dosya2);
}
