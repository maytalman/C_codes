#include<stdio.h>
#include<string.h>
int main(){
	char cumle[50];
		int gecici;
		printf("bir cumle girin: ");gets(cumle);
		for(int i=0;cumle[i]!='\0';i++){
			for(int j=i+1;cumle[j]!='\0';j++){
				if(cumle[i]>cumle[j]){
				gecici=cumle[i];
				cumle[i]=cumle[j];
				cumle[j]=gecici;
				}
				else continue;
			}			
	}
			for(int i=0;cumle[i]!='\0';i++){
				printf("%c",cumle[i]);
			}
	
		}
