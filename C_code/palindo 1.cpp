#include<stdio.h>
#include<string.h>
#include<conio.h>
	int main(){
		char ilk[20],sozcuk[20],kuczos[20];
		int a=0,x,kanak=0;
		printf("\n istediginiz bir kelimeyi girin: ");gets(ilk);
		x=strlen(ilk);
		strcpy(sozcuk,ilk);
		for(int i=x-1;i>=0;i--){
			kuczos[a]=ilk[i];
			a++;
		}
		for(int i=0;i<x;i++){
			if(kuczos[i]==sozcuk[i])
			kanak++;
		}
		if(kanak==x)
		printf("palindromdur...");
		else
		printf("palindrom degildir...");
		*/
		
	}
