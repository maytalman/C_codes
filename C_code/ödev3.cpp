#include<stdio.h>
#include<conio.h>
#include<string.h>
	int main(){
		char metin[300];int metin_u;
		printf("Duzenlemek istediginiz metni giriniz >>>>\n");gets(metin);
		metin_u=strlen(metin);
		printf("Metninizin duzenlenmis hali >>>>\n");
		for(int i=0;i<metin_u;i++){
			if(metin[i]>='A' && metin[i]<='Z'){
				metin[i]+=32;
			}
			else if(metin[i]>='a'&& metin[i]<='z')
				metin[i]=metin[i]-32;
			printf("%c",metin[i]);
		}
	}
