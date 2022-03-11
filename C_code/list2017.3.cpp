#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
	struct dugum{
		int veri;
		struct dugum *sonraki;
	};
	typedef dugum node;
	node *ilk=NULL,*gezen=NULL,*gecici=NULL;
		node *basaekle(int x);
			node *sonaekle(int x);
				void yaz();
	int main(){
			int a,dvm;
			do{
					printf("\n\tsayi girin : ");scanf("%d",&a);
					if(a%2==0)
						sonaekle(a);
					else
						basaekle(a);
							printf("devam icin '1'");scanf("%d",&dvm);
			}while(dvm==1);
			if(dvm!=1)
				yaz();
	}
			node *basaekle(int x){
				if(ilk==NULL){
					ilk=(node *)malloc(sizeof(node));
					ilk->veri=x;
					ilk->sonraki=NULL;
				}
				else{
					gezen=ilk;
					node *ekle=(node *)malloc(sizeof(node));
					ekle->veri=x;
					ekle->sonraki=gezen;
					ilk=ekle;
				}
			}
			node *sonaekle(int x){
				if(ilk==NULL){
					ilk=(node *)malloc(sizeof(node));
					ilk->veri=x;
					ilk->sonraki=NULL;
				}
				else{
					gezen=ilk;
					while(gezen->sonraki!=NULL){
						gezen=gezen->sonraki;
					}
					gezen->sonraki=(node *)malloc(sizeof(node));
					gezen=gezen->sonraki;
					gezen->veri=x;
					gezen->sonraki=NULL;
				}
			}
			void yaz(){
				gezen=ilk;
				while(gezen->sonraki!=NULL){
					printf("%d => ",gezen->veri);
					gezen=gezen->sonraki;
				}
				printf("%d",gezen->veri);
			}
