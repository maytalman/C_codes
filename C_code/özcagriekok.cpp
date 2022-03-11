#include<stdio.h>
#include<conio.h>
	int ebobul(int bir,int iki){
		if(iki==0)
		return bir;
		else{
		int sonuc=ebobul(iki,bir%iki);
		return sonuc;	
		}
		
	}
	int ekokbul(int bir,int iki){
		return bir*iki/ebobul(bir,iki);
	}
	int main(){
		int x,y,kucuk,buyuk;
		printf("\t sayilari girin: ");scanf("%d%d",&x,&y);
		if(x<y){
			kucuk=x; buyuk=y;
		}
		else if(y<x){
			kucuk=y; buyuk=x;
		}
		else{
			kucuk=y; buyuk=x;
		}
		printf("\t ekok(%d,%d)= %d",buyuk,kucuk,ekokbul(buyuk,kucuk));
	}
