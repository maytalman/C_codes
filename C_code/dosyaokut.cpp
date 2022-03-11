#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
	int main(){
		FILE *dosya;
		int a,b;
		dosya=fopen("okutma.txt","w");
		for(int i=0;i<5;i++){
			printf("sayi girin : ");scanf("%d",&a);
			fprintf(dosya," %d\n",a);
		}
		fclose(dosya);
		dosya=fopen("okutma.txt","r");
		for(int i=0;i<5;i++){
			fscanf(dosya,"%d",&b);
			printf("%d->",b);
		}
	}
