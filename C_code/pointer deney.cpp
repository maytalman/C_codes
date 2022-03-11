#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
	int main(){
		char *ad;
		int a,k,m;
		char soyad[a];
		ad=(char *)malloc(a*sizeof(char));
		ad=(char *)realloc(ad,sizeof(char));
		printf(" a: ");scanf("%d",&a);fflush(stdin);
		printf(" ad: ");gets(ad);
		printf(" soyad: ");gets(soyad);
		k=strlen(ad);
		m=strlen(soyad);
			for(int i=0;i<k;i++)
			printf("\t%c",ad[i]);
				for(int i=0;i<k;i++)
				printf("\t%c",soyad[i]);
	}
