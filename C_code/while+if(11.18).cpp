#include<stdio.h>
	int main(){
		int i=1,adetcift=0,adettek=0;
	while(i<=100){
		if(i%2==0){
			printf(" %d cifttir \t:",i);
			adetcift++;
		}
		else
	{
		printf(" %d tektir \n",i);
		adettek++;
	}
	i++;
	}
	printf("\n\n\n\n");
	printf(" %d tane cift sayi vardir...\n",adetcift);
	printf(" %d tane tek sayi vardir...",adettek);
	}
