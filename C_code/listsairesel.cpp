#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
	struct dugum{
		int veri;
		struct dugum *sonraki;
	};
	typedef dugum node;
	node *ilk=NULL,*gezen=NULL,*gecici=NULL;
	node *yerac(int x){
		node *ekle=(node *)malloc(sizeof(node));
		ekle->veri=x;
		ekle->sonraki=NULL;
	}
	void yaz(){
		gezen=ilk;
		while(gezen->sonraki!=ilk){
			printf("%d=> ",gezen->veri);
			gezen=gezen->sonraki;
		}
		printf("%d",gezen->veri);
	}
	int main(){
		int i=0,b;
		while(i!=4){
			printf("sayi girin: ");scanf("%d",&b);i++;
			if(ilk==NULL){
				ilk=yerac(b);
				gezen=ilk;
				printf("%d => \n",ilk->veri);
			}
			else{
				gezen->sonraki=yerac(b);
				gezen=gezen->sonraki;
				gezen->sonraki=ilk;
				yaz();
				printf("\n");
			}
		}
	}
