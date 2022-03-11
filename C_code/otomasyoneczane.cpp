#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
                    struct ilac{                          // ilaclari tanimlar: olusumlari;
                           char *ilacadi;
                           char *ilacturu;
                           char *firma;
                           float serino;
                           int adet;
                           int sonkullanimtarihi;
                           int tablet;
                           int mg;
                           int fiyat;
                           };
int main(){
    while(1){ // Ana menunun surekli donmesini saglar
    typedef ilac eczane;  // tipini belirler
      int secim;
         printf("\n* * * * * * MENU * * * * * *\n");
         printf("1.Ilac Kaydi:\n");
         printf("2.Ilac Satis:\n");
         printf("3.Ilac Urun Ekle:\n");
         printf("4.Ilac Arama:\n");
         printf("5.Ilac Listesi:\n");
         printf("6.Ilac Kayit Kaldir:\n");
         printf("7.Depo Sayim(stok):\n");
         printf("8.Recete Kayit:\n");
         printf("9.Recete Kayit Arama:\n");
         printf("10.Reset:\n");
         printf("0.Otomasyon Cikis:\n");
                 for(int i=1;i<15;i++){  // menu yildizlari icin 15 e kadar donen bir 'i' dongusu 
                         printf("* ",i);
                         }
                         printf("\n\nLutfen Seciminizi Giriniz=");
                         scanf("%d",&secim);                       // asagidaki secenekler icin secim yaptirir 
 
     if(secim==1){     // ilac kaydet bolum 1
                              eczane girdi;  // eczane tipinde bir degisken tanimi
                              girdi.ilacadi=(char *)malloc(sizeof(char)*300);
                              printf("Ilac Adi Giriniz:");
                              scanf("%s",girdi.ilacadi);
                              girdi.firma=(char *)malloc(sizeof(char)*300);
                              printf("Firma Adi Giriniz:");
                              scanf("%s",girdi.firma);
                              girdi.ilacturu=(char *)malloc(sizeof(char)*300);
                              printf("Ilac Turu Giriniz:");
                              scanf("%s",girdi.ilacturu);fflush(stdin);
                              printf("Seri Numarasi:");
                              scanf("%f",&girdi.serino);
                              printf("Adet sayisi:");
                              scanf("%d",&girdi.adet);
                              printf("Son Kullanim Tarihi:");
                              scanf("%d",&girdi.sonkullanimtarihi);
                              printf("Tablet Sayisi:");
                              scanf("%d",&girdi.tablet);fflush(stdin);
                              printf("Miligram Degeri:");
                              scanf("%d",&girdi.mg);fflush(stdin);
                              printf("Ilac Fiyat:");
                              scanf("%d",&girdi.fiyat); 
                              FILE *fp=fopen("fatihkabakci.txt","a");   // append modunda acar dosyaya ekleme yapar
                              fprintf(fp,"%s %s %s %f %d %d %d %d %d\n",girdi.ilacadi,girdi.firma,girdi.ilacturu,girdi.serino,girdi.adet,girdi.sonkullanimtarihi,girdi.tablet,girdi.mg,girdi.fiyat); // ve dosyadan yazdirir
                              printf("--Kayit Basari Ile Gerceklestirilmistir--\n");
                              fclose(fp); // islem bittiginde dosyayi kapatir
                              }
                               
                               
    if(secim==2){    // ilac sat bolum 2
                              FILE *fp=fopen("fatihkabakci.txt","r"); 
                               char satilac[300];  // satis bolumunde listedeki bulunan ilacla karsilastirmak icin tanimlanmistir
                                int istenen;  // // satis icin istenen miktar tanimlanmistir
                                printf("Isim girin:");
          scanf("%s",satilac);
          printf("Istenen:");  
          scanf("%d",&istenen);
           int i=0; 
           ilac girdi[300];  // liste olarak tanimlanan 
            while (!feof(fp)){ // dosya sonuna kadar donen bir dongu
                              girdi[i].ilacadi=(char *)malloc(sizeof(char)*300);
                              girdi[i].firma=(char *)malloc(sizeof(char)*300);
                              girdi[i].ilacturu=(char *)malloc(sizeof(char)*300);                                                                                                                    
           fscanf(fp,"%s %s %s %f %d %d %d %d %d\n",girdi[i].ilacadi,girdi[i].firma,girdi[i].ilacturu,&girdi[i].serino,&girdi[i].adet,&girdi[i].sonkullanimtarihi,&girdi[i].tablet,&girdi[i].mg,&girdi[i].fiyat);  
          i++;
          }
          for (int j=0;j<i;j++){  // oncelikle 'i' degiskenine kadar ilerletir                  
              if(strcmp(satilac,girdi[j].ilacadi)==0){ /* char turunde giris yapilan ilacin ismi'(char satilac[300])' ile,kayittaki listede bulunan
                                                          ilacin ismi ayni ise */
                               girdi[j].adet=girdi[j].adet-istenen;    // adet sayisindan duser ve satis islemini gerceklestirir                                
                               printf("Satis Tamamlanmistir...");
                               printf("Odenecek Toplam Tutar=%dtl",girdi[j].fiyat*istenen);  // ve toplam tutari ekrana bastirir..
                               }
          fp=fopen("fatihkabakci.txt","w");  // write modunda dosyayi tekrar acar ve yazdirir
          for (int j=0;j<=i-1;j++){
              fprintf(fp,"%s %s %s %f %d %d %d %d %d\n",girdi[j].ilacadi,girdi[j].firma,girdi[j].ilacturu,girdi[j].serino,girdi[j].adet,girdi[j].sonkullanimtarihi,girdi[j].tablet,girdi[j].mg,girdi[j].fiyat); // dosyadan yazdirir
              }
              fprintf(fp,'\0');  // Dosya sonuna kadar yazdirma islemine devam eder
              fclose(fp);
              }
              }
       if(secim==3){   // ilac al bolum 3, 
                          ilac girdi[300];  // ilac listesi teknigiyle tanimlanan bir variable
                       FILE *fp=fopen("fatihkabakci.txt","r");
                       char gelilac[300];  // Alis bolumunde listedeki bulunan ilacla karsilastirmak icin tanimlanmistir
                       int alim;     // Alis icin istenen miktar tanimlanmistir..
                       printf("Siparis Edilen Ilacin Adini Giriniz:");
                       scanf("%s",gelilac);
                       printf("Alim Adedi Giriniz:");
                       scanf("%d",&alim);
                       int i=0;
                       while(!feof(fp)){   // dosya sonuna kadar doner
                              girdi[i].ilacadi=(char *)malloc(sizeof(char)*300);  // ilac olusumlari
                              girdi[i].firma=(char *)malloc(sizeof(char)*300);
                              girdi[i].ilacturu=(char *)malloc(sizeof(char)*300);  
                       fscanf(fp,"%s %s %s %f %d %d %d %f %d\n",girdi[i].ilacadi,girdi[i].firma,girdi[i].ilacturu,&girdi[i].serino,&girdi[i].adet,&girdi[i].sonkullanimtarihi,&girdi[i].tablet,&girdi[i].mg,&girdi[i].fiyat);  
                       i++;
                       }
                       for(int j=0;j<i;j++){                              
                                if(strcmp(gelilac,girdi[j].ilacadi)==0){   /* char turunde giris yapilan ilacin ismi'(char gelilac[300])' ile,
                                                                              kayittaki listede bulunan
                                                                            ilacin ismi ayni ise,
                                                                            adetten yukseltir ve alis islemini gerceklestir */
                               girdi[j].adet=girdi[j].adet+alim;
                               printf("Siparis Alimi Tamamlanmistir..");
                               printf("Odenecek Toplam Tutar:%dtl",girdi[j].fiyat*alim);
                               }
                       fp=fopen("fatihkabakci.txt","w");  // dosyayi write modunda acarak yazdirma isleminden devam eder..
                       for(int j=0;j<=i-1;j++){
                           fprintf(fp,"%s %s %s %f %d %d %d %d %d\n",girdi[j].ilacadi,girdi[j].firma,girdi[j].ilacturu,girdi[j].serino,girdi[j].adet,girdi[j].sonkullanimtarihi,girdi[j].tablet,girdi[j].mg,girdi[j].fiyat); // ve dosya ya yazdirir..
                           }
                           }
                           fclose(fp); // islem bittiginde dosyayi kapatir
                           }
                            
                            
                                                                                                                                         
          if(secim==4){  // Ilac arama bolum 4
                               printf("Aradiginiz Ilac Adi Giriniz:");
                              char aranan[30];  // istedigimiz ilaca ulasmak icin char turunde bir aranan olan kullandigimiz bir arac
                              scanf("%s",aranan);
                              int bayrak=0;
                              FILE *fp=fopen("fatihkabakci.txt","r");  // read modun da okuma islemi
                              eczane girdi; // eczane tipinde klasik degiskenimiz
                              girdi.firma=(char *)malloc(sizeof(char)*300);
                              girdi.ilacadi=(char *)malloc(sizeof(char)*300);
                              girdi.ilacturu=(char *)malloc(sizeof(char)*300);
                              while(!feof(fp)){
                                               fscanf(fp,"%s %s %s %f %d %d %d %d %d\n",girdi.ilacadi,girdi.firma,girdi.ilacturu,&girdi.serino,&girdi.adet,&girdi.sonkullanimtarihi,&girdi.tablet,&girdi.mg,&girdi.fiyat);
                                                 if(strcmp(girdi.ilacadi,aranan)==0){  // dosyada ki kayitli bir ilac ile aranan isim ayni ise alttaki printf ile yazdir..
                                                                                     bayrak=1;  
                                                 printf("Firma Adi:%s\nIlacin Adi:%s\nIlacin Turu:%s\nSeri Numarasi:%f\nAdedi:%d\nSon Kullanim Tarihi:%d\nTablet:%d\nMg=%d\nTutari:%dtl\n",girdi.firma,girdi.ilacadi,girdi.ilacturu,girdi.serino,girdi.adet,girdi.sonkullanimtarihi,girdi.tablet,girdi.mg,girdi.fiyat);                          
                              }
                              }
                              if(bayrak==0)
                              printf("Aradiginiz Ilac Bulunmamaktadir..!");
                              fclose(fp);  // ve dosyayi kapatir
                              }
          if(secim==5){   // Ilac Listesi bolum 5
                                           printf("FATIH ECZANESI ILAC DEPOSU:\n");
                                           FILE *fp=fopen("fatihkabakci.txt","r");
                                           eczane girdi;
                              girdi.firma=(char *)malloc(sizeof(char)*300);    //  olusumlarin tipini tekrardan belirt
                              girdi.ilacadi=(char *)malloc(sizeof(char)*300);
                              girdi.ilacturu=(char *)malloc(sizeof(char)*300);  
                               while(!feof(fp)){  // Dosya sonuna kadar okur
                                               fscanf(fp,"%s %s %s %f %d %d %d %d %d\n",girdi.ilacadi,girdi.firma,girdi.ilacturu,&girdi.serino,&girdi.adet,&girdi.sonkullanimtarihi,&girdi.tablet,&girdi.mg,&girdi.fiyat);
                                               printf("\n/%s/ - Fiyat:%dtl\n",girdi.ilacadi,girdi.fiyat);
                                               }
                                               fclose(fp); // dosyayi kapatir..
                                               }
          if(secim==6){  // kayit kaldirma bolum 6
                               FILE *fp=fopen("fatihkabakci.txt","r");
                                            char isim[100];  // silme islemi icin,char isim[100] turunde bir degisken
                                                   printf("Silmek Istediginiz Ilacin Adi:");                       
                                            scanf("%s",isim);
                                              int artis=0;  // islem devam ettikce icinde kullanilan parametre
                                                ilac girdi[200];  // listedeki 'ilac girdi' tipi
                                            while(!feof(fp)){                                                       
                                            girdi[artis].ilacadi=(char *)malloc(sizeof(char)*300);  // artis parametresi,ilac tiplerinin icinde artar ve bunu tanimlar
                                            girdi[artis].firma=(char *)malloc(sizeof(char)*300);
                                            girdi[artis].ilacturu=(char *)malloc(sizeof(char)*300);                                      
                                            fscanf(fp,"%s %s %s %f %d %d %d %d %d\n",girdi[artis].ilacadi,girdi[artis].firma,girdi[artis].ilacturu,&girdi[artis].serino,&girdi[artis].adet,&girdi[artis].sonkullanimtarihi,&girdi[artis].tablet,&girdi[artis].mg,&girdi[artis].fiyat); // dosyadan okur
                                            artis++;  // 'artis' arttirir..
                                            }
                                            fclose(fp); 
                                            FILE *fp2=fopen("fatihkabakci.txt","w");
                                              for(int i=0;i<=artis-1;i++){
                                                      if(strcmp(isim,girdi[i].ilacadi)!=0)   // girilen ilacin ismi ile kayittaki ilacin ismi ayni degil ise,                                                                         
                              fprintf(fp2,"%s %s %s %f %d %d %d %d %d\n",girdi[i].ilacadi,girdi[i].firma,girdi[i].ilacturu,girdi[i].serino,girdi[i].adet,girdi[i].sonkullanimtarihi,girdi[i].tablet,girdi[i].mg,girdi[i].fiyat);   // dosyadan yazdir..                                                                                                                                         
                              }
                              printf("Kayit Kaldirilmistir...");
                              fprintf(fp2,'\0');  // dosya sonuna kadar..                               
                              fclose(fp2);  // dosyayi kapatir..
                              }
                                                                                                                                   
          if(secim==7){  // 'depo sayim' bolum 7
                                                    eczane girdi;
                              FILE *fp=fopen("fatihkabakci.txt","r"); // read modunda dosya yi acar
                              while(!feof(fp)){  // dosya sonuna kadar okumaya devam eder
                                             int i=0;     // integer tipin de 'i' adiyla bir degisken
                              girdi.ilacadi=(char *)malloc(sizeof(char)*300);    
                              girdi.firma=(char *)malloc(sizeof(char)*300);
                              girdi.ilacturu=(char *)malloc(sizeof(char)*300);
                                fscanf(fp,"%s %s %s %f %d %d %d %d %d\n",girdi.ilacadi,girdi.firma,girdi.ilacturu,&girdi.serino,&girdi.adet,&girdi.sonkullanimtarihi,&girdi.tablet,&girdi.mg,&girdi.fiyat);
                                while(girdi.ilacadi[i++]!='\0');  // islemin bitimine kadar devam eder
                                if(girdi.adet>=40)                                                                                                                                                                                                                                                                                                     printf("\nStok Durumu Yeterli..\n");
                                else if(girdi.adet>=25)
                                printf("\nStok Girisi Yapilabilir..\n");
                                else if(girdi.adet>=15)
                                printf("\nStok Durumunu Takip Et..\n");
                                else if(girdi.adet>=6)
                                printf("\nStok Durumu Kritik..\n");
                                else if(girdi.adet>=1)
                                printf("\nStok Durumu Tukenmek Uzere..\n!!");
                                else if(girdi.adet==0)
                                printf("Stok Tukenmis Durumda..\n!!!");
                                                      printf("%s(=)%d\n",girdi.ilacadi,girdi.adet);   // ilacin ismiyle beraber adedini ekrana yazdirir...
                                                      }
                                                      fclose(fp); // dosyayi kapatir
                                                      }
          if(secim==8){  // recete kayit bolum 8
                                           char isim[100];            // recete kaydi icin recetenin olusumlari
                                           char soyisim[100];
                                           char kangrubu[100];
                                           char kurumadi[100];
                                           char ilac[100];
                                           double kimlikno;
                                           int adet;
                                           int ay;
                                           int yil;
                                           int gun;
                                           printf("RECETE KAYDI:\n");
                                           printf("Lutfen Hastanin Adi ve Soyadini Aralarda Bir Bosluk Birakarak Giriniz:\n");
                                           scanf("%s %s:",isim,soyisim);
                                           printf("Kan Gurubu:\n");
                                           scanf("%s",kangrubu);
                                           printf("Kurum Adi:\n");
                                           scanf("%s",kurumadi); fflush(stdin);
                                           printf("kimlik Numarasi:\n");
                                           scanf("%lf",&kimlikno);
                                           printf("Lutfen Tarihi(Gun Ay Yil) Aralarda Birer Bosluk Birakarak Giriniz:");
                                           scanf("%d %d %d",&gun,&ay,&yil);
                                           printf("Aldigi Ilacin Adi ve Adedi:");
                                           scanf("%s %d",ilac,&adet);
                                           FILE *fp1=fopen("Recete.txt","a"); // appended modunda dosyayi acar..Recete icin ayri bir dosya kayit tuttum.
                                           fprintf(fp1,"%s %s %s %s %lf %d %d %d %s %d\n",isim,soyisim,kangrubu,kurumadi,kimlikno,gun,ay,yil,ilac,adet); // ve dosyaya yazdirir
                                           printf("Recete Kaydedilmistir..");
                                           fclose(fp1);  // fp1 dosyayi kapatir
                                           }
          if(secim==9){   // recete kayit Arama bolum 9                                                                                                                                                     
                                           printf("Aranan Recete Kaydi Icin Soyisim Giriniz:");
                                           char aranansoyad[30];   // soyisme gore aradigimiz kayit icin oncelikle dosyadaki soy isimle karsilastirdigimiz char tipinde bir degisken
                                           scanf("%s",aranansoyad);
                                           char isim[100];
                                           char soyisim[100];
                                           char kangrubu[100];
                                           char kurumadi[100];
                                           char ilac[100];
                                           double kimlikno;
                                           int adet;
                                           int ay;
                                           int yil;
                                           int gun;
                                           int flag=0;
               FILE *fp1=fopen("Recete.txt","r");  // read modunda acarak 
             while(!feof(fp1)){  // dosyanin sonuna kadar okur
                              fscanf(fp1,"%s %s %s %s %lf %d %d %d %s %d\n",isim,soyisim,kangrubu,kurumadi,&kimlikno,&gun,&ay,&yil,ilac,&adet);
                              if(strcmp(soyisim,aranansoyad)==0){   // eger dosyadaki soyisim ile girilen soy isim ayni ise alttaki printf fonksiyonu ile ekrana yazdirir..
                                                              flag=1; 
             printf("\nADI:%s\nSOYADI:%s\nKAN GRUBU:%s\nKURUM ADI:%s\nTC KIMLIK NUMARASI:%lf\nTARIH:%d/%d/%d\nVERILEN ILAC:%s\nADEDI:%d\n",isim,soyisim,kangrubu,kurumadi,kimlikno,gun,ay,yil,ilac,adet); 
             }
             }
             if(flag==0)
             printf("Aradiginiz Hasta Bulunamamistir..!");
             fclose(fp1);      // ve dosyayi kapatarak isleme son verir
             }
                              if(secim==10){ // reset dugmesi bolum 10
                                           system("CLS");   // ekran temizlemek icin bir komut olan = system("CLS")
                                           }
                                            
                                                       
                                                       
                                                       
                                                       
             if(secim==0)     /* son olarak cikis butonu
                              secim '0' oldugu takdirde               
                              break komuduyla islemi kirar..*/
                              break;           
                                                      }
                                                      }
