#include<stdio.h>
#include<conio.h>
#include<string.h>
	int main(){
		char metin[300],harfler[17]={"aeýioöuüAEIÝOÖUÜ"};int j=0;
		printf("Metninizi giriniz >>>>\n");gets(metin);
		for(int i=0;harfler[i]!='\0';i++){
			if(metin[j]==harfler[i])
		{
			metin[i]='*';
			j++;
		}
		printf("%c",metin[i]);
		}
			
	}
