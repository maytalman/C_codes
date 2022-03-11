#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
	int main(){
		FILE *milis;
		milis=fopen("sayilar.txt","w");
		srand(time(NULL));
		for(int i=0;i<100;i++){
			fprintf(milis,"%d\n",0+rand()%1000);
		}
		
		fclose(milis);
	}
