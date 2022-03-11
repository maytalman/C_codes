#include<stdio.h>
#include<conio.h>
	int ebob(int k,int b){
		if(b%k==0)
		return k;
		else{
			return ebob(k-1,b);
		}
	}
	int main(){
		int x,y;
		printf("x,y :");scanf("%d%d",&x,&y);
		if(x<y)
		printf("\nebob : %d",ebob(x,y));
		else
		printf("\nebob : %d",ebob(y,x));
	}
