#include<stdio.h>
#include<conio.h>
	int main(){
		int dizi[5][5];
		for(int i=0;i<2;i++){			
			for(int j=0;j<5;j++){
				if(j==2)
				printf("  * ",dizi[i][j]);
				else 
				printf(" ",dizi[i][j]);
			
			}
			printf("\n");
		}
		for(int i=0;i<5;i++){
			printf("* ");
		}
		printf("\n");
			for(int i=0;i<2;i++){			
			for(int j=0;j<5;j++){
				if(j==2)
				printf("  * ",dizi[i][j]);
				else 
				printf(" ",dizi[i][j]);
		}
		printf("\n");
}
	}
	
