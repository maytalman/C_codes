#include<stdio.h>
#include<conio.h>
	void sonbas(int x,int y){
	int a=sizeof x;
		for(int i=a;i>0;--i){
			if(x&1<<i)
				putchar('1');
			else
				putchar('0');
		}
		for(int i=y;i>0;--y){
			if(x&1<<a){
				x=x<<1;
				x^=1<<0;
			}
			else{
			x=x<<1;
		}
		}
		for(int i=a;i>0;--i){
			if(x&1<<i)
				putchar('1');
			else
				putchar('0');
		}
}
		int main(){
			int sayi,kaymaca;
			printf("sayi ve kayma :");scanf("%d%d",&sayi,&kaymaca);
			sonbas(sayi,kaymaca);
		}
