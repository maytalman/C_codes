#include<stdio.h>
	int ebobbul(int top,int tufek){
		int enkucuk,sonuc;
		if(top<tufek){
			enkucuk=top;
		}
		else if(tufek<top){
			enkucuk=tufek;
		}
		for(int i=2;i<=enkucuk;i++){
			if(top%i==0 && tufek%i==0){
				sonuc=i;
			}
		}
		return sonuc;
	}
	int main(){
		int sayi1,sayi2;
		printf("iki sayi girin : ");scanf("%d%d",&sayi1,&sayi2);
		printf("eboblari : %d ",ebobbul(sayi1,sayi2));
	}
