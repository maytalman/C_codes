#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
	int main(){
		srand(time(NULL));
		FILE*dosya;
		dosya=fopen("sayilarim.txt","w+");
		int dizi[10],katne[10],bulduk,tekrar=0,tutulan=0;
		for(int i=0;i<10;i++)
			fprintf(dosya,"%d\t",katne[i]=0+rand()%10);
		for(int i=0;i<10;i++){
			tekrar=0;
			for(int j=i;j<10;j++){
				if(katne[i]==katne[j])
				tekrar++;
				if(tekrar>tutulan){
					tutulan=tekrar;
					bulduk=katne[i];
				}
			}
		}
		fprintf(dosya,"\n%d sayisi %d kez tekrar ediyor",bulduk,tutulan);
		fclose(dosya);
	}
