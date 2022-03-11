//ODEV1
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char *metin;
	int say=0,size=0,son=0;
	metin=(char *)malloc(sizeof(char)*200);
	printf("metni girebilirsin : ");gets(metin);
	size=strlen(metin);
	for(int i=0;i<size;i++){
		if(*(metin+i)>='A' && *(metin+i)<='Z')
		*(metin+i)=*(metin+i)+32;
	}
	for(int i=0;i<strlen(metin);i++){
		if(*(metin+i)==' ' || *(metin+i)=='.' || 
			*(metin+i)==','|| *(metin+i)=='?' ||
			*(metin+i)=='!'|| *(metin+i)==':'||
			*(metin+i)==';')
			say++;
	
			son=i;
	}
		if(son+1==size && *(metin+son)!='.')
		say++;
		printf("%d kelime",say);
}

	
