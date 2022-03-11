#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
	struct dugum{
		int veri;
		struct dugum *sonraki;
	};
	typedef dugum node;
	node *ilk=NULL,*gezen=NULL;
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
	int takas(int *x,int *y){
	int gecici;
		gecici=*x;
		*x=*y;
		*y=gecici;
	}
		int main(){
			int *dizi,dvm,kanak=0,*min,t=0,say=0;
			dizi=(int *)malloc(sizeof(int)*5);
			dizi=(int *)realloc(dizi,sizeof(int));
				do{
					printf("\nsayi girin :");scanf("%d",&*(dizi+kanak));	
					printf("devam icin '1' ");scanf("%d",&dvm);
					kanak++;
				}while(dvm==1);
					for(int i=0;i<kanak;i++){
						min=&*(dizi+i);
						for(int j=i;j<kanak;j++){
							if(*min>*(dizi+j))
								min=&*(dizi+j);
						}
						if(&*min!=&*(dizi+i)){
						say++;
						takas(&*min,&*(dizi+i));
					}
						
					}
						while(t!=kanak){
							if(ilk==NULL){
								ilk=yerac(*(dizi+t));
								gezen=ilk;
								t++;
							}
							else{
								gezen->sonraki=yerac(*(dizi+t));
								gezen=gezen->sonraki;
								t++;
							}
						}
								yaz();
						
		}
	
