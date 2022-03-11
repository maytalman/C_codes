#include<stdio.h>
#include<conio.h>
	int main(){
		int x,y,kucuk,ebob;
		printf("x icin sayi girin:  "); scanf("%d",&x);
		printf("y icin sayi girin:  "); scanf("%d",&y);
		if(x<y)
		kucuk=x;
		else if(y<x)
		kucuk=y;
		else
		printf("x=y");
		for(int i=2;i<=kucuk;i++){
			if(x%i==0 && y%i==0)
			ebob=i;
		}
		printf("ebob:%d",ebob);
	}
