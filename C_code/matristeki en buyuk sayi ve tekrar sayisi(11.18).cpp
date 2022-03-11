#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
	int main(){
		int enbuyuk=0,adet=0,dizi[4][4];
		srand(time(NULL));
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				dizi[i][j]=rand()%10;
			}
		}
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				printf(" %d ",dizi[i][j]);
			}
			printf("\n");
		}
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(dizi[i][j]>enbuyuk)
				enbuyuk=dizi[i][j];
			}
		}
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					if(enbuyuk==dizi[i][j])
					adet++;
				}
			}
			printf("matristeki en buyuk sayi: %d",enbuyuk);
			printf("\nen buyuk sayi matriste %d kere bulunuyor.",adet);
		
	}
