#include<stdio.h>
#define k 100
	char imla(char homi[],int boyut){
		for(int i=0;homi[i]!='\0';i++){
			if(homi[i]=='.'){
				homi[i+1]=homi[i+1]-32;
			}
		}
		for(int i=0;homi[i]!='\0';i++){
			printf("%c",homi[i]);
		}
		return homi[k];		
		}
		int main(){
			char bak[k];
			printf("bir metin girin: ");gets(bak);
			imla(bak,k);
		}
	
