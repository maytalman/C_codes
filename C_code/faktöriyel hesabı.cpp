#include<stdio.h>
#include<conio.h>
	int main(){
	int x,carpim=1,i;
	printf("faktoriyelini istediginiz sayiyi girin:\t");scanf("%d",&x);
	for(i=x;i>=1;i--){
		carpim*=i;
	}
	printf("%d!= %d ",x,carpim);
	}
