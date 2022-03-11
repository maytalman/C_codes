#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
	int main(){
		int *pas=NULL,kanak=1,i=0,sayi=0;
		while(sayi>=0){
			printf("\n\tsayi giriniz: ");scanf("%d",&sayi);
			if(sayi<0)
			break;
			if(sayi%5==0 && sayi%3==0){
				pas=(int *)realloc(pas,sizeof(int)*kanak);
				*(pas+(kanak-1))=sayi;	
				kanak++;
			}
		}
		printf("\n\t girilen sayilar arasinda 3 ve 5'e bolunen sayilar: ");
		for(int i=0;i<kanak-1;i++)
			printf(" %d ",*(pas+i));
			free(pas);
	}
