#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct dugum{
    int veri;
    struct dugum *next;
};
typedef  dugum Stack;

Stack *islemStack=NULL,*geriStack=NULL,*top=NULL,*temp=NULL;
Stack *yerac(int x){//daha kolay olmas� i�in yeni d���m a�ma i�lemini fonksiyonda yapt�m
    Stack *eklenecek=new Stack;
    eklenecek->next=NULL;
    eklenecek->veri=x;
    return eklenecek;
}

Stack *push (Stack *top,Stack *eklenecek){//stack yap�s�na eleman ekleme fonksiyonu        
    eklenecek->next=top;                            
    top=eklenecek;
    return eklenecek;
}

Stack *pop(Stack *x){//stack mant���nda silme yapan fonksiyon
	                              
    if(x!=NULL){
    	top=x->next;
		free(x);
		return top;	
    }
    if (x->next==NULL)
    	free(x);
}

void write(Stack *x){//stack elemanlar�n� son giren ilk ��kar mant���nda yazd�ran fonksiyon

	if(x==NULL){
        printf("Stack Bos!");
	}
    while(x != NULL){
        printf("  %d",x->veri);
        x=x->next;
    }
    
}
	int main(){
		int sayi,secim;
		while(1==1){//sonsuz d�ng� a�t�m ve kullan�c�ya komutlar� g�steren men� yazd�m
		printf("\n--push    :      |1|");
		printf("\n--pop     :      |2|");
		printf("\n--GERI AL :      |3|");
		printf("\n--YAZDIR  :      |4|");
		printf("\n\n--KOMUT GIRINIZ :  ");scanf("%d",&secim);
		int islem ;//son yap�lan i�lemin ne oldu�unu anlamak i�in bir de�i�ken tutuyorum
		switch(secim){//komutlar� switch case yap�s�nda kullan�yorum
				case 1 ://ekleme se�ildiyse bu case blo�u �al��acak.
				printf("\tSAYI: ");
						scanf("%d",&sayi);fflush(stdin);
						islemStack=push(islemStack,yerac(sayi));
						printf("\t\t%d EKLENDI !",sayi);
							islem =1;//yap�lan i�lemin ekleme i�lemi oldu�unu tutuyor
				/*push fonsiyonuna islemStack g�deriliyor ve yerac fonkdiyonuna say� g�nderilerek push fonsiyonuna g�nderiliyor.
				push fonksiyonundan gelen d���m yap�s�da islemStack yap�s�na return ediliyor.*/
					break;
				
				case 2 ://kullan�c� pop komutunu se�tiyse bu case blo�u �al���r
						geriStack=push(geriStack,yerac(islemStack->veri));
						printf("\t\t%d SILINDI !",islemStack->veri);
						islemStack=pop(islemStack);
							islem=2;//yap�lan i�lemin pop i�lemi oldu�unu tutuyor
						/*bu blokta islemStack yap�s�n�n top eleman� geriStack yap�s�na at�l�yor ve islemStack poplan�yor.*/
					break;
				
				case 3 ://geri alma komutu se�ildi�inde bu case blo�u �al��acak
						if(islem==1)//�nceki yap�lan i�lem push etmeyse bu blok �al���r
							islemStack=pop(islemStack);
						else if(islem==2){//�nceki yap�lan i�lem poplamaysa bu blok �al���r geriStack eleman� islemStacke pushlan�r ve geriStack poplan�r.
							islemStack=push(islemStack,yerac(geriStack->veri));
							printf("\t\tSILINEN %d SAYISI GERI ALINDI !",geriStack->veri);
							geriStack=pop(geriStack);
						}
				
					break;
				
				case 4 ://Yaz komutu se�ilirse bu case �al��acak
					printf("\t\tISLEM STACK :  ");
					write(islemStack);
					break;
			
			}	
		}
	}

