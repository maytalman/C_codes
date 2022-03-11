#include<stdio.h>
#include<conio.h>
	int main(){
		char aga[500],aratac;
		int mekan[500],kanak=0,k=0;
		printf("\n\tOncelikle metninizi giriniz---> ");gets(aga);
		printf("\n\tAratmak istediginiz harfi giriniz--->");scanf("%c",&aratac);
		for(int i=0;aga[i]!='\0';i++){
			if(aga[i]==aratac){
				kanak++;
				mekan[k]=i;
				k++;
			}
		}
		printf("\n\tAradiginiz harf %d kez bulunuyor.",kanak);
		printf("\n\tAradiginiz harf asagidaki indis numaralarinda bulunuyor.\n");
		
		for(int i=0;i<k;i++){
			printf(" %d  ",mekan[i]);
		}
	}
