#include<stdio.h>
#include<string.h>
	int main(){
		char metin[100],sozcuk[20];
		int a=0,adet=0;
		printf("cumle girin: ");gets(metin);
		printf("aratacagin sozcuk: ");gets(sozcuk);
			for(int i=0;metin[i]!='\0';i++){
			if(sozcuk[a]==metin[i]){
				a++;
				adet++;
			}
	}
		
			if(adet==strlen(sozcuk)){
			printf("bulunuyor.\n");
			printf("\tyeni hali-->");
				for(int i=0;metin[i]!='\0';i++){
					if(sozcuk[a]==metin[i]&&sozcuk[a+1]==metin[i+1]){
						metin[i]='.';
						a++;
					}
					else
					a=0;
					
			}
			for(int i=0;metin[i]!='\0';i++){
				printf("%c",metin[i]);
			}
	}
			else
			printf("yok.");
			
	
}

