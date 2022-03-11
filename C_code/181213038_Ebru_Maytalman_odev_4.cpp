#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include<locale.h>

typedef struct {
    int musteri_no;
    char ad[20], soyad[20];
} Musteri;

Musteri veri_liste[10];
int hash_tablo[10][2];
Musteri kisi;

int Ekle(Musteri  kisi);

	void ilkle(){//Bu fonksiyonla veri liste ve hash tablo elemanlarýný ilk olarak -1 yapýyorum
		for(int i=0;i<10;i++){
				hash_tablo[i][0]=-1; 
				hash_tablo[i][1]=-1;
				veri_liste[i].musteri_no=-1;
		        strcpy(veri_liste[i].ad,"-1");
		        strcpy(veri_liste[i].soyad,"-1");
				
			}
	}
	
	void Dosya_Oku(){//dosyadan veri okuma fonksiyonu
	  FILE*dosya=fopen("veri.txt","r");
		while(!feof(dosya)){   
			Musteri kisi;//Musteri tipinde bir kisi tanýmladým
		    fscanf(dosya,"%d%s%s",&kisi.musteri_no,kisi.ad,kisi.soyad);//burda okuyup kisinin no,ad,soyad bilgilerini atýyorum
	        Ekle(kisi);//daha sonrada veri liste ve hash tablosuna eklenmesi için ekle fonksiyonuna gönderiyorum
	  }
	
	}
	
	int hash (Musteri kisi){//hash tablosunda hangi indekse eklenmesi gerektiðini 10 ile mod alarak bu fonksiyonla buluyorum
		return kisi.musteri_no % 10;
	}
	
	int Ekle(Musteri  kisi){
			int index=hash(kisi);//hangi indekse atýlacaðýný fonksiyondan alýp index deðiþkenine attým
			int next,son,k;

			if(hash_tablo[index][0]==-1){//indeks  -1 ise yani boþsa bu blok çalýþacak veri liste ve hash tablosu doldurulacak
				hash_tablo[index][0]= kisi.musteri_no;
		 		veri_liste[index].musteri_no=kisi.musteri_no;                   
				strcpy(veri_liste[index].ad,kisi.ad);                          
				strcpy(veri_liste[index].soyad,kisi.soyad);
				return index;
			}
			if(hash_tablo[index][0]!=-1 && hash_tablo[index][1]==-1){//indeks boþ deðil doluysa ve nexti -1 ise bu blok çalýþacak
				for(int i=0;i<10;i++){
					if(hash_tablo[i][0]==-1){
						k=i;//boþ indeksi buldum k da tuttum
						break;
					}
				}
					
					hash_tablo[index][1]=k;//gereken yerlere bilgileri doldurdum
					hash_tablo[k][0]= kisi.musteri_no;
					veri_liste[k].musteri_no=kisi.musteri_no;                   
					strcpy(veri_liste[k].ad,kisi.ad);                          
					strcpy(veri_liste[k].soyad,kisi.soyad);
					return k;
			}
			else{//nextide boþ deðilse burasý çalýþýr
				next=hash_tablo[index][1];
				while(next!=-1){
					son=next;
					next=hash_tablo[next][1];
				}
				for(int i=0;i<10;i++){
					if(hash_tablo[i][0]==-1){
						k=i;
						break;
					}
				}
					hash_tablo[son][1]=k;
					hash_tablo[k][0]= kisi.musteri_no;
					veri_liste[k].musteri_no=kisi.musteri_no;                   
					strcpy(veri_liste[k].ad,kisi.ad);                          
					strcpy(veri_liste[k].soyad,kisi.soyad);
					return k;
			
			}
	}
	
	int Numara_kontrol(int aranan){//aranan numara hash tablosunda var mý onu kontrol edecek varsa 1 döndürecek
		for(int i=0;i<10;i++){
   	    	if(aranan==hash_tablo[i][0])             
   	     		return 1;
		   
	   }   
	}
	void Yazdir_Aranan(int aranan){//aranan kiþinin kayýtlarýný direkt yazdýrmasý için yazýldý
		for(int i=0;i<10;i++){
			if(veri_liste[i].musteri_no== aranan)
			printf("\n\t%d\t%s\t%s  ",veri_liste[i].musteri_no,veri_liste[i].ad,veri_liste[i].soyad );
		}
	}
	int Arama(int aranan){//arama fonksiyonu
	  	int count=0,eleman=0;
	   	int ara,sonuc,deger,indis;
	   	
	  	indis=aranan%10;
		  
			if(Numara_kontrol(aranan)== 1){//tabloda aranan numara varsa bu blok çalýþýr
	   	     	
	   	     	if(indis==hash_tablo[indis][0]%10 && hash_tablo[indis][1]==-1){  // yerlestirilen ilk yerde ise yani kendi indisindeyse bu blok çalýþýr
				    count++;
				    sonuc=count;
					Yazdir_Aranan(aranan);
			    	printf("\n\t%d adimda bulundu\n",sonuc);
			    	return sonuc;
							}
		  
		
		  		else if(indis==hash_tablo[indis][0]%10 && hash_tablo[indis][1]!=-1 && hash_tablo[indis][0]==aranan){//nexti -1 deðilse ve aranan burdaysa bu blok çalýþýr
			  		count++;
			  		sonuc=count;
			  		Yazdir_Aranan(aranan);
			  		printf("\n\t%d adýmda bulundu\n",sonuc);
			  		return sonuc;
		  					}
	    
	    		else if(indis==hash_tablo[indis][0]%10 && hash_tablo[indis][1]!=-1){
	    	
			    	count++;
			    
			    	for(int i=0;i<10;i++){
			    		if(indis==hash_tablo[i][0]%10 )
			    			eleman++;
					}
					deger=hash_tablo[indis][1];
					
					for(int i=0;i<eleman;i++){		
					  	if(hash_tablo[deger][0]==aranan){
					  		count++;
					  		sonuc=count;
					  		break;
						}
				  		else{
				  			count++;
				  			deger=hash_tablo[deger][1];
				  		}
					}
					Yazdir_Aranan(aranan);
				 	printf("\n\t%d adýmda bulundu\n",sonuc);
			    	return sonuc;				
				}
			
			else {
				count++;
		  		sonuc=count;
		  		Yazdir_Aranan(aranan);
		  		printf("\n\t%d adýmda bulundu\n",sonuc);
		  		return sonuc;
			}	  
		}
			else//müþteri numarasý tabloda yoksa burasý çalýþýr
				printf("\n\tAradýðýnýz müþteri numarasý bulunamadý");
		
	    
	  }
	void Sil(int silinecek){//kayýt silme fonksiyonu
		    for(int i=0;i<10;i++){
	  		   	if(silinecek==hash_tablo[i][0])
	  		    	hash_tablo[i][0]=-1;
			   		veri_liste[i].musteri_no=-1;
			        strcpy(veri_liste[i].ad," ");
			        strcpy(veri_liste[i].soyad," ");
		      }
		      printf("\n\t%d numaralý müþteri Hash Tablosundan ve veri listesinden silindi");
	}
	void Ortalama_Adim(){//tüm elemanlarýn ortalama adým sayýsýný bulan fonksiyon
		float count=0,toplam;
		float ortalama;
		for(int i=0;i<10;i++){
		  		    if(hash_tablo[i][0]!=-1){
		  			count++;
		  			toplam+=Arama(hash_tablo[i][0]);	
			  	}
		  } 
		  		ortalama=toplam/count;
			       printf("\n\tOrtalama %f adým ",ortalama);
	}
	void yazdir_veriListe(){
		printf("\n\tVERÝ LÝSTE");
			for(int i=0;i<10;i++)
				printf("\n\t%d\t%s\t%s  ",veri_liste[i].musteri_no,veri_liste[i].ad,veri_liste[i].soyad );
		
	}
	
	void yazdir_Hash(){
			printf("\n\tHASH TABLOSU\n\n");
	       	for(int i=0;i<10;i++){
	       		if(hash_tablo[i][0] == -1)
	       			printf("\t  %d    %d\n",hash_tablo[i][0],hash_tablo[i][1]);
	       		
	       		else
	        		printf("\t%d     %d\n",hash_tablo[i][0],hash_tablo[i][1]);
		  }
	}
	
	
	int main(){
		setlocale(LC_ALL,"Turkish");
		int secim,sayi,silinecek;
		float toplam=0,ort;
			ilkle();
		    Dosya_Oku();
		
	 
	do{
		printf("\n---------------------------------------------------------------------");
		printf("\n\n\t1 Ekleme\n");
		printf("\t2 Arama \n");
		printf("\t3 Silme\n");
		printf("\t4 Hash Tablosu Listeleme\n");
		printf("\t5 Veri Liste Listeleme\n");
		printf("\t6 Ortalama Adým Sayýsý Bulma\n");
		printf("\n------------------------------------------------------------------------");
		printf("\n\tSeçiminizi tuþlayýn: ");
		scanf("%d",&secim);
		
		switch(secim){
			
			case 1:	Musteri musteri;
				printf("\n\tEklemek istediðiniz kiþinin müþteri numarasýný giriniz:");
				scanf("%d",&musteri.musteri_no);
				printf("\n\tEklemek istediginiz kisinin adini giriniz:");
				scanf("%s",&musteri.ad);
				printf("\n\tEklemek istediðiniz kiþinin soyadýný giriniz:");
				scanf("%s",&musteri.soyad);	
					Ekle(musteri);
		    break;
				 
			case 2:
				printf("\n\tAramak istediðiniz kiþinin müþteri numarasýný giriniz: ");
				scanf("%d",&sayi);
				Arama(sayi);
				
			break;
					
			case 3:
				printf("\n\tSilmek istediðiniz kiþinin müþteri numarasýný giriniz:");
	  	        scanf("%d",&silinecek);
	  	        Sil(silinecek);
			
			break;
				
			case 4:
				yazdir_Hash();
			break;
				
			case 5:
				yazdir_veriListe();
		    break;
			    
			case 6:
		        Ortalama_Adim();
			break;	  	
		}
	
	}while(1==1);	              
}

