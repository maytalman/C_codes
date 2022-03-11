#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
	int main(){
		int dizi[100],*al,a=0,b=sizeof(int)*2-1;
		al=(int *)malloc(sizeof(int)*5);
		al=(int *)realloc(al,sizeof(int));
		srand(time(0));
		for(int i=0;i<100;i++){
			printf(" %d\n",*(dizi+i)=0+rand()%100);
		}
			for(int i=0;i<100;i++){
				if(*(dizi+i)&1<<5)
				continue;
				else{
					*(al+a)=*(dizi+i);
					a++;
				}
			}
			for(int i=0;i<a;i++){
				for(int j=b;j>=0;j--){
					if(*(al+i)&1<<j)
						putchar('1');
					else
						putchar('0');
				}
				printf("\n");
			}
	}
