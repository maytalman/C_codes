#include<stdio.h>
#include<conio.h>
	int carp(int x,int y){
		if(y==0)
		return 0;
		if(y<0)
		return -x+carp(x,y+1);
			return x+carp(x,y-1);
	}
	int main(){
		int bir,iki;
		printf("\t toplayarak carpmak istediginiz sayilari girin: ");scanf("%d%d",&bir,&iki);
		printf("\t %d x %d = %d",bir,iki,carp(bir,iki));
	}
