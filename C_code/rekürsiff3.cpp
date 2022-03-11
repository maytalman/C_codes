#include<stdio.h>

	int yaz(int x){
		if(x==1){
		printf("1 ");
		return 0;	
		}
		else
		printf("%d ",x);
		return yaz(x-1);
	}
	
	int usal(int x,int y){
		if(y==1)
		return x;
		else{
			return x*usal(x,y-1);
		}
	}
	
	int ebob(int k,int b){
		if(b%k==0) return k;
		else{
			return ebob(k-1,b);
		}
	}
	
	int ekok(int k,int b){
		return k*b/ebob(k,b);
	}
	
	int tcarp(int k,int b){
	if(k==0) return 0;
	if(k<0) 
		return -b+tcarp(k+1,b);
	return b+tcarp(k-1,b);
	}
	
	int fibo(int x){
		if(x==1) return 1;
		if(x==0) return 0;
		else
		return fibo(x-1)+fibo(x-2);
	}
	int a=0;
	int fiboyaz(int x){
		if(x==a)
		printf("%d ",fibo(x));
		else{
			printf("%d ",fibo(a+1)); 
			a++;	
		}
	}
	
	int main(){
		int a,c,d,h;
		printf("a gir: ");scanf("%d",&a);
		yaz(a);
		printf("\nus %d",usal(3,3));
		printf("\nebob : %d ",ebob(10,20));
		printf("\nekok : %d ",ekok(10,20));
		printf("\ncarpmak istenen sayilar :");scanf("%d%d",&c,&d);
		if(c<d)
		printf(" \nsonuc %d",tcarp(c,d));
		else if(d<c)
		printf(" \nsonuc %d",tcarp(d,c));
		else
		printf(" \nsonuc %d",tcarp(c,c));
		printf("\nkacinci fibonacci sayisi : ");scanf("%d",&h);
		printf(" %d ",fibo(h));
		printf("\n");
		fiboyaz(h);
	}
