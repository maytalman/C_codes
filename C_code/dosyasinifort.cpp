#include<stdio.h>
#include<conio.h>
	int main(){
		FILE*dosya;
	//	dosya=fopen("ogrenciler.txt","w");
		dosya=fopen("ogrenciler.txt","r");
		char isim[3][10],numara[3][10];
		int notlar[3],i=0,toplam=0;
		if((dosya=fopen("ogrenciler.txt","r"))!=NULL){
		while(!feof(dosya)){
			fscanf(dosya,"%s %s %d",&numara[i],&isim[i],&notlar[i]);
			printf("\n%s %s %d ",numara[i],isim[i],notlar[i]);
			//toplam+=notlar[i];
			i++;
		}
	}
	
		//printf("\n sinif ortalamasi %d ",toplam/3);
	}
