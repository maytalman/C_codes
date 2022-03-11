#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define GUN_U 5
#define AY_U 4
#define TABAN_Y 1900
	void satiratla(){
		printf("\n");
	}
	void ikiliyaz(int gelen){   
		int a=sizeof gelen*4-1;
		for(int i=a;i>=0;--i){
			if(gelen&1<<i)
				putchar('1');
			else{
				putchar('0');
					if(i%4==0) putchar(' ');
		}
	}
}
	int main(){		
		int gun,ay,yil,tarih,secim,gun_mask=~(~0<<GUN_U),ay_mask=~(~0<<AY_U);			//gun_mask=~(1<<5); ise çýktý--> 1111 1111 1101 1111 
		char d;																			//gun_mask=~(~0<<5);ise çýktý--> 0000 0000 0010 0000
		
	do{
		system("CLS");
		printf("\t1->saklamak mi?\n\t2->cozmek mi? ");scanf("%d",&secim);				
		switch(secim){
			case 1:
				printf("\tgun: ");scanf("%d",&gun);
				printf("\tay: ");scanf("%d",&ay);
				printf("\tyil: ");scanf("%d",&yil);
				yil=yil-TABAN_Y;
				satiratla();
				ikiliyaz(gun);printf("\t\t(%d)",gun);
				satiratla();
				ikiliyaz(ay);printf("\t\t(%d)",ay);
				satiratla();
				ikiliyaz(yil);printf("\t\t(%d)",yil);
				satiratla();
				satiratla();
				printf("\n-------------------------------------------------------------------------------------------------------");
				tarih=(yil<<AY_U|ay)<<GUN_U|gun;
				satiratla();
				ikiliyaz(tarih);printf("\t\t(%d.%d.%d)",gun,ay,yil+TABAN_Y);
				printf("\nsayinin ondalik hali: %d",tarih);
				printf("\n\t tekrar etmek icin e tusuna cikmak icin c tusuna basiniz...");d=getch();break;
			case 2:
				printf("\tsayiyi giriniz: ");scanf("%d",&tarih);
				ikiliyaz(tarih);
				gun=tarih&gun_mask;						
				ay=(tarih>>GUN_U)&ay_mask;
				yil=tarih>>(GUN_U+AY_U);
				printf("\n\t gun: %d\n\t ay: %d\n\t yil: %d ",gun,ay,yil+TABAN_Y);	
				printf("\n\t tekrar etmek icin e tusuna cikmak icin c tusuna basiniz...");d=getch();
		}
	}while(d=='e'||d=='E');
	if(d=='c'||d=='C') printf("\n\t----program sonlandi-----");
}
