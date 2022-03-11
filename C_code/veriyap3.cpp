#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#define boyut
struct dugum{
		int oncelik;
		char ad[10];
		struct dugum *sonraki;
		struct dugum *onceki;
	};
	typedef dugum node;
	node *ilk=NULL,*gezen=NULL,*gecici=NULL;

/*	node *yerac(int oncelik,char ad){
		node *yeni=(node *)malloc(sizeof(node));
		yeni->oncelik=oncelik;
		yeni->ad=ad;
		yeni->onceki=NULL;
		yeni->sonraki=NULL;
	}
	void sondanekle(int oncelik,char ad){
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
		}
	}
	void bastanekle(int oncelik,char ad){
		node *ekle=yerac(oncelik,ad);
		ilk->onceki=ekle;
		ekle->sonraki=ilk;
		ilk=ekle;
	}*/
	void arayaekle(int oncelik,char ad){
		node *ekle=(node *)malloc(sizeof(node));
		ekle->oncelik=oncelik;
		ekle->ad=ad;
		ekle->onceki=NULL;
		ekle->sonraki=NULL;
		
		gezen=ilk;
		while(gezen->oncelik!=oncelik){
			gezen=gezen->sonraki;
		}
		ekle->onceki=gezen->onceki;
		ekle->sonraki=gezen;
		gezen->onceki=ekle;
		ekle->onceki->sonraki=ekle;
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
		int no[k];
			if((dosya=fopen("kuyruk.txt","r"))!=NULL){
				for(int i=0;i<k;i++){
					fscanf(dosya,"%d %s",&no[i],ad[i]);	
					node *ekle=(node *)malloc(sizeof(node));
					ekle->oncelik=no[i];
					strcpy(ekle->ad,ad[i]);
					ekle->sonraki=NULL;
					ekle->onceki=NULL;
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
	yazdir();
	char ekleAd[10];
	int ekleNum,flag=0;
		printf("eklenecek numara ve ad : ");
		scanf("%d",&ekleNum);gets(ekleAd);
					gezen=ilk;
					while(gezen->sonraki!=NULL){
						if(gezen->oncelik==ekleNum) flag=1;
						gezen=gezen->sonraki;
					}
					if(flag==1){
						gezen=ilk;
						while(gezen->sonraki!=NULL){
							if(gezen->sonraki->oncelik==ekleNum){
								
							}
					}
					yazdir();
				
}


}
