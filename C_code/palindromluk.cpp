#include<stdio.h>
#include<conio.h>
#include<string.h>
	int main(){
		char duz[20],ters[20],kelime[20];
		int a,kanak=0,k=0;
		printf("\n\t Kontrol etmek istediginiz kelimeyi giriniz-->");gets(kelime);
		a=strlen(kelime);
		for(int i=0;kelime[i]!='\0';i++){
			duz[i]=kelime[i];
		}
		for(int i=a-1;i>=0;i--){
			ters[k]=kelime[i];
			k++;
	
		}
		for(int k=0;ters[k]!='\0';k++){
			printf("%c",ters[k]);
	}
	for(int j=0;duz[j]!='\0';j++){
		if(ters[j]==duz[j])
		kanak++;
	}
	
	
	
	if(kanak==a)
	printf("\n\t Palindromdur.");else printf("\n\t Palindrom degildir.");
		
		
		
	}
