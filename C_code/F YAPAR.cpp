#include<stdio.h>
#include<conio.h>
int main(){
	int i,j;
	for(int i=0;i<14;i++){
		if(i==0 || i==6){
			for(int j=0;j<8;j++){
			printf("# ");
			}
		}
		printf("#");
		printf("\n");
	}
}
