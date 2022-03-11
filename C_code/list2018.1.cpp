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
			printf("%d=> ",gezen->veri);
			gezen=gezen->sonraki;
		}
		printf("%d",gezen->veri);
	}
	int main(){
		int a,t;
		for(int i=0;i<5;i++){
			if(ilk==NULL){
				ilk=(node *)malloc(sizeof(node));
				printf("\nsayi girin: ");scanf("%d",&ilk->veri);
				ilk->sonraki=NULL;
				gezen=ilk;
			}
			else{
				
				printf("\nsayi girin : ");scanf("%d",&a);
				gezen->sonraki=yerac(a);
				gezen=gezen->sonraki;
				
			}
	}
			yaz();
			printf("\nhangi elemandan sonrasi basa tasinsin? ");scanf("%d",&t);
			gezen=ilk;
			while(gezen->sonraki!=NULL){
				gezen=gezen->sonraki;
			}
			gezen->sonraki=ilk;
			gezen=ilk;
			while(gezen->sonraki!=ilk){
				printf("%d ->",gezen->veri);
				gezen=gezen->sonraki;
			}
			printf("%d\n",gezen->veri);
			gezen=ilk;
			while(gezen->sonraki!=ilk){
				if(gezen->veri==t)
					ilk=gezen->sonraki;
				else
					gezen=gezen->sonraki;
				
			}
			gecici=gezen;
			gezen=ilk;
			while(gezen!=gecici){
				printf("%d- ",gezen->veri);
				gezen=gezen->sonraki;
			}
			printf("%d\n",gezen->veri);
			
}
