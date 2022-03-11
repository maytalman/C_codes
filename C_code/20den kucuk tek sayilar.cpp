#include<stdio.h>
#include<conio.h>
	int main(){
		printf("20'den kucuk tek sayilar:");
		for(int i=0;i<20;i++){
		    if(i%2==0) continue;
		
		        if(i%2!=0){
				printf("%d \n",i);
			}
			
		}
	}
