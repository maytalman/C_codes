#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int matris[3][3],sutunt[3],toplam=0,k=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
				matris[i][j]=rand()%100;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("\t%d ",matris[i][j]);
		}
		printf("\n\n");
	}
	for(int j=0;j<3;j++){
		for(int i=0;i<3;i++){
		toplam+=matris[i][j];
	}
	sutunt[k]=toplam;
	toplam=0;
	k++;
	}
	
	for(int k=0;k<3;k++){
		printf("\n\t%d.sutun= %d",k+1,sutunt[k]);
	}
	}
