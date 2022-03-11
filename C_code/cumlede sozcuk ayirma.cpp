#include<stdio.h>
#include<string.h>
	int main(){
		int uzunluk[5],adet=0,harf=0,k=0;
		char cumle[100];
		printf("\n\t bir cumle giriniz: ");gets(cumle);
		for(int i=0;i<=strlen(cumle);i++){
			if(cumle[i]==' '||cumle[i]=='\0')
			adet++;
		}
		printf("\t\n");
		for(int i=0;cumle[i]!='\0';i++){
			printf("%c",cumle[i]);
			if(cumle[i]==' ')
			printf("\t\n");
		}
		printf(" \n%d adet kelime vardir",adet);
	
	}
