#include<stdio.h>
#include<conio.h>
#include<locale.h>
	struct alinacaklar{
		char ad[55],yazar[35];
		int btarih,sayfas;
		float fiyat;
	}al[35]={{"Gelece�in Su�lar� & Dijital D�nya'n�n Karanl�k Y�z�","Marc Goodman",2016,632,26.30},
	{"Hackerlar ve Bilgisayar Devriminin Kahramanlar�","Steven Levy",2014,560,30.90},
	{"Hacker'�n Akl�","Tamer �ahin",2012,160,16.50},
	{"S�zma Sanat�","Kevin D. Mitnick",2014,300,14.90},
	{"aldatma Sanat�","Kevin D. Mitnick",2005,336,14.90},
	{"Kablolardaki Hayalet","Kevin D. Mitnick ve William Simon",2015,480,25.90},
	{"Teknoloji'nin Evrimi","George Basalla",2016,367,17.25},
	{"T�fek,Mikrop,�elik","Jared Diamond",2018,664,45.50},
	{"Steve Jobs Olmak","Rich Tetzeli",2015,370,34.70},
	{"Google Nas�l Y�netiliyor?","Jonathan Rosenberg & Eric Schmidt",2015,320,29.20},
	{"Bir Tayyarecinin An�lar�","Vecihi H�rku�",2008,423,29.20},
	{"D�nyay� De�i�tiren 5 Denklem","Micheal Guillen",2002,283,7.90},
	{"Bilimsel Devrimlerin Yap�s�","Thomas S. Kuhn",2017,324,23.30},
	{"Fizik ve Ger�eklik","�akir Kocaba�",2012,134,14.05},
	{"Zaman�n K�sa Tarihi","Stephan Hawking",2017,255,17.50},
	{"Y�nteme Kar��","Paul Feyerabend",2010,384,21.50},
	{"Cosmos Evrenin ve Ya�am�n S�rlar�","Carl Sagan",2018,384,20.80},
	{"�catlar�m","Nikola Tesla",2012,112,7.50},
	{"Zaman�n Daha K�sa Tarihi","stephan Hawking",2013,132,16.80},
	{"De�i�en Beynim","Sinan Canan",2018,346,17.50},
	{"Evrim Teorisi,Felsefe ve Tanr�","Caner Taslaman",2016,472,20.25},
	{"Evren Avucunda","Christophe Galfard",2018,380,19.80},
	{"Gelece�i �n�a Eden Adam","Elon Musk",2017,200,13.50},
	{"Gelece�i De�i�tiren Dokuz Algoritma","John Maccormick",2018,291,16.50},
	{"Master Algoritma","Pedro Domingos",2017,416,26.25},
	{"50 Soruda Yapay Zeka","Cem Say",2018,188,15.60},
	{"�nsanl�k 2.0","Ray Kurzweil",2016,720,29.40},
	{"Incognito:Beynin Gizli Hayat�","David Eagleman",2013,304,20.30},
	{"Mikrobiyota","Ed Young",2018,408,21.17},
	{"Bilimin B�y�s�","Celal �eng�r",2019,160,16.79},
	{"Eminim �aka Yap�yorsunuz Bay Feynman","Richard Feynman",2016,350,22.40},
	{"Dijital Gelecekte �nsan Kalmak","Sinan Canan,Mustafa Acungil",2018,240,22.40},
	{"Evrim","Ali Demirsoy",2017,406,31.50},
	{"�cat ��karma","Albert Jack",2016,272,12.35}};
	int main(){
		setlocale(LC_ALL,"Turkish");
		printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>ALINACAKLAR L�STEM<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
		for(int i=0;i<34;i++){
		printf("\n\t%d->K�TABIN ADI:%s",i+1,al[i].ad);
		printf("\n\t\t\t->YAZAR:%s",al[i].yazar);
		printf("\n\t\t\t->BASIM TAR�H�:%d",al[i].btarih);
		printf("\n\t\t\t->SAYFA SAYISI:%d",al[i].sayfas);
		printf("\n\t\t\t->F�YATI:%2.2f tl",al[i].fiyat);
		printf("\n----------------------------------------------------------------------------------");
		}
	
		
	}
