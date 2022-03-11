//ODEV2
#include<stdio.h>
#include<conio.h>
#include<string.h>
	int main(){
		char sozcuk[20],metin[200],k=0,kanak=0;
		printf("\n\t metninizi girin : ");gets(metin);
		printf("\n\t bir sozcuk girin : ");gets(sozcuk);
		for(int i=0;*(metin+i)!=NULL;i++){
			if(*(sozcuk+k)==*(metin+i)){
				kanak++;
				k++;
			}
		}
		if(kanak==strlen(sozcuk))
			printf("\n\taradiginiz sozcuk metinde bulunuyor");
		else
			printf("\n\tsozcuk yok");
		
	}

