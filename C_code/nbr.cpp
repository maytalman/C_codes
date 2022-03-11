#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
	struct dugum{
		int veri;
		struct dugum *sonraki;
		struct dugum *onceki;
	};
	typedef dugum node;
	node *ilk=NULL,*gecici=NULL,*gezen=NULL;
	void yaz(){
		gezen=ilk;
		while(gezen->sonraki!=NULL){
			printf("%d=>",gezen->veri);
			gezen=gezen->sonraki;
		}
		printf("%d",gezen->veri);
	}
	int main(){
		FILE *dosya;
		int a;
		dosya=fopen("piyade.txt","w");
		for(int i=0;i<5;i++){
			printf("sayi girin : ");scanf("%d",&a);
			fprintf(dosya," %d\n",a);
		}
		fclose(dosya);
		dosya=fopen("piyade.txt","r");
	for(int i=0;i<5;i++){
			if(ilk==NULL){
				ilk=(node *)malloc(sizeof(node));
				fscanf(dosya,"%d",&ilk->veri);
				ilk->onceki=NULL;
				ilk->sonraki=NULL;
			}
			else{
				gecici=(node *)malloc(sizeof(node));
				fscanf(dosya,"%d",&gecici->veri);
				gecici->onceki=NULL;
				gecici->sonraki=NULL;
				gezen=ilk;
					while(gezen!=NULL){
						if(gezen->veri < gecici->veri)
							gezen=gezen->sonraki;
						else
							break;
					}
					if(gezen==ilk){
						gecici->sonraki=gezen;
						gezen->onceki=gecici;
						ilk=gecici;
						gecici=NULL;
						}
					else if(gezen==NULL){
						gezen=ilk;
							while(gezen->sonraki!=NULL){
								gezen=gezen->sonraki;
							}
							gezen->sonraki=gecici;
							gecici->onceki=gezen;
							ilk=gecici;
							gecici=NULL;
					}
					else{
						gecici->sonraki=gezen;
						gezen->onceki->sonraki=gecici;
						gecici->onceki=gezen->onceki;
						gezen->onceki=gecici;
						gecici=NULL;
					}
					
					
			}	
		}
		fclose(dosya);
		yaz();
		
	}
