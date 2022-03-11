#include<stdio.h>
#include<conio.h>
#include<string.h>
	int main(){
		/*
		char ogr_ad[2][2][20];
		int final[2][2],vize[2][2];
		float ort[2][2];
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				printf("%d.sinifftaki %d.ogrencinin adi:",i+1,j+1);scanf("%s",&ogr_ad[i][j]);
				printf("%d.siniftaki %d.ogrencinin vize notu:",i+1,j+1);scanf("%d",&vize[i][j]);
				printf("%d.siniftaki %d.ogrencinin final notu:",i+1,j+1);scanf("%d",&final[i][j]);
				ort[i][j]=(float)vize[i][j]*0.4+ (float)final[i][j]*0.6;
			}
		}
		printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
		for(int i=0;i<2;i++){
			printf("%d.sinifin notlari:\n",i+1);
			for(int j=0;j<2;j++){
				printf("%s'nin ortalamasi:%.2f\n",ogr_ad[i][j],ort[i][j]);
			}
		}*/
	/*	char isci[2][2][15];int calisma_saati[2][2],mesai_saati[2][2],maas[2][2];
		float gunluk_ucret[2][2],saatlik_ucret[2][2],maas2[2][2];
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				printf("%d.fabrikadaki %d.iscinin adi:",i+1,j+1);scanf("%s",&isci[i][j]);
				printf("%d.fabrikadaki %d.iscinin maasi:",i+1,j+1);scanf("%d",&maas[i][j]);
				printf("%d.fabrikadaki %d.isci gunluk kac saat calisti ?: ",i+1,j+1);scanf("%d",&calisma_saati[i][j]);
				printf("%d.fabrikadaki %d.isci bu ay kac saat mesai yapti ?:",i+1,j+1);scanf("%d",&mesai_saati[i][j]);
				gunluk_ucret[i][j]=(float)maas[i][j]/30;
				saatlik_ucret[i][j]=(float)gunluk_ucret[i][j]/calisma_saati[i][j];
				printf("gunluk ucret %.2f\n",gunluk_ucret[i][j]);
				printf("saatlik ucret:%.2f\n",saatlik_ucret[i][j]);
				//üstteki iki satýr kontrol amaçlý yazýldý.
				//her iþçi saat baþýna aldýðý miktarýn bir buçuk katýný mesaide saat baþý almalý.
				maas2[i][j]=(mesai_saati[i][j]*(float)saatlik_ucret[i][j]*1.5)+maas[i][j];
			}
			}
			printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
			for(int i=0;i<2;i++){
				printf("%d.fabrikanin maaslari:\n",i+1);
				for(int j=0;j<2;j++){
					printf("%s'nin bu aylik maasi:%.2f\n",isci[i][j],maas2[i][j]);
				}
			}
	*/	
		/*char isim[15];
		printf("bir kelime giriniz:");scanf("%s",&isim);
		printf("kelime %d harfli...",strlen(isim));
		*/
		/*
		ÖDEV 1
		char metin[300];int adet=0,i;
		printf("bir metin giriniz:\n");gets(metin);
		for(int i=0;i<100;i++){
			if(metin[i]==' '||metin[i]=='.'||metin[i]==',')
			adet++;
		}
		printf("%d adet kelime vardir.",adet+1);
		
		
	//kullanýcýnýn belirleyeceði uzunlukta metini nasýl yazdýrýrým?	
		*/
		
		//BUNA UÐRAÞACAÐIM
		/*
		char metin[100],kelime[20];
		int adet=0;
		printf("bir metin giriniz:\n");gets(metin);
		printf("aradiginiz kelimeyi giriniz: ");gets(kelime);
		for(int i=0;i<'\0';i++){
			for(int j=0;j<100;j++){
				if(kelime[i]==metin[j]){
					adet++;
				}
				if(metin[j]==' ')
				continue;
			}
		}
		printf("%d kez tekrar eder.",adet);
		*/
		//ÖDEV 3:
		/*char metin[100];
		printf("bir metin giriniz:\n ");gets(metin);
		for(int i=0;metin[i]!='\0';i++){
			if(metin[i]>='A' && metin[i]<='Z'){
				metin[i]+=32;
			}
			
			printf("%c",metin[i]);
		}
		
		*/
		int j=0,a,b,adet=0;
		char metin[100],kelime[20];
		printf("metin giriniz: ");gets(metin);
		printf("aratacaginiz kelime giriniz:");gets(kelime);
		printf("kelime %d harf:",strlen(kelime));
		a=strlen(kelime);
		printf("metin %d karakter.",strlen(metin));
		b=strlen(metin);
		printf(" a=%d ve b=%d",a,b);
		for(int i=0;i<a;i++){
			if(kelime[j]==metin[i]){
				adet=adet+1;
			    j++;
			}
	}
		printf("adet %d",adet);
		if(adet==a){
			printf("cümlede kelime bulunur.");
		}
		else
			printf("kelime yok");
}
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		














	//	kuantum fizigine gore enerji ve canlý ayrýlmaz bir butundur.Einstein bunu enerji formuluyle gostermistir.
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
