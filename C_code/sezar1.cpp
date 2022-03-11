#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
	int main(){
		int a,anahtar;
		char *msj;
		msj=(char *)malloc(a*sizeof(char));
		msj=(char *)realloc(msj,sizeof(char));
		printf("\n\t mesajiniz tahminen ne kadar uzun ? ");scanf("%d",&a);fflush(stdin);
		printf("\n\tanahtar uzunlugu: ");scanf("%d",&anahtar);fflush(stdin);
		printf("\n\t mesajinizi girebilirsiniz: ");gets(msj);
		for(int i=0;*(msj+i)!='\0';i++){
					if(*(msj+i)==' ')
						continue;
		*(msj+i)+=anahtar;
		
		}
		printf("\n\t mesajin sifreli hali : ");
		for(int i=0;*(msj+i)!='\0';i++){
			printf("%c",*(msj+i));
		}
		free(msj);
	}
