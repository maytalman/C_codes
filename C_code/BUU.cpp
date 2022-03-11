#include<stdio.h>
#include<conio.h>
#include<string.h>
	int main(){
		char sozcuk[20],c,kalin[5]={"aýou"},ince[5]={"eiöü"},sesli[9]={"aýoueiöü"};
		int adet_k=0,adet_i=0,adet_s=0;
		do
		{
		printf("\n\tSozcugunuzu giriniz--> ");gets(sozcuk);
		for(int k=0;sozcuk[k]!='\0';k++){
			for(int j=0;sesli[j]!='\0';j++){
				if(sozcuk[k]==sesli[j])
				adet_s++;
			}
		}
		
		for(int k=0;sozcuk[k]!='\0';k++){
			for(int j=0;kalin[j]!='\0';j++){
				if(sozcuk[k]==kalin[j])
				adet_k++;
			}
		}
		for(int k=0;sozcuk[k]!='\0';k++){
			for(int j=0;ince[j]!='\0';j++){
				if(sozcuk[k]==ince[j])
				adet_i++;
			}
		}
		if(adet_s==adet_k||adet_s==adet_i)
		printf("\n\tGirdiginiz sozcuk buyuk unlu uyumuna uyar.");
		else
		printf("\n\tGirdiginiz sozcuk buyk unlu uyumuna uymaz. ");
		printf("\n\n\tTekrar etmek ister misiniz? E/H");c=getch();
	}while(c=='e'||c=='E');
	if(c=='h'||c=='H')
	printf("\n\t>>>>program sonlandi<<<<<");
}
