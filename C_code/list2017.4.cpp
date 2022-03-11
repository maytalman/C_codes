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
	struct dugum2{
		int veri;
		struct dugum2 *sonraki;
	};
	typedef dugum2 node2;
	node2 *ilk2=NULL,*gezen2=NULL;
	
		node2 *yerac2(int x){
			node2 *ekle=(node2 *)malloc(sizeof(node2));
			ekle->veri=x;
			ekle->sonraki=NULL;
		}
			void yaz2(){
				gezen2=ilk2;
					while(gezen2->sonraki!=NULL){
						printf("%d => ",gezen2->veri);
						gezen2=gezen2->sonraki;
					}
					printf("%d",gezen2->veri);
			}
			
			int main(){
				FILE *dos;
				int a;
				dos=fopen("finals.txt","r");
					while(!feof(dos)){
						fscanf(dos,"%d",&a);
							if(a%2!=0){
								if(ilk==NULL){
									ilk=yerac(a);
									gezen=ilk;
								}
								else{
									gezen->sonraki=yerac(a);
									gezen=gezen->sonraki;
								}
							}
							else{
								if(ilk2==NULL){
									ilk2=yerac2(a);
									gezen2=ilk2;
								}
								else{
									gezen2->sonraki=yerac2(a);
									gezen2=gezen2->sonraki;
								}
							}
					}
					yaz();
					printf("\n");
					yaz2();
					fclose(dos);
			}
