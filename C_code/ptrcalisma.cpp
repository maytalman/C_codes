#include<stdio.h>
#include<conio.h>
	int main(){
		int x,*ptr,y,*ptr1;
		x=10;
		y=12;
		ptr=&x;
		ptr1=&y;
		printf("ptr : %d",*ptr);
	}
