#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
	void dortgenciz(int en,int boy){
		for(int i=0;i<en;i++){
			for(int j=0;j<boy;j++){
				printf(" # ");
			}
			printf("\n");
		}
	}
	int main(){
		int x,y;
		char d;
		
		do{
		system("CLS");
		printf("\n\t enini ve boyunu giriniz: ");scanf("%d%d",&x,&y);
		dortgenciz(x,y);
		printf("tekrar cizmek ister misiniz?e/h");d=getch();
	}while(d=='e'||d=='E');
	if(d=='h'||d=='H')
	printf("\nprogram sonlandi...");
	
	}
