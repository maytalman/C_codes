#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
	int main(){
		int bcift=0,x;
		FILE *dos;
		dos=fopen("enbuyukciftinibul.txt","w");
		for(int i=0;i<20;i++){
			fprintf(dos,"%d  ",0+rand()%60);
		}
		fclose(dos);
		dos=fopen("enbuyukciftinibul.txt","r");
		while(!feof(dos)){
			fscanf(dos,"%d",&x);
			if(x>bcift && x%2==0)
				bcift=x;
			else
			continue;
		}
		printf("%d en buyuk cift",bcift);
	}
