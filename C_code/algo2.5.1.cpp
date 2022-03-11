#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
	int takas(int *x,int *y){
		int gecici;
		gecici=*x;
		*x=*y;
		*y=gecici;
	}
	int ss(int *dizi){
		int *maks,gecici;
		for(int i=0;i<20;i++){
			maks=&*(dizi+i);
				for(int j=i+1;j<20;j++){
					if(*maks<*(dizi+j)){
						maks=&*(dizi+j);
					}
				}
				takas(&*(dizi+i),&*maks);
		}
	}
	int main(){
		int dizi[20];
		srand(time(0));
		printf("dizinin ilk hali-->");
		for(int i=0;i<20;i++)
		printf("%d  ",*(dizi+i)=0+rand()%100);
		printf("\ndizinin sirali hali-->");
		ss(&*dizi);
		for(int i=0;i<20;i++){
			printf("%d  ",*(dizi+i));
		}
	}
