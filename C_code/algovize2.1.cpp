#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
	int eklemeli(int dizi[],int x){
		int gecici;
		for(int i=1;i<=x;i++){
			for(int j=i;j>0 && dizi[j]<dizi[j-1];j--){
				gecici=dizi[j];
				dizi[j]=dizi[j-1];
				dizi[j-1]=gecici;
			}
		}
	}
	int secmeli(int dizi[],int x){
	int i, j, enKucuk, temp;
	for (i=0; i<x-1; i++){
		enKucuk = i;
		for (j=i+1; j<x; j++){
			if (dizi[j] > dizi [enKucuk])
			enKucuk = j;
		}
		temp = dizi[i];
		dizi[i] = dizi[enKucuk];
		dizi[enKucuk] = temp;
	}
}
	
	int main(){
		srand(time(NULL));
		int random[20];
		for(int i=0;i<20;i++){
			printf("%d  ",random[i]=0+rand()%50);
		}
		printf("\n\n\ntek indislerin secerek buyukten kucuge siralanmasi:\n");
		secmeli(random,20);
		for(int i=0;i<20;i++){
			if(i%2!=0){
				printf("%d  ",random[i]);
			}
	}
	printf("\ncift indislerin eklemeyle kucukten buyuge siralanmasi:\n");
		eklemeli(random,20);
		for(int i=0;i<20;i++){
			if(i%2==0){
			printf("%d  ",random[i]);
			}
			else continue;
		}
}
