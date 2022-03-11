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
		void sonaekle(int n,char ad[boyut]){
				node *ekle=(node *)malloc(sizeof(node));
				ekle->oncelik=n;
				strcpy(ekle->ad,ad);
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
			}
		void basaekle(int n,char ad[boyut]){
					node *b=(node *)malloc(sizeof(node));
					b->oncelik=n;
					strcpy(b->ad,ad);
					b->sonraki=ilk;
					ilk=b;
				}
		void arayaekle(int x,char ad[boyut]){
						gezen=ilk;
						while(gezen->sonraki->oncelik!=x){
							gezen=gezen->sonraki;
						}
						gecici=gezen->sonraki;
						gezen->sonraki=(node *)malloc(sizeof(node));
						gezen->sonraki->oncelik=x;
						strcpy(gezen->sonraki->ad,ad);
						gezen=gezen->sonraki;
						gezen->sonraki=gecici;
					}
	
	void ara(char kelime[boyut]){
		int sayac=0,flag=0;
		gezen=ilk;
		while(gezen!=NULL){
			int kontrol=-1;
			kontrol=strcmp(kelime,gezen->ad);
			if(kontrol==0){
				flag=1;
				break;
			}
			else{
			gezen=gezen->sonraki;
			sayac++;
		}
			}
			if(flag==1)
			printf("\nonunde %d kisi",sayac);
			else printf("kisi yok");
	
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
					gezen=ilk;
						while(gezen!=NULL){
							if(gezen->oncelik < ekleNum){
								gezen=gezen->sonraki;
							}
							else break;
						}
						if(gezen==NULL)
							sonaekle(ekleNum,ekleAd);
						else if(gezen==ilk)
							basaekle(ekleNum,ekleAd);
						else
							arayaekle(ekleNum,ekleAd);
				
				

								
									yazdir();
						char araKelime[boyut];
						printf("\naramak istediginiz kisi : ");gets(araKelime);
						ara(araKelime);
				}
							}	
							fclose(dosya);		
					}
