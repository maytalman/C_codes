#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
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
	void *silbakam(int kanak){
		if(kanak==1)
			return 0;
		else{
			gezen=ilk;
			ilk=gezen->sonraki;
			free(gezen);
			return silbakam(kanak-1);
		}
	}
	int main(){
		int a,kanak=0,sil,say=0;
		FILE *dos1,*dos2;
		dos1=fopen("final.txt","r");
		while(!feof(dos1)){
			fscanf(dos1,"%d",&a);
			kanak++;
				if(ilk==NULL){
					ilk=yerac(a);
					gezen=ilk;
					}
				else{
					gezen->sonraki=yerac(a);
					gezen=gezen->sonraki;
				}
				
			
		}
		fclose(dos1);
						if(kanak%2==0)
							sil=kanak/2;
						else
							sil=(kanak+1)/2;
						printf("kanak=%d sil=%d",kanak,sil);
							gezen=ilk;
								while(gezen->sonraki!=NULL){
									say++;
									if(say==sil-1){
										gecici=gezen->sonraki->sonraki;
										free(gezen->sonraki);
										gezen->sonraki=gecici;
									}
									else
									gezen=gezen->sonraki;
								}
									dos2=fopen("duzenlenen.txt","w");
									gezen=ilk;
									while(gezen->sonraki!=NULL){
										fprintf(dos2,"%d => ",gezen->veri);
										gezen=gezen->sonraki;
									}
										fprintf(dos2,"%d ",gezen->veri);
		fclose(dos2);
		silbakam(kanak);
		if(ilk==NULL)
		printf("\n liste bos");
		
			
	}
