#include<stdio.h>
#include<conio.h>
	int main(){
		int toplam=0,matris1[3][3],b,matris2[3][3],matriscarpim[3][3],matristoplam[3][3];
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("\t(%d,%d): ",i,j); scanf("%d",&matris1[i][j]);
			}
		}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf(" %d ",matris1[i][j]);
			}
			printf("\n");
		}
		for(int j=0;j<3;j++){
			for(int b=0;b<3;b++){
				printf("\t(%d,%d): ",j,b); scanf("%d",&matris2[j][b]);
			}
		}
		for(int j=0;j<3;j++){
			for(int b=0;b<3;b++){
				printf(" %d ",matris2[j][b]);
			}
			printf("\n");
		}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				for(int b=0;b<3;b++){
					toplam+=matris1[i][b]*matris2[b][j];
				}
				matriscarpim[i][j]=toplam;
				toplam=0;
			}
		}
		printf("\n\n");
		printf("\t >>>>matrisler carpimi<<<<<\n");
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				printf("\t %d ",matriscarpim[j][k]);
			}
			printf("\n\n");
		}
    	for(int i=0;i<3;i++){
    		for(int j=0;j<3;j++){
    			toplam=matris1[i][j]+matris2[i][j];
    			matristoplam[i][j]=toplam;
			}
		}
		printf("\t >>>>matrisler toplami<<<<\n");
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf(" \t %d ",matristoplam[i][j]);
			}
			printf("\n");
		}
		}
