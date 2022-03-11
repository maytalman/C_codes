#include<stdio.h>
#include<conio.h>
#include<string.h>
	int main(){
		char kelime1[20],kelime2[20],sesli[10]={'a','e','i','ý','o','ö','u','ü'},tekrar1[20],tekrar2[20],kanak=0;
		printf("\n\t Birinci kelimeyi giriniz-->");gets(kelime1);
		printf("\n\t Ikinci kelimeyi giriniz-->");gets(kelime2);
		if(strlen(kelime1)==strlen(kelime2)){
		printf("\n\t\t");
		for(int i=0;kelime1[i]!='\0';i++){
			for(int j=0;sesli[j]!='\0';j++){
				if(kelime1[i]==sesli[j])
					kelime1[i]='*';
			}
			tekrar1[i]=kelime1[i];
		}
		printf("\n\t\t");
		for(int i=0;kelime2[i]!='\0';i++){
			for(int j=0;sesli[j]!='\0';j++){
				if(kelime2[i]==sesli[j])
				kelime2[i]='*';
			}
			tekrar2[i]=kelime2[i];
		}
		
		for(int i=0;tekrar1[i]!='\0';i++){
			if(tekrar2[i]==tekrar1[i])
			kanak++;
		}
		if(kanak==strlen(tekrar2)){
			printf("\n\t\tGirdiginiz kelimeler silahla salih gibidir.\n\t\t");
		}
		else
		printf("Girdiginiz kelimeler silah salih yonunden ayni degildir.");
	
	
}
	else
	printf("\n\t\t>>>>>>>>Kelimeleriniz ayni uzunlukta bile degil<<<<<<<");
	}
