#include<stdio.h>
#include<conio.h>
#define A 8
	int main(){
		int i,pres,dizi[4];
		for(int i=0;i<4;i++){
			printf("\n sayi girin: ");scanf("%d",&dizi[i]);
		}
		i=0;
		pres=(dizi[i]<<A)|dizi[i+1];i++;
		pres=(pres<<A)|dizi[i+1];i++;
		pres=(pres<<A)|dizi[i+1];
		for(int i=31;i>=0;--i){
			if(pres&1<<i)
				putchar('1');
			else
				putchar('0');
				if(i%4==0)
				putchar(' ');
		}
	}
