#include<stdio.h>
#include<conio.h>
	float olmali(int menzil,float sure){
		int mmenzil;
		float ssure;
		mmenzil=1000*menzil;
		ssure=3600*(float)sure;
		float v=(float)mmenzil/ssure;
		return v;
	}
	int main(){
		int m;
		int s;
		printf("\n\t Gidimesi gereken mesafeyi km cinsinden giriniz--->");scanf("%d",&m);
		printf("\n\t Ne kadar zamanimiz var?(saat cinsinden giriniz) ");scanf("%.2f",&s);
		printf("\n\t %d km mesafeye istediginiz %.2f saatte gitmek icin hiziniz %.2f m/s olmali...",m,s,olmali(m,s));
		
	}
