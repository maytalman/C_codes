#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
	int main(){
		int random[100],gecici,maks,temp;
		srand(time(NULL));
		printf("\t 100 adet random sayi ile olusturulan dizi:\n");
		for(int i=0;i<100;i++){
			printf("%d  ",random[i]=0+rand()%100);
			if(i%10==0 && i!=0) putchar('\n');
		}
		for(int i=0;i<50;i++){
			maks=i;
				for(int j=i+1;j<50;j++){
					if(random[maks]<random[j])
					maks=j;
			}
					gecici=random[i];
					random[i]=random[maks];
					random[maks]=gecici;
			}
			printf("\n\t secmeli olarak b-->k siralanan ilk elli eleman:\n\t");
				for(int i=0;i<50;i++)
					printf("%d  ",random[i]);
		for(int i=50;i<100;i++){
			for(int j=i;j>0 && random[j]<random[j-1];j--){
					temp=random[j];
					random[j]=random[j-1];
					random[j-1]=temp;
			}
		}
			printf("\n\t eklemeli olarak k-->b siralanan son elli eleman:\n\t ");
				for(int i=50;i<100;i++)
					printf("%d  ",random[i]);			
}
