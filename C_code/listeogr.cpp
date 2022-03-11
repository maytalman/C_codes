#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
	struct dugum{
		int veri;
		struct dugum *sonraki;
	};
	typedef dugum node;
	node *ilk=NULL,*gecici=NULL,*gezen=NULL;
		void yaz(){
			gezen=ilk;
			while(gezen->sonraki!=NULL){
				printf("%d => ",gezen->veri);
				gezen=gezen->sonraki;
			}
			printf("%d",gezen->veri);
		}
		void atla(){
			printf("\n");
		}
	int main(){
		int secim;
		ilk=(node *)malloc(sizeof(node));
		ilk->veri=1;
		ilk->sonraki=(node *)malloc(sizeof(node));
		ilk->sonraki->veri=2;
		ilk->sonraki->sonraki=NULL;
		gecici=ilk;
		gezen=ilk->sonraki;
		do{
			gezen->sonraki=(node *)malloc(sizeof(node));
			gezen=gezen->sonraki;
			printf("\tsayi girin : ");scanf("%d",&gezen->veri);
			gezen->sonraki=NULL;
			printf("\tdevam etmek icin '1' :");scanf("%d",&secim);
			yaz();
		}while(secim==1);
		
	}
