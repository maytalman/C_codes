#include<stdio.h>
#include<conio.h>
	int main(){
		char metin[100],gecici;
		printf("\n\t metninizi girin : ");gets(metin);
			for(int i=0;*(metin+i)!=NULL;i++){
				if(*(metin+i)=='a'||*(metin+i)=='e'||*(metin+i)=='�'||*(metin+i)=='i'||*(metin+i)=='o'||*(metin+i)=='�'||*(metin+i)=='u'||*(metin+i)=='�')
				*(metin+i)=' ';
			}
			for(int i=0;*(metin+i)!=NULL;i++)
			printf("%c",*(metin+i));
}
