#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
	struct dugum{
		int sayi;
		struct dugum *sonraki;
	};
typedef dugum node;
node *ilk=NULL,*gezen=NULL;
	node *yerac(int x){
		node *ekle=(node *)malloc(sizeof(node));
		ekle->sayi=x;
		ekle->sonraki=NULL;
	}
	void yaz(){
		gezen=ilk;
		while(gezen->sonraki!=NULL){
			printf("%d -> ",gezen->sayi);
			gezen=gezen->sonraki;
		}
			printf("%d",gezen->sayi);
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
	}
