#include<stdio.h>
#include<string.h>
	int main(){
		char ceg[10],seyn[10];
		int x,y,kanak=0,d=0;
		printf("birinci kelimeyi girin: ");gets(ceg);
		printf("ikinci kelimeyi girin: ");gets(seyn);
		if(strlen(ceg)==strlen(seyn)){
			for(int i=0;i<strlen(ceg);i++){
				if(ceg[i]==ceg[i]){
				kanak++;
			}
		}
		
			for(int k=0;k<strlen(seyn);k++){
				if(ceg[d]==seyn[k]){
				kanak--;
				d++;
			}
			}
				
			
			if(kanak!=0)
			printf("\n\tanagram degiller");
			else
			printf("\n\t anagramlar");
		}
		else
		printf("\n\t ayni uzunlukta bile degiller");
		
	}

