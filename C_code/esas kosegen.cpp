#include<stdio.h>
int main(){
int matris[5][5],toplam=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("(%d,%d)= ",i,j);scanf("%d",&matris[i][j]);
		}
	}
	printf("\n\n");
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("\t%d  ",matris[i][j]);
		}
		printf("\n\n");
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i+j==4||i==j)
			toplam+=matris[i][j];
		}
	}
	printf("%d",toplam);	
}
