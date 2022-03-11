#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
	int buyukciftibul(int *dizi){
		int buyuk=0;
		for(int i=0;i<100;i++){
			if(*(dizi+i)%2==0){
				if(buyuk<*(dizi+i))
				buyuk=*(dizi+i);
			}
		}
		return buyuk;
	}
	int main(){
		int random[100],a=0;
		srand(time(0));
		for(int i=0;i<100;i++){
			printf("%d-",*(random+i)=0+rand()%100);
		}
			for(int i=0;i<100;i++){
				if(*(random+i)==buyukciftibul(&*random))
				a++;
			}
		printf("\n\t En buyuk cift sayi : %d\n\tEn buyuk cift sayinin tekrar sayisi : %d",buyukciftibul(&*random),a);
	}
