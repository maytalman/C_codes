#include<stdio.h>
#include<conio.h>
	int main(){
		FILE *rotro,*milis;
		rotro=fopen("sayilar2.txt","w");
		milis=fopen("sayilar.txt","r");
		int random[100],kanak=0,katnem=0;
		for(int i=0;i<100;i++){
			fscanf(milis,"%d",&random[i]);
		}
		fprintf(rotro,"100 sayinin icindeki asal sayilar:\n");
		for(int i=0;i<100;i++){
			for(int j=2;j<random[i];j++){
				if(random[i]%j==0){
					kanak=1;
					break;
					
				}
			}
			if(kanak==0||random[i]==2){
				fprintf(rotro,"%d\n",random[i]);
				katnem++;
			}kanak=0;
		}
		fprintf(rotro,"%d adet asal vardir.",katnem);
		fclose(milis);
		fclose(rotro);
	}
