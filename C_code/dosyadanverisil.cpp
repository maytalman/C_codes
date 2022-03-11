#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
	int main(){
		int x,y,a;
		FILE *dos,*dos1;
		dos=fopen("veriler.txt","w");
		fprintf(dos,"%d %d %d %d %d ",1,2,3,4,5);
		fclose(dos);
		dos=fopen("veriler.txt","r");
		dos1=fopen("veriler1.txt","w");
		printf("\nhangi sayiyi silem : ");scanf("%d",&y);
			for(int i=0;i<5;i++){
			fscanf(dos,"%d",&x);
			if(x==y)
			continue;
			fprintf(dos1,"%d  ",x);
		}
			fclose(dos);
			fclose(dos1);
	}
