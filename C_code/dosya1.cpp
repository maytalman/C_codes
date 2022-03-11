#include<stdio.h>
	int main(){
		FILE*ilkim;
		ilkim=fopen("ilk dosya.txt","w");
		fputs("Annem cici babam cici saykom cici",ilkim);
		fclose(ilkim);
		
	}
