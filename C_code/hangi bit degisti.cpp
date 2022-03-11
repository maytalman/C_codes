#include<stdio.h>
#include<stdio.h>
	int main(){
		int has,has_d[32],devsirme,dev_d[32],a=sizeof has*2,m=0,k=0,bit;
		printf("\n\t sayinizi giriniz: ");scanf("%d",&has);
		printf("\n\t ikilik olarak sayiniz-->");
		for(int i=a-1;i>=0;--i){
			if(has&1<<i)
				putchar('1');
			else{
			putchar('0');
				if(i%4==0)
					putchar(' ');
				
	}
		}
		for(int i=a-1;i>=0;--i){
			if(has&1<<i){
				has_d[k]=1;
				k++;
			}
			else{
			has_d[k]=0;
			k++;
		}
	}
		printf("\n\t hangi biti degistirdiginizi tahmin edecegim sayiyi girin: ");scanf("%d",&devsirme);
		printf("\n\t degisen sayinin ikilik hali-->");
		for(int i=a-1;i>=0;--i){
			if(devsirme&1<<i)
				putchar('1');
			else{
				putchar('0');
					if(i%4==0)
						putchar(' ');
	}
		}
		for(int i=a-1;i>=0;--i){
			if(devsirme&1<<i){
				dev_d[m]=1;
				m++;
			}
			else{
				dev_d[m]=0;
				m++;
			}
		}

		for(int i=a-1;i>=0;--i){
			if(has_d[i]!=dev_d[i])
			bit=i;
		}
		printf("\n\t %d.bit degistirilmistir.",8-(bit+1));
		
		
		
		
		
		
		
	}
