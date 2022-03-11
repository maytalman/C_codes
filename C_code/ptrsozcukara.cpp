#include<stdio.h>
#include<conio.h>
#include<string.h>
char table[10][100];
void fiil_table(char table[10][100]){
	char word[20];
	int k=0;
	while(word != 'end'){
		printf("\n\t metninizi girin : ");gets(*(table+k));
		
	}
		printf("\n\t bir sozcuk girin : ");gets(word);	
}
void print_table(char table[10][100]){
	for(int i=0;i<strlen(table);i++){
		printf(" %s\n",*(table+i));
	}
}


	int main(){
	/*	char sozcuk[20],metin[200],k=0,kanak=0;
		
		for(int i=0;*(metin+i)!=NULL;i++){
			if(*(sozcuk+k)==*(metin+i)){
				kanak++;
				k++;
			}
		}
		if(kanak==strlen(sozcuk))
		printf("\n\taradiginiz sozcuk metinde bulunuyor");
		else
		printf("\n\tsozcuk yok");*/
		fiil_table(table);
	}

