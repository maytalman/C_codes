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
		while(gezen->sonraki!=NULL){
			printf("%d => ",gezen->veri);
			gezen=gezen->sonraki;
		}
		printf("%d",gezen->veri);
	}
		node *ters(node *ilk){
			if(ilk->sonraki==NULL){
				printf("%d",ilk->veri);
				return 0;
			}
			else{
				gezen=ilk;
				while(gezen->sonraki->sonraki!=NULL){
				gezen=gezen->sonraki;		
				}
				printf("%d => ",gezen->sonraki->veri);
				gezen->sonraki=NULL;	
			}
			return ters(&*ilk);	
		}
		int main(){
			for(int i=0;i<5;i++){
				if(ilk==NULL){
					ilk=yerac(i+1);
					gezen=ilk;
				}
				else{
					gezen->sonraki=yerac(i+1);
					gezen=gezen->sonraki;
					gezen->sonraki=NULL;
				}
			}
			yaz();
			printf("\n");
			ters(&*ilk);
		}
	
	
