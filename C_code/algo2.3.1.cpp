#include<stdio.h>
#include<conio.h>
	int ebobul(int bir,int iki,int kopya){
		if(bir==iki)
		return bir;
		int esittir=iki%bir,esittir2=kopya%bir;
		if(esittir==0&&esittir2==0)
		return bir;
		else{
			esittir=ebobul(bir-1,iki,kopya);
			return esittir;
			
		}
}
		int main(){
			int sayi1,sayi2,buyuk,kucuk;
			printf("\n\t ebobunu istediginiz sayilari giriniz: ");scanf("%d%d",&sayi1,&sayi2);
			if(sayi1<sayi2) {
			kucuk=sayi1; buyuk=sayi2;
			}
			else if(sayi2<sayi1){
			kucuk=sayi2; buyuk=sayi1;
			}
			else{
			kucuk=sayi2; buyuk=sayi1;
			}
			printf("\n\t ebob(%d,%d)= %d ",sayi1,sayi2,ebobul(kucuk,buyuk,kucuk));
		}
	
	
