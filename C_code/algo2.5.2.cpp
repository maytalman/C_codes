#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
	int main(){
		int random[100],*ikinci,a=0,k=0;
		ikinci=(int *)malloc(5*sizeof(int));
		ikinci=(int *)realloc(ikinci,sizeof(int));
		srand(time(0));
		printf("\n100 elemanli random dizi:\n");
		for(int i=0;i<100;i++){
			printf("%d- ",*(random+i)=0+rand()%100);
		}
		for(int i=0;i<100;i++){
			if(*(random+i)&1<<5)
			continue;
			else{
				a++;
				*(ikinci+k)=*(random+i);
				k++;
			}
		}
		printf("\n5.biti 0 olanlar:\n");
		for(int i=0;i<a;i++){
			printf("%d-",*(ikinci+i));
		}
		printf("-->%d tane \n",a);
		for(int i=0;i<a;i++){
			for(int j=8;j>0;--j){
				if(*(ikinci+i)&1<<j)
					putchar('1');
				else
					putchar('0');
			}
			printf("\n");
		}
		free(ikinci);
		
	}
