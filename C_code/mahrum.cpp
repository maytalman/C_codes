#include<stdio.h>
	int main(){
		FILE *dosya;
		dosya=fopen("deneme.txt","w");
		fprintf(dosya,"ebrucum cicim feradým ogk");
		fclose(dosya);
	}
