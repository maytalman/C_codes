#include<stdio.h>
#define k 100
#include<string.h>
	char diz(char cumle[],int boyut){
		int gecici;
		for(int i=0;cumle[i]!='\0';i++){
			for(int j=i+1;cumle[j]!='\0';j++){
				if(cumle[i]>cumle[j]){
				gecici=cumle[i];
				cumle[i]=cumle[j];
				cumle[j]=gecici;
			}
			else if(cumle[i]==' ')
			continue;
			
			}			
	}
				for(int i=0;cumle[i]!='\0';i++){
				printf("%c",cumle[i]);
			}
		return cumle[k];
		
}
	int main(){
		char hansel[k];
		printf("bir cumle yaziniz: ");gets(hansel);
	diz(hansel,k);

	}
