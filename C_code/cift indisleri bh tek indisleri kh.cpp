#include<stdio.h>
	int main(){
		char cumle[100];
		printf("\n\t  bir cumle giriniz: ");gets(cumle);
		for(int i=0;cumle[i]!='\0';i++){
			if(i%2==0){
				if(cumle[i]>='a'&&cumle[i]<='z')
				cumle[i]=cumle[i]-32;
			}
			else
			if(cumle[i]>='A'&&cumle[i]<='Z')
			cumle[i]=cumle[i]+32;
		}
		for(int i=0;cumle[i]!='\0';i++){
			printf("%c",cumle[i]);
		}
	}
