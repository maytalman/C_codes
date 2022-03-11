#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
	struct dugum{
		int veri;
		struct dugum *sonraki;
		struct dugum *onceki;
	};		
	typedef dugum node;
	node *ilk=NULL,*gezen=NULL,*gecici=NULL;
	node *yerac(int x){
	node *ekle=(node *)malloc(sizeof(node));
	ekle->veri=x;
	ekle->sonraki=NULL
	ekle->onceki=NULL;
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
			int dvm,a,tut;
			node *gecici2=NULL;
			int dizi[7]={5,45,98,34,76,63,1};
				for(int i=0;i<7;i++){
				
					if(ilk==NULL){
						ilk=yerac(a);
						gecici=ilk;
				}
					else{
						gecici=yerac(a);
						gezen=ilk;
							while(gezen!=NULL){
								if(gezen->veri < gecici->veri){
									tut=gezen->veri;
									gezen=gezen->sonraki;
									}	
								else
									break;
								}
									if(gezen==NULL){
										gezen=ilk;
										while(gezen->sonraki!=NULL){
										gezen=gezen->sonraki;
									}
										gezen->sonraki=gecici;
										gecici->sonraki=NULL;
									}
									else if(gezen==ilk){
										gecici->sonraki=gezen;
										ilk=gecici;
										gecici=NULL;
											}
									else{
										gecici2=gezen;
										gezen=ilk;
											while(gezen->sonraki!=NULL){
												gezen=gezen->sonraki;
													if(gezen->veri==tut){
														gezen->sonraki=gecici;
														gecici->sonraki=gecici2->sonraki;
														gecici2=NULL;
														gecici=NULL;
												}
											}
										}
									}
				}while(dvm==1);
				yaz();
	}
