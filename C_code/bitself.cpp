#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int b=sizeof(int)*2-1;
	int kaydir(int x,int y){
		for(int i=b;i>=0;i--){
			if(x&1<<i)
				putchar('1');
			else
				putchar('0');
			if(i==4)
				printf(" ");
		}
				for(int i=0;i<y;i++){
						if(x&1<<b){
							x=x<<1;
							x|=1<<1;
						}
						else
						x=x<<1;
				}
		for(int i=b;i>=0;i--){
			if(x&1<<i)
				putchar('1');
			else
				putchar('0');
			if(i==4)
				printf(" ");
		}
	}
	int main(){
		int a,kay;
		printf("sayi gir: ");scanf("%d",&a);
		ikilikyaz(a);
		printf("kayma sayisi girin : ");scanf("%d",&kay);
		kaydir(a,kay);printf("\n");
	
	} 
