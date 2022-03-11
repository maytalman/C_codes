#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
	struct sayilar{
		int x;
		struct sayilar *sonra;
	};
	typedef sayilar n;
	void yaz(n *i){
		n *gezen=i;
		while(i->sonra!=gezen){
			printf("%d ",i->x);
			i=i->sonra;
		}
		printf("%d ",i->x);
	}
	int main(){
		n *ilk=NULL,*gezen=NULL,*gecici=NULL;
		int kanak=1,secim,a,b,temp,sil;
			do{
				if(ilk==NULL){
					ilk=(n *)malloc(sizeof(n));
					printf("\nsayi : ");scanf("%d",&ilk->x);
					ilk->sonra=NULL;
					gezen=ilk;
				}
				else{
					gezen->sonra=(n *)malloc(sizeof(n));
					gezen=gezen->sonra;
					printf("\nsayi :");scanf("%d",&gezen->x);
					kanak++;
					gezen->sonra=ilk;
				}
				printf("\n\tdevam '1' : ");scanf("%d",&a);
			}while(a==1);
				printf("\n\tDairesel tek yonlu bagli liste :\t");
				yaz(ilk);
						printf("\n\tDairesel tek yonlu bagli listenin kucukten buyuge siralanisi :\t");
						gezen=ilk;
					for(int i=0;i<kanak;i++){
						gezen=ilk;
						while(gezen->sonra!=ilk){
							if(gezen->x > gezen->sonra->x){
							temp=gezen->x;
							gezen->x=gezen->sonra->x;
							gezen->sonra->x=temp;
					}
						gezen=gezen->sonra;
						}
					}
						yaz(ilk);
							printf("\n\tDairesel tek yonlu bagli listeden silmek istediginiz dugum : ");scanf("%d",&sil);
							printf("\t%d.dugumu silinmis dairesel tek yonlu bagli liste :  ",sil);	
						gezen=ilk;
						for(int i=1;i<=kanak;i++){
							if(sil==i){
								gecici=gezen;
								gezen=gezen->sonra;
								free(gecici);
							}
							else{
								printf("%d ",gezen->x);
								gezen=gezen->sonra;
							}
						}
			gezen=ilk;
			while(gezen->sonra!=ilk){
				gecici=gezen;
				gezen=gezen->sonra;
				free(gecici);
			}	
	}
