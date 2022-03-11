#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
	int main(){
		FILE *dos1,*dos2;
		int b=sizeof(int)*2-1,x;
		dos1=fopen("hoppala.txt","w");
		dos2=fopen("cuppabala.txt","w");
		srand(time(0));
		for(int i=0;i<10;i++){
			fprintf(dos1,"%d  ",0+rand()%40);
		}
		fclose(dos1);
		dos1=fopen("hoppala.txt","r");
			for(int i=0;i<10;i++){
				fscanf(dos1,"%d",&x);
				for(int i=b;i>=0;i--){
					if(x&1<<3){
						x|=1<<5;
					}
					else{
						x&=~(1<<4);
					}
				}
				for(int i=b;i>=0;i--){
					if(x&1<<i)
						fprintf(dos2,"1");
					else
						fprintf(dos2,"0");
				}
				fprintf(dos2,"\n");
			}
		
	}
