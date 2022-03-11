#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
	struct dugum {
		int veri;
		struct dugum *sonraki;
	};
	typedef dugum node;
	node *ilk=NULL,*gecici=NULL,*gezen=NULL;
	void sondansil(){
		gezen=ilk;
		while(gezen->sonraki->sonraki!=NULL){
			gezen=gezen->sonraki;
		}
		gecici=gezen->sonraki;
		free(gecici);
		gezen->sonraki=NULL;	
	}
	void bastansil(){
		gezen=ilk;
		ilk=gezen->sonraki;
		free(gezen);
	}
	void istenenisil(int x){
		gezen=ilk;
		if(ilk->veri==x){
			ilk=gezen->sonraki;
			free(gezen);
		}
		else{
		while(gezen->sonraki->veri!=x){
			gezen=gezen->sonraki;
		}
		gecici=gezen->sonraki->sonraki;
		free(gezen->sonraki);
		gezen->sonraki=gecici;
	}
}
	void yaz(){
		gezen=ilk;
		while(gezen->sonraki!=NULL){
			printf("%d => ",gezen->veri);
			gezen=gezen->sonraki;
		}
		printf("%d",gezen->veri);
		if(ilk==NULL)
		printf("\neleman kalmadi...");
	}
	void atla(){
		printf("\n");
	}
	int main(){
		int sil,secim,a;
		ilk=(node *)malloc(sizeof(node));
		ilk->veri=5;
		gezen=ilk;
		for(int i=0;i<4;i++){
			gezen->sonraki=(node *)malloc(sizeof(node));
			gezen=gezen->sonraki;
			printf(" veri : ");scanf("%d",&gezen->veri);
		}
		gezen->sonraki=NULL;
		yaz();
		do{
			printf("\n\tbastan silmek '1'\n\tsondan silmek '2'\n\taradan silmek '3'");
		scanf("%d",&secim);
			switch(secim){
				case 1:
					bastansil();yaz();break;
				case 2:	
					sondansil();atla();yaz();break;
				case 3:
					printf("\taradan hangi sayi silinsin? ");scanf("%d",&sil);
					istenenisil(sil);yaz();break;
					}
			printf("\ttekrar islem icin '1'");scanf("%d",&a);
		}while(a==1);
	}
