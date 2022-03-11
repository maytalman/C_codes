#include<stdio.h>
#include<conio.h>
	int main(){
		char metin[300];int adet=0;
		printf("kelime sayisini bulmak istediginiz metni giriniz...\n");gets(metin);
		for(int i=0;metin[i]!='\0';i++){
			if(metin[i]==' ' ||metin[i]=='.' ||metin[i]==',' ||metin[i]=='?')
			adet++;
		}
		printf("\ngirdiniz metinde %d adet kelime vardir.",adet);
	}
