#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
	int main(){
		int toplam=0,kontrol,matris[10][10];
		srand(time(NULL));
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				matris[i][j]=rand()%100;
				printf(" %d ",matris[i][j]);
				for(int a=2;a<matris[i][j];a++){
					kontrol=0;
					if(matris[i][j]%a==0){
					kontrol=1;break;}
			}
					if(matris[i][j]==2){
					kontrol=0;
					}
			
					if(kontrol==0){
					toplam+=matris[i][j];
				}
				
			}
		}
		printf("\n\n ASAL SAYILARIN TOPLAMI:=%d",toplam);
		
		
	}
