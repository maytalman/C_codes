#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
	int takas(int *x,int *y){
		int gecici;
		gecici=*x;
		*x=*y;
		*y=gecici;
	}
	int secme(int *dizi,int *b){
		int min;
		for(int i=0;i<*b;i++){
			min=i;
			for(int j=i;j<*b;j++){
				if(*(dizi+min)>*(dizi+j))
				min=j;
			}
			takas(&*(dizi+min),&*(dizi+i));
		}
	}
	int yaz(int *dizi,int *b){
		for(int i=0;i<*b;i++)
		printf(" %d ",*(dizi+i));
	}
	int main(){
		int *dizi=NULL,sayi=0,i=0;
		while(sayi>=0){
			printf("\n\t sayi : ");scanf("%d",&sayi);
			if(sayi<0) break;
			dizi=(int *)realloc(dizi,sizeof(int)*(i+1));
			*(dizi+i)=sayi;
			i++;
		}
		printf("\n\t negatife kadar girdiginiz sayilar: ");
			yaz(&*dizi,&i);
				printf("\n\t secmeli olarak kucukten buyuge siralanmis hali : ");
					secme(*&dizi,&i);
						yaz(&*dizi,&i);
	}
