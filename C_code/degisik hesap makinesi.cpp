#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

	int toplar(int a,int b){
		int sonuc;
		return sonuc=a+b;
	}
	float toplaro(float c,float d){
		float sonuc=c+d;
		return sonuc;
	}
	float toplara(float e,int f){
		float sonuc;
		return sonuc=e+f;
	}
	int cikarir(int a,int b){
		int sonuc=a-b;
		return sonuc;
	}
	float cikariro(float c,float d){
		float sonuc=c-d;
		return sonuc;
	}
	float cikarira(float e,int f){
		float sonuc=e-f;
		return sonuc;
	}
	int carpar(int a,int b){
		int sonuc=a*b;
		return sonuc;
	}
	float carparo(float c,float d){
		float sonuc=c*d;
		return sonuc;
	}
	float carpara(float e,int f){
		float sonuc=e*f;
		return sonuc;
	}
	float boler(int a,int b){
		float sonuc=a/b;
		return sonuc;
	}
	float bolero(float c,float d){
		float sonuc=c/d;
		return sonuc;
	}
	float bolera(float e,int f){
		float sonuc=e/f;
		return sonuc;
	}
	int us(int a,int b){
		int sonuc=pow(a,b);
		return sonuc;
	}
	float uso(float c,float d){
		float sonuc=pow(c,d);
		return sonuc;
	}
	float usa(float e,int f){
		float sonuc=pow(e,f);
		return sonuc;
	}
	float karekok(float a){
		float sonuc=sqrt(a);
		return sonuc;
	}
	int main(){
		int sa1,sa2,sonuc,cesit,secim;
		float o1,o2;
		char d;
	
		do{
				system("CLS");
		printf("\noncelikle sayi cesitlerimizi secelim: \n1-->ondalik,ondalik \n2-->tam,tam \n3-->ondalik,tam \n4-->tek bir sayi ile islem\n");scanf("%d",&cesit);
		switch(cesit){
			case 1:printf("\nyapacagimiz islemi secelim: \n1-->toplama \n2-->cikarma \n3-->carpma \n4-->bolme\n");scanf("%d",&secim);
			switch(secim){
				case 1:printf("1.ondalikli sayiyi giriniz: ");scanf("%f",&o1);
				       printf("2.ondalikli sayiyi giriniz: ");scanf("%f",&o2);
				       printf("%f + %f= %f",o1,o2,toplaro(o1,o2));break;
				case 2:printf("1.ondalikli sayiyi giriniz: ");scanf("%f",&o1);
				       printf("2.ondalikli sayiyi giriniz: ");scanf("%f",&o2);
				       printf("%f - %f= %f",o1,o2,cikariro(o1,o2));break;
				case 3:printf("1.ondalikli sayiyi giriniz: ");scanf("%f",&o1);
				       printf("2.ondalikli sayiyi giriniz: ");scanf("%f",&o2);
				       printf("%f * %f= %f",o1,o2,carparo(o1,o2));break;
				case 4:printf("1.ondalikli sayiyi giriniz: ");scanf("%f",&o1);
				       printf("2.ondalikli sayiyi giriniz: ");scanf("%f",&o2);
				       printf("%f / %f= %f",o1,o2,bolero(o1,o2));break;
				case 5:printf("1.ondalikli sayiyi giriniz: ");scanf("%f",&o1);
				       printf("2.ondalikli sayiyi giriniz: ");scanf("%f",&o2);
				       printf("%f ussu %f= %f",o1,o2,uso(o1,o2));break;
			}break;
			case 2:printf("\nyapacagimiz islemi secelim: \n1-->toplama \n2-->cikarma \n3-->carpma \n4-->bolme\n");scanf("%d",&secim);
			switch(secim){
				case 1:printf("1.tam sayiyi giriniz: ");scanf("%d",&sa1);
				       printf("2.tam sayiyi giriniz: ");scanf("%d",&sa2);
				       printf("%d + %d= %d",sa1,sa2,toplar(sa1,sa2));break;
				case 2:printf("1.tam sayiyi giriniz: ");scanf("%d",&sa1);
				       printf("2.tam sayiyi giriniz: ");scanf("%d",&sa2);
				       printf("%d - %d= %d",sa1,sa2,cikarir(sa1,sa2));break;
				case 3:printf("1.tam sayiyi giriniz: ");scanf("%d",&sa1);
				       printf("2.tam sayiyi giriniz: ");scanf("%d",&sa2);
				       printf("%d * %d= %d",sa1,sa2,carpar(sa1,sa2));break;
				case 4:printf("1.tam sayiyi giriniz: ");scanf("%d",&sa1);
				       printf("2.tam sayiyi giriniz: ");scanf("%d",&sa2);
				       printf("%d / %d= %f",sa1,sa2,boler(sa1,sa2));break;
				case 5:printf("1.tam sayiyi giriniz: ");scanf("%d",&sa1);
				       printf("2.tam sayiyi giriniz: ");scanf("%d",&sa2);
				       printf("%d ussu %d= %d",sa1,sa2,us(sa1,sa2));break;
				
			}break;
			case 3:printf("\nyapacagimiz islemi secelim: \n1-->toplama \n2-->cikarma \n3-->carpma \n4-->bolme\n");scanf("%d",&secim);
			switch(secim){
				case 1:printf("1.ondalikli sayiyi giriniz: ");scanf("%f",&o1);
				       printf("2.tam sayiyi giriniz: ");scanf("%d",&sa2);
				       printf("%f + %d= %f",o1,sa2,toplara(o1,sa2));break; 
				case 2:printf("1.ondalikli sayiyi giriniz: ");scanf("%f",&o1);
				       printf("2.tam sayiyi giriniz: ");scanf("%d",&sa2);
				       printf("%f - %d= %f",o1,sa2,cikarira(o1,sa2));break; 
				case 3:printf("1.ondalikli sayiyi giriniz: ");scanf("%f",&o1);
				       printf("2.tam sayiyi giriniz: ");scanf("%d",&sa2);
				       printf("%f * %d= %f",o1,sa2,carpara(o1,sa2));break; 
				case 4:printf("1.ondalikli sayiyi giriniz: ");scanf("%f",&o1);
				       printf("2.tam sayiyi giriniz: ");scanf("%d",&sa2);
				       printf("%f / %d= %f",o1,sa2,bolera(o1,sa2));break;  
				case 5:printf("1.ondalikli sayiyi giriniz: ");scanf("%f",&o1);
				       printf("2.tam sayiyi giriniz: ");scanf("%d",&sa2);
				       printf("%f usssu %d= %f",o1,sa2,usa(o1,sa2));break;  
			}break;
			case 4:printf("sayiyi girin: ");scanf("%d",&sa1);
				   printf("sayinin karekoku = %f ",karekok(sa1));break;
				
			
			
			       
		}
		printf("\n\t yeni islemler icin c tusuna cikmak icin off anlaminda o tusuna basin...");d=getch();
}while(d=='C'||d=='c');
	if(d=='o'||d=='O')
	printf("\n...................................................................................");
		
		
		
		
	}
