#include<stdio.h>
#include<string.h>
	struct cocuklar{
		char hala1[10],hala2[10],hala3[10],hala4[10],baba[10],amca[10];
		int h1yas,h2yas,h3yas,h4yas,amcayas,babayas;
	};
	struct ata{
		char bbanne[20],dede[20];
		int bbyas,ddyas;
		struct cocuklar cocuk;
	}ced;
	int main(){
		strcpy(ced.bbanne,"gulcemal");
		strcpy(ced.dede,"halil");
		ced.bbyas=75;
		ced.ddyas=77;
		strcpy(ced.cocuk.hala1,"nazire");ced.cocuk.h1yas=50;
		strcpy(ced.cocuk.hala2,"nazmiye");ced.cocuk.h2yas=46;
		strcpy(ced.cocuk.hala3,"zurbiye");ced.cocuk.h3yas=44;
		strcpy(ced.cocuk.hala4,"zulfiye");ced.cocuk.h4yas=35;
		strcpy(ced.cocuk.amca,"durmus");ced.cocuk.amcayas=37;
		strcpy(ced.cocuk.baba,"turan");ced.cocuk.babayas=44;
		printf("\n\t ATALAR\n\t Babaanne : %s\tYas : %d\n\t Dede     : %s\tYas : %d\n\n",ced.bbanne,ced.bbyas,ced.dede,ced.ddyas);
		printf("\n-------------------------------------------\n");
		printf("\n\t IKINCI KUSAK\n\t Hala1 : %s\t\tYas : %d",ced.cocuk.hala1,ced.cocuk.h1yas);
		printf("\n\t Hala2 : %s\tYas : %d",ced.cocuk.hala2,ced.cocuk.h2yas);
		printf("\n\t Hala3 : %s\tYas : %d",ced.cocuk.hala3,ced.cocuk.h3yas);
		printf("\n\t Hala4 : %s\tYas : %d",ced.cocuk.hala4,ced.cocuk.h4yas);
		
	}
