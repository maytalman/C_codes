#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
	int main(){
		char *sozcuk,gecici,x;
		sozcuk=(char *)malloc(5*sizeof(char));
		sozcuk=(char *)realloc(sozcuk,sizeof(char));
		printf("\n\tBir sozcuk girin: ");gets(sozcuk);
		x=strlen(sozcuk);
		for(int i=0;i<x;i++)
		printf("%c",*(sozcuk+i));
			for(int i=0;i<x+1;i++){
				if(*(sozcuk+i)==NULL){
				gecici=*sozcuk;
				*sozcuk=*(sozcuk+(i-1));
				*(sozcuk+(i-1))=gecici;
			}
		}
		printf("\n");
		for(int i=0;*(sozcuk+i)!=NULL;i++)
		printf("%c",*(sozcuk+i));
		free(sozcuk);
	}
