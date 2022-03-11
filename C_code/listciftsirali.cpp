#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct dugum{
		int veri;
		struct dugum *sonraki;
		struct dugum *onceki;
	};
	typedef dugum node;
	node *ilk=NULL,*gezen=NULL,*gecici=NULL;

node *yerac(int x){
		node *yeni=(node *)malloc(sizeof(node));
		yeni->veri=x;
		yeni->onceki=NULL;
		yeni->sonraki=NULL;
	}

void sondanekle(int y){
		node *ekle=yerac(y);
		if(ilk==NULL){
			ilk=ekle;
		}
		else{
			gezen=ilk;
			while(gezen->sonraki!=NULL){
				gezen=gezen->sonraki;
			}
			gezen->sonraki=ekle;
			ekle->onceki=gezen;
		}
	}
	void tersliste(){
		FILE *dosya1;
		dosya1=fopen("sayilarters.txt","w");
			  gezen=ilk;
			  gecici=ilk;
			while(gezen->sonraki!=NULL){
				gezen=gezen->sonraki;
			}
			
			while(gezen->onceki!=NULL){
				fprintf(dosya1,"%d ",gezen->veri);
				gezen=gezen->onceki;
			}
			fprintf(dosya1,"%d ",gecici->veri);
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
	FILE *dosya;
	dosya=fopen("sayilar.txt","w");
	fprintf(dosya,"%d\n",5);
	fprintf(dosya,"%d\n",45);
	fprintf(dosya,"%d\n",98);
	fprintf(dosya,"%d\n",34);
	fprintf(dosya,"%d\n",76);
	fprintf(dosya,"%d\n",63);
	fprintf(dosya,"%d\n",1);
	fclose(dosya);
	if(dosya==NULL){
		printf("dosya açýlmadý");
		exit(1);
	}
	else{
		dosya=fopen("sayilar.txt","r");
	    int dizi[7],gecici;
	    int i=0;
	    while(!feof(dosya)){
	     	fscanf(dosya,"%d",&dizi[i]);
	     	 i++;
	 }fclose(dosya);
	 for(int i=0;i<7;i++){
	 	for(int j=i+1;j<7;j++){
	 		if(dizi[i]>dizi[j]){
					gecici=dizi[i];
					dizi[i]=dizi[j];
					dizi[j]=gecici;
				}
			}
	 }
	 for(int i=0;i<7;i++){
	 	sondanekle(dizi[i]);
	 }
	 printf("\n");
	 tersliste();
	 
	 yaz();
   }
}
