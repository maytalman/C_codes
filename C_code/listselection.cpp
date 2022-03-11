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
	int *takas(int *x,int *y){
		int gecici;
			gecici=*x;
			*x=*y;
			*y=gecici;
	}
	int *sec(node *ilk){
		node *min;
		int gecicim;
			gezen=ilk;                           //2 4 1 5 8->NULL              min=2
				while(gezen->sonraki!=NULL){   //  1 4 2 5 8                    min 4
					min=gezen;                   
					gecici=gezen;
					while(gecici->sonraki!=NULL){
						if(min->veri > gecici->veri)
							min=gecici;
								gecici=gecici->sonraki;
					}
					gecicim=gezen->veri;
					gezen->veri=min->veri;
					min->veri=gecicim;
					gezen=gezen->sonraki;
				}
	}
		int main(){
			int a;
			for(int i=0;i<5;i++){
				printf("sayi girin : ");scanf("%d",&a);
				if(ilk==NULL){
					ilk=yerac(a);
					gezen=ilk;
				}
				else{
					gezen->sonraki=yerac(a);
					gezen=gezen->sonraki;
				}
			}
			yaz();
			printf("\n");
			sec(&*ilk);
			yaz();
		}
