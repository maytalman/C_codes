#include<stdio.h>
#include<stdlib.h>
#include<time.h>
	int main(){
		int dizi[100],namlu=0,tekrar[10],a=0;
		srand(time(NULL));
		for(int i=0;i<100;i++){
			dizi[i]=0+rand()%5;
			printf("%d ",dizi[i]);
		}
		for(int i=0;i<100;i++){
			if(dizi[i]==1&&dizi[i+1]==2&&dizi[i+2]==3){
			tekrar[a]=i;
			namlu++;
			a++;
		}
	}
	printf("\n\taradiginiz 1-2-3 ardisikligi yandaki indis numaralarinda tekrara basliyor-->");
	for(int j=0;j<a;j++){
		printf("%d\t",tekrar[j]);
	}
	
	
		printf("\n\t ve ardisik sekilde %d kez tekrar ediyor.",namlu);
		
		
	}
