#include<stdio.h>
#include<conio.h>
	int main(){
		int tc[11];
		for(int i=0;i<11;i++){
		printf("\ntc kimlik numaranizin %d.hanesini giriniz: ",i+1);scanf("%d",&tc[i]);
	}
		printf("tc kimlik numaraniz:\t");
		for(int i=0;i<11;i++){
			printf("%d",tc[i]);
		}
		printf("\ntc kimlik numaranizin son iki hanesi %d ve %d",tc[9],tc[10]);
}
