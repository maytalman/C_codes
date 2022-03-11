#include<stdio.h>
#include<conio.h>
	int main(){
		int dizi[10],j=1,kanak;
		for(int i=0;i<10;i++){
			printf("sayi girin:  ");scanf("%d",&dizi[i]);
	
		}
		    for(int i=0;i<10;i++){
			printf("%d",dizi[i]);
		}
		for(int i=0;i<10;i++){
			if(dizi[i]<dizi[j]){
				for(int j=0;j<j+2;j++){
					printf("%d",dizi[j]);
				}
				printf("\n");j++;
			}
		else 
		kanak=dizi[i];
		dizi[i]=dizi[j];
		dizi[j]=kanak;
		for(int j=0;j<j+2;j++){
			printf("%d",dizi[j]);
		}
		printf("\n");j++;
		}
		
	}
