#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
	/*void sonbas(int x,int y){
	int a=sizeof x;
		for(int i=a;i>0;--i){
			if(x&1<<i)
				putchar('1');
			else
				putchar('0');
		}
		printf("\n");
		for(int i=y;i>0;--i){
			if(x&1<<a){
				x=x<<1;
				x^=1<<0;
			}
			else{
			x=x<<1;
		}
		}
		for(int i=a;i>0;--i){
			if(x&1<<i)
				putchar('1');
			else
				putchar('0');
		}
}
		int main(){
			int sayi,kaymaca;
			printf("sayi ve kayma :");scanf("%d%d",&sayi,&kaymaca);
			sonbas(sayi,kaymaca);
		}*/
	/*	int main(){
			int dizi[10],c=0,d=0;
			for(int i=0;i<10;i++)
			dizi[i]=0+rand()%50;
				for(int i=0;i<10;i++){
						if(dizi[i]&1<<3){
							c++;
								dizi[i]&=~(1<<2);
									for(int j=8;j>0;--j){
										if(dizi[i]&1<<j)
											putchar('1');
										else
											putchar('0');
									}
									printf("\n");
						}
						else{
							d++;
								dizi[i]|=1<<5;
								for(int j=8;j>0;--j){
										if(dizi[i]&1<<j)
											putchar('1');
										else
											putchar('0');
									}
									printf("\n");
								
						}
				}
	}*/
	/*int ebob(int kucuk,int buyuk){
		if(buyuk==0)
		return	kucuk;
		else{
			int sonuc=ebob(buyuk,kucuk%buyuk);
			return sonuc;
		}
}
	int ekok(int kucuk,int buyuk){
		return (buyuk*kucuk)/ebob(kucuk,buyuk);
	} 
		int main(){
			int x,y,buyuk,kucuk;
			printf("sayilar: ");scanf("%d%d",&x,&y);
			if(x<y){
				buyuk=y;kucuk=x;
			}
			else if(y<x){
				buyuk=x;kucuk=y;
			}
			else{
				buyuk=x;kucuk=y;
			}
			printf("ebob(%d,%d)= %d \nekok(%d,%d)= %d",buyuk,kucuk,ebob(kucuk,buyuk),buyuk,kucuk,ekok(kucuk,buyuk));
		}
		*/
		int kacsayi(int n){
			if(n==0)
			return 0;
			else
			return 1+kacsayi(n-1);
		}
		int ortalama(int n){
			int sonuc,toplam;
			if(n==0){
				return 0;
			}
			else{
				int toplam=n+ortalama(n-1);
				return toplam;
		}
			
		}
		int yaz(int n){
			if(n==0){
			putchar('0');
			return 0;
		}
			else{
				printf("%d ",n);
				return yaz(n-1);
			}
		}
			int fibonaci(int x){
			if(x==1)
			 return 1;
			else if(x==0)
			 return 0;
			else{
				int sonuc=fibonaci(x-1)+fibonaci(x-2);
			}
		}
		int us(int x,int y){
			if(y==0) return 1;
			else{
				return x*us(x,y-1);
			}
		}
		int toplamacali(int x,int y){
			if(y==0) return 0;
			else{
				return x+toplamacali(x,y-1);
			}
		}
		int cikarmacali(int x,int y){
			if(x==0) return 0;
			else{
				return 1+cikarmacali(x-y,y);
			}
		}
		int zitoplacarp(int x,int y){
			if(y==0) return 0;
			if(y<0)
			return (-x)+zitoplacarp(x,y+1);
				return x+zitoplacarp(x,y-1);
		}
		int quickly(int dizi[],int x,int y){
			int i=x-1,gecici,dayanak=dizi[y];
			for(int j=x;j<y;j++){
				if(dizi[j]<dayanak){
					i++;
					gecici=dizi[j];
					dizi[j]=dizi[i];
					dizi[i]=gecici;
				}
			}
			gecici=dizi[y];
			dizi[y]=dizi[i+1];
			dizi[i+1]=gecici;
			return i+1;
	}
		int cagirma(int dizi[],int sol,int sag){
			int gelen;
			if(sol<sag){
				gelen=quickly(dizi,sol,sag);
				cagirma(dizi,sol,gelen-1);
				cagirma(dizi,gelen+1,sag);
			}
		}
		int secmece(int dizi[],int x){
			int min,gecici;
			for(int i=0;i<x;i++){
				min=i;
					for(int j=i;j<x;j++){
						if(dizi[j]<dizi[min])
						min=j;
					}
					gecici=dizi[min];
					dizi[min]=dizi[i];
					dizi[i]=gecici;
			}
		}
		int eklemece(int dizi[],int x){
			int gecici;
			for(int i=1;i<=x;i++){
				for(int j=i;j>0 && dizi[j]<dizi[j-1];j--){
					gecici=dizi[j-1];
					dizi[j-1]=dizi[j];
					dizi[j]=gecici;
				}
			}
		}
		int babilim(int dizi[],int x){
			int gecici;
			for(int i=0;i<x;i++){
				for(int j=i+1;j<x;j++){
					if(dizi[j]>dizi[x]){
						gecici=dizi[i];
						dizi[i]=dizi[j];
						dizi[j]=gecici;
					}
				}
			}
		}
		int main(){
			int a,b,x,d,c,e,f,g,h,dizi[10]={1,98,55,44,66,33,11,25,74,33};
			printf("x: ");scanf("%d",&x);
			//yaz(x);
			//printf("\nortalama: %d",ortalama(x)/kacsayi(x));
			//printf("\n%d.fibonacci sayisi: %d",x,fibonaci(x));
			//printf("\nus ve taban :");scanf("%d%d",&d,&c);
			//printf("\n%d ussu %d =%d ",d,c,us(d,c));
			//printf("\n carpma icin iki sayi: ");scanf("%d%d",&a,&b);
			//printf("%d x %d = %d",a,b,toplamacali(a,b));
			//printf("\n bölme icin iki sayi: ");scanf("%d%d",&e,&f);
			//printf("%d : %d = %d",e,f,cikarmacali(e,f));
			//printf("\n iki sayi girin mumkkunse zit isaretleri test edebilecegimiz: ");scanf("%d%d",&g,&h);
			//printf("\n %d x %d= %d",g,h,zitoplacarp(g,h));
			cagirma(dizi,0,9);
			for(int i=0;i<10;i++)
				printf("%d    ",dizi[i]);
				printf("\n");
			secmece(dizi,10);
			for(int i=0;i<10;i++)
				printf("%d    ",dizi[i]);
				printf("\n");
			eklemece(dizi,10);
			for(int i=0;i<10;i++)
				printf("%d    ",dizi[i]);
				printf("\n");
			babilim(dizi,10);
			for(int i=0;i<10;i++)
				printf("%d    ",dizi[i]);
		}
	
	
