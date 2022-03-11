//ODEV3
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
	void change(char *metin){
		for(int i=0;i<strlen(metin);i++){
	
				if(*(metin+i)>='a' && *(metin+i)<='z')
					*(metin+i)=*(metin+i)-32;
				else if(*(metin+i)>='A' && *(metin+i)<='Z')
					*(metin+i)=*(metin+i)+32;
		}
	}
	int main(){
		char *p;
		p=(char *)malloc(5*sizeof(char));
		p=(char *)realloc(p,sizeof(char));
		printf("\n\tmetni girin : ");gets(p);
		change(&*p);
		printf("\t");
		for(int i=0;*(p+i)!='\0';i++)
		printf("%c",*(p+i));
	}
