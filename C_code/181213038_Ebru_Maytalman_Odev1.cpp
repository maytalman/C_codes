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
		int Uzunluk(node *ilk){//listenin kaç elemanlý olduðunu bulan fonksiyon
			int count=0;
			gezen=ilk;
				while(gezen->sonraki!=NULL){
					gezen=gezen->sonraki;
					count++;
				}
			return count+1;
	}
		int AraBul(node *ilk,int bul){//Kullanýcýnýn girdiði sayýnýn listede olup olmadýðýný kontrol eden fonksiyon
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
			if(ilk->num==del){//Listedeki ilk eleman silinecekse bu if çalýþýyor
				node *temp=NULL;
				temp=ilk->sonraki;
					free(ilk);
					ilk=temp;	
				}
				else{//Listedeki ilk eleman silinecek eleman deðilse else içine girer.
					gezen=ilk;
				while(gezen->sonraki->num!=del){//silinecek numaranýn önündeki elemanýný tutuyorum.
					gezen=gezen->sonraki;
				}
				gecici=gezen->sonraki->sonraki;//geciciye silinecek numaranýn sonrakini attým.
				free(gezen->sonraki);//gezen=silinecek elemanýn öncekiydi.Burada gezen->sonraki diyerek silinmek isteneni sildim.
				gezen->sonraki=gecici;//silinenin öncekinin sonraki silinenin sonraki oldu.
			
	}
		}
		int TekrarDizisi(node *ilk,int uzunluk){//Bu fonksiyonla amacým listedeki hangi sayýdan kaç adet olduðunu bulup dizide tutmaktý.
			int dizilist[uzunluk],tekrardizisi[uzunluk][2],adet=0,elemansay=0,i=0,k=0;//elemansay dizide kaç farklý eleman olduðunu gösterir.
			gezen=ilk;
				while(gezen!=NULL){//baðlý listeyi dizi adlý bir diziye attým.
					dizilist[i]=gezen->num;
					gezen=gezen->sonraki;
					i++;
				} 
						for(int i=0;i<uzunluk;i++){//bu yol ile hangi sayýdan kaç adet olduðunu bir dizide tutacaðým.
							adet=1;
							for(int j=i+1;j<uzunluk;j++){
								if(dizilist[i]%10==dizilist[j]%10){
									adet++;//ayný sayýdan kaç adet olduðunu sayýyor.
									dizilist[j]=-1;//saydýðý sayýyý tekrar tekrar saymamasý için boþluyorum. 
								}
							}
						if(i==uzunluk-1){//son elemansa buraya gelecek.
							tekrardizisi[k][0]=dizilist[i]%10;
							tekrardizisi[k][1]=adet;
							k++;
							elemansay++;
							}
						if(dizilist[i]!=-1){//boþ eleman deðilse buraya gecelek.
							tekrardizisi[k][0]=dizilist[i]%10;
							tekrardizisi[k][1]=adet;
							k++;elemansay++;
						}
					
					}
						//En çok tekrar eden sayýdan en az tekrar eden sayýya doðru sýralama yapýyorum.
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
						}//Listeye hangi iþlem yapýlýrsa yapýlsýn birler basamaðý en çok tekrar eden sayýdan 
						//en az tekrar eden sayýya doðru tekrardizisi adlý dizide elemanlarý tutabiliyorum.
						
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
			fprintf(dosya2,"LÝSTENÝN SON HALÝ \n");
					gezen=ilk;
						while(gezen->sonraki!=NULL){
							fprintf(dosya2,"%d %s %s=>\n",gezen->num,gezen->ad,gezen->soyad);
							gezen=gezen->sonraki;
						}
						fprintf(dosya2,"%d %s %s",gezen->num,gezen->ad,gezen->soyad);
						fclose(dosya2);
}
