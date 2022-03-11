#include<stdio.h>
#include<conio.h>
#include<string.h>
	int main(){
		char kelime[20],tersi[20];int kelime_u,k=0,a;
	
	do
	{
		printf("\nistediginiz kelimeyi giriniz---->");gets(kelime);
		kelime_u=strlen(kelime);
		printf("kelime:\t");
		for(int i=0;kelime[i]!='\0';i++){
			printf("%c",kelime[i]);
		}
		printf("\ntersi:\t");
		for(int i=kelime_u-1;i>=0;i--){
			tersi[k]=kelime[i];
			printf("%c",tersi[k]);k++;
		}
		printf("\ntekrar yapmak ister misiniz? E/H");a=getch();
	}while(a=='E'|| a=='e');
	printf("\n\t\t>>>>>bitirdiniz<<<<<<");
}
