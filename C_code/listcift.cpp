#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
	struct dugum{
		int veri;
		struct dugum *sonraki;
		struct dugum *onceki;
	};
	typedef dugum node;
	node *ilk=NULL,*gezen=NULL,*gecici=NULL;
	node *yerac(int x){
		node *yeni=(node *)malloc(sizeof(node));
		yeni->veri=x;
		yeni->onceki=NULL;
		yeni->sonraki=NULL;
	}
	void sondanekle(int y){
		node *ekle=yerac(y);
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
	void bastanekle(int b){
		node *ekle=yerac(b);
		ilk->onceki=ekle;
		ekle->sonraki=ilk;
		ilk=ekle;
	}
	void arayaekle(int x,int y){
		node *ekle=yerac(y);
		gezen=ilk;
		while(gezen->veri!=x){
			gezen=gezen->sonraki;
		}
		ekle->onceki=gezen->onceki;
		ekle->sonraki=gezen;
		gezen->onceki=ekle;
		ekle->onceki->sonraki=ekle;
		}
	void yaz(){
		gezen=ilk;
		while(gezen->sonraki!=NULL){
			printf("%d => ",gezen->veri);
			gezen=gezen->sonraki;
		}
		printf("%d",gezen->veri);
	}
	int main(){
		int d,e,x,y;
		ilk=yerac(5);
		printf("\tsayi girin : ");scanf("%d",&d);
		sondanekle(d);
		yaz();
		printf("\tsayi girin : ");scanf("%d",&e);
		bastanekle(e);
		yaz();printf("\n");
		bastanekle(7);
		yaz();
		printf("\thangi elemanin onune eklensin");scanf("%d",&x);
		printf("\thangi sayi eklensin");scanf("%d",&y);
		arayaekle(x,y);
		yaz();
		
	}
