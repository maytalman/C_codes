#include<stdio.h>
#include<stdlib.h>
#include<conio.h>	
	int main(){
		int satir,sutun,**matris;
		printf("satir sayisi : ");scanf("%d",&satir);
		printf("sutun sayisi : ");scanf("%d",&sutun);
		matris=(int **)malloc(satir*sizeof(int));
			for(int i=0;i<satir;i++){
				matris[i]=(int *)malloc(sutun*sizeof(int));
			}
				for(int i=0;i<satir;i++){
					for(int j=0;j<sutun;j++){
						printf("\n\t(%d,%d) : ",i,j);scanf("%d",&matris[i][j]);
					}
				}
				for(int i=0;i<satir;i++){
					for(int j=0;j<sutun;j++)
						printf(" %d ",matris[i][j]);
							printf("\n");
		}
		}
