#include<stdio.h>
#include<conio.h>
#define boyut 6
struct yigin{
	int index;
	int dizi[boyut];
};
typedef yigin yeni_yigin;
yeni_yigin.index=-1;
	int dolumu(){
		if(yeni_yigin.index==-1) return 1; else return -1;
	}
	void yigina_ekle(int x){
		if(dolumu()==-1)	printf("yigin dolu eklenemez");
		else{
			yeni_yigin.index++;
			yeni_yigin.dizi[yeni_yigin.index]=x;
		}
	}
	void yigindan_cikar(){
		if(dolumu()==1)	printf("yigin bos cikarma yapilamaz.");
		else
			yeni_yigin.index--;
	}
	void yaz(){
		for(int i=yeni_yigin.index;i>=0;i--)
			printf("%d- ",yeni_yigin.dizi[i]);
	}
	int main(){
		int a;
		for(int i=0;i<5;i++){
		printf("sayi girin :");scanf("%d",&a);
		yigina_ekle(a);
	}
		yaz();
	}
