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
	int secmeli(int *dizi){
		int *min;
		for(int i=0;i<20;i++){
			min=&*(dizi+i);
			for(int j=i;j<20;j++){
				if(*(dizi+j)<*min)
					min=&*(dizi+j);
			}
			takas(&*min,&*(dizi+i));
		}
	}
	int main(){
		int *nbr;
		nbr=(int *)malloc(sizeof(int)*20);
		srand(time(0));
		for(int i=0;i<20;i++){
			printf("%d \n",*(nbr+i)=0+rand()%100);
		}
		secmeli(&*nbr);
		for(int i=0;i<20;i++)
		printf("%d  ",*(nbr+i));
		
	}
