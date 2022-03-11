#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int toplam=0,matris1[2][2],matris2[2][2],matriscarpim[2][2];
	for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		printf("(%d,%d)",i,j);
		scanf("%d",&matris1[i][j]);
	}
	}
	 for(int i=0;i<2;i++){
	 	for(int j=0;j<2;j++){
	 		printf("%d",matris1[i][j]);
		 }
		 printf("\n");
	 }
	 for(int j=0;j<2;j++){
	 	for(int b=0;b<2;b++){
	 		printf("(%d,%d):",j,b);
	 		scanf("%d",matris2[j][b]);
		 }
	 }
	 for(int j=0;j<2;j++){
	 	for(int b=0;b<2;b++){
		 printf("%d",matris2[j][b]);
		 }
		 printf("\n");
	 }
	 for(int i=0;i<2;i++){
	 	for(int j=0;j<2;j++){
	 		for(int k=0;k<2;k++){
	 			toplam+=matris1[i][k]*matris2[k][j];
			 }
			 matriscarpim[i][j]=toplam;
			 toplam=0;
		 }
	 }
	 printf("\n");
     for(int i=0;i<2;i++){
     	for(int j=0;j<2;j++){
     		printf("%d",matriscarpim[i][j]);
		 }
		 printf("\n");
	 } 
}
