#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#define boyut 10
struct dugum{
		int oncelik;
		char ad[10];
		struct dugum *sonraki;
		struct dugum *onceki;
	};
	typedef dugum node;
	node *ilk=NULL,*gezen=NULL,*gecici=NULL;

	node *yerac(int oncelik,char ad[boyut]){
		node *yeni=(node *)malloc(sizeof(node));
		yeni->oncelik=oncelik;
		strcpy(yeni->ad,ad);
		yeni->onceki=NULL;
		yeni->sonraki=NULL;
	}
	void kuyrukYap(int oncelik,char ad[boyut]){
		node *ekle=yerac(oncelik,ad);
		if(ilk==NULL){
			ilk=ekle;
		}
		else{
			gezen=ilk;
			while(gezen->sonraki!=NULL){
				gezen=gezen->sonraki;
			}
			gezen->sonraki=ekle;
			gezen=gezen->sonraki;
		}
	}
	void basaEkle(){
		gezen=ilk;
			gecici->sonraki=gezen;
			ilk=gecici;
			gecici=NULL;
	}
	void sonaEkle(){
			gezen=ilk;
			while(gezen->sonraki!=NULL){
				gezen=gezen->sonraki;
						}
				gezen->sonraki=gecici;
				gecici->sonraki=NULL;
	}
	void arayaEkle(int oncelik,char ad[boyut]){
		node *ekle=yerac(oncelik,ad);
		gezen=ilk;
		while(gezen->oncelik!=oncelik){
			gezen=gezen->sonraki;
		}
		printf("%d %s",gezen->oncelik,gezen->ad);
		ekle->sonraki=gezen->sonraki;
		gezen->sonraki=ekle;
		
		}
	void ara(char kelime[boyut]){
		int sayac=0;
		gezen=ilk;
		while(gezen!=NULL){
			if(strcmp(kelime,gezen->ad)==0){
				printf("\nAranan isim %d %s ",gezen->oncelik,kelime);
				break;
			}
	
			sayac++;
			gezen=gezen->sonraki;
		}
		printf("\nAranan ismin onunde %d kisi var",sayac);
	}
	void yazdir(){//Listeleyi yazan fonksiyon
			gezen=ilk;
			while(gezen->sonraki!=NULL){
				printf("%d %s \n",gezen->oncelik,gezen->ad);
				gezen=gezen->sonraki;
			}
			printf("%d %s\n",gezen->oncelik,gezen->ad);
		}
	int main(){
		FILE *dosya;
		dosya=fopen("kuyruk.txt","r");
		int k=0;char x;
		while(!feof(dosya)){
			fscanf(dosya,"%c",&x);
			if(x==' ')
			k++;
		}
		fclose(dosya);
	
		dosya=fopen("kuyruk.txt","r");
		char ad[k][10];	
		int no[k],flag=0;
			if((dosya=fopen("kuyruk.txt","r"))!=NULL){
				for(int i=0;i<k;i++){
					fscanf(dosya,"%d %s",&no[i],ad[i]);	
					kuyrukYap(no[i],ad[i]);
				}
			yazdir();
			char ekleAd[10];
			int ekleNum;
			while(1==1){
				printf("\neklenecek numara ve ad : ");
				scanf("%d",&ekleNum);gets(ekleAd);
				gecici=yerac(ekleNum,ekleAd);
				
				
					gezen=ilk;
							while(gezen!=NULL){
								if(gezen->oncelik < gecici->oncelik)
									gezen=gezen->sonraki;
								else
									break;			
							}
									if(gezen==NULL)
										sonaEkle();
									
									else if(gezen==ilk)
										basaEkle();
											
									else{
										arayaEkle(ekleNum,ekleAd);
										}
								
									yazdir();
						char araKelime[boyut];
						printf("\naramak istediginiz kisi : ");gets(araKelime);
						ara(araKelime);
				}
							}			
					}
							
							
