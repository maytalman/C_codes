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
Stack *yerac(int x){//daha kolay olmasý için yeni düðüm açma iþlemini fonksiyonda yaptým
    Stack *eklenecek=new Stack;
    eklenecek->next=NULL;
    eklenecek->veri=x;
    return eklenecek;
}

Stack *push (Stack *top,Stack *eklenecek){//stack yapýsýna eleman ekleme fonksiyonu        
    eklenecek->next=top;                            
    top=eklenecek;
    return eklenecek;
}

Stack *pop(Stack *x){//stack mantýðýnda silme yapan fonksiyon
	                              
    if(x!=NULL){
    	top=x->next;
		free(x);
		return top;	
    }
    if (x->next==NULL)
    	free(x);
}

void write(Stack *x){//stack elemanlarýný son giren ilk çýkar mantýðýnda yazdýran fonksiyon

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
		while(1==1){//sonsuz döngü açtým ve kullanýcýya komutlarý gösteren menü yazdým
		printf("\n--push    :      |1|");
		printf("\n--pop     :      |2|");
		printf("\n--GERI AL :      |3|");
		printf("\n--YAZDIR  :      |4|");
		printf("\n\n--KOMUT GIRINIZ :  ");scanf("%d",&secim);
		int islem ;//son yapýlan iþlemin ne olduðunu anlamak için bir deðiþken tutuyorum
		switch(secim){//komutlarý switch case yapýsýnda kullanýyorum
				case 1 ://ekleme seçildiyse bu case bloðu çalýþacak.
				printf("\tSAYI: ");
						scanf("%d",&sayi);fflush(stdin);
						islemStack=push(islemStack,yerac(sayi));
						printf("\t\t%d EKLENDI !",sayi);
							islem =1;//yapýlan iþlemin ekleme iþlemi olduðunu tutuyor
				/*push fonsiyonuna islemStack göderiliyor ve yerac fonkdiyonuna sayý gönderilerek push fonsiyonuna gönderiliyor.
				push fonksiyonundan gelen düðüm yapýsýda islemStack yapýsýna return ediliyor.*/
					break;
				
				case 2 ://kullanýcý pop komutunu seçtiyse bu case bloðu çalýþýr
						geriStack=push(geriStack,yerac(islemStack->veri));
						printf("\t\t%d SILINDI !",islemStack->veri);
						islemStack=pop(islemStack);
							islem=2;//yapýlan iþlemin pop iþlemi olduðunu tutuyor
						/*bu blokta islemStack yapýsýnýn top elemaný geriStack yapýsýna atýlýyor ve islemStack poplanýyor.*/
					break;
				
				case 3 ://geri alma komutu seçildiðinde bu case bloðu çalýþacak
						if(islem==1)//önceki yapýlan iþlem push etmeyse bu blok çalýþýr
							islemStack=pop(islemStack);
						else if(islem==2){//önceki yapýlan iþlem poplamaysa bu blok çalýþýr geriStack elemaný islemStacke pushlanýr ve geriStack poplanýr.
							islemStack=push(islemStack,yerac(geriStack->veri));
							printf("\t\tSILINEN %d SAYISI GERI ALINDI !",geriStack->veri);
							geriStack=pop(geriStack);
						}
				
					break;
				
				case 4 ://Yaz komutu seçilirse bu case çalýþacak
					printf("\t\tISLEM STACK :  ");
					write(islemStack);
					break;
			
			}	
		}
	}

