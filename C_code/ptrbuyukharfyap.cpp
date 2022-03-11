#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
	int main(){
		char *metin;
		int kanak=0;
		metin=(char *)malloc(5*sizeof(char));
		metin=(char *)realloc(metin,sizeof(char));
		printf("metninizi girin: ");gets(metin);
		for(int i=0;*(metin+i)!='\0';i++){
			kanak++;
			if(kanak==strlen(metin))
			break;
			if(*(metin+i)=='.'||*(metin+i)=='?'||*(metin+i)=='!'||*(metin+i)==':'){
				*(metin+(i+1))=*(metin+(i+1))-32;
			}
			else if(i==0)
			*(metin+i)=*(metin+i)-32;
		
		}
		printf("\n\t duzeltmeden sonra metniniz : ");
		for(int i=0;*(metin+i)!='\0';i++)
			printf("%c",*(metin+i));
	}
