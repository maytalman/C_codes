#include<stdio.h>
#include<conio.h>
	int main(){
		int dizi[2][7];
	for(int satir=0;satir<1;satir++){
		for(int sutun=0;sutun<7;sutun++){
			printf("+ ",dizi[satir][sutun]);
		}
		printf("\n");
	}
	for(int satir=1;satir<2;satir++){
		for(int sutun=0;sutun<7;sutun++){
			if(sutun==0 && sutun==3 && sutun==6){
				printf("+ ",dizi[satir][sutun]);
			}
			else 
			printf("  ",dizi[satir][sutun]);
		}
}
	}
