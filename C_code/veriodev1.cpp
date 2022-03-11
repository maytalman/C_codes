#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct dugum{
	char harf;
	int frekans;
	struct dugum *sonraki;
};
typedef dugum node;
node *ilk=NULL,*gezen=NULL;
node *yerac(int x,char y){//node tipinde liste kutucuklarým olduðu için node tipinde kutu açýyorum
	node *ekle=(node *)malloc(sizeof(node));
	ekle->frekans=x;
	ekle->harf=y;
	ekle->sonraki=NULL;
}
void yaz(){
	gezen=ilk;
	while(gezen->sonraki!=NULL){
		printf(" %c-> %d\n",gezen->harf,gezen->frekans);
		gezen=gezen->sonraki;
	}
	printf(" %c-> %d\n",gezen->harf,gezen->frekans);
}
	
			int main(){
				FILE *dosya;
				dosya=fopen("veriler.txt","r");//veriler dosyasý:a2b3c1d4e6 þeklinde
				char x;
				int u,kanak=0,secim,n;
				while(!feof(dosya)){
					fscanf(dosya,"%c",&x);
					kanak++;//boyut hesaplamak için karakter sayýyorum
				}
				u=(kanak-1)/2;  //dizinin boyutunu hesaplýyoruz.
				fclose(dosya);
				dosya=fopen("veriler.txt","r");
				char dizi[u],h,silincek;
				int dizi1[u],f;//bir int ve bir char dizisi oluþturup okuduklarýmý tutuyorum.
				for(int i=0;i<u;i++){
					fscanf(dosya,"%c %d",&dizi[i],&dizi1[i]);
					if(ilk==NULL){//tek yönlü baðlý listeye harf ve frekans deðerlerini atýyorum
						ilk=yerac(dizi1[i],dizi[i]);
						gezen=ilk;
					}
					else{
						gezen->sonraki=yerac(dizi1[i],dizi[i]);
						gezen=gezen->sonraki;
					}
			    }
			yaz();
			char tekrar,sonuc,sonuc1,sonuc2;
				do{
					printf("\nlisteye eleman eklemek icin 1'i silmek icin 2'yi'tuslayin'");
					scanf("%d",&secim);fflush(stdin);
					//klavyeden scanf ile girilen her deðerden sonra stdin tamponunu boþaltýyorum ki sorun çýkmasýn
					if(secim==1){//kullanýcý harf ve frekans eklemek istediðinde bu blok çalýþacak
						printf("harf degeri girin");
						scanf("%c",&h);fflush(stdin);
						printf("frekans degeri girin");
						scanf("%d",&f);
							gezen=ilk;
							while(gezen->sonraki!=NULL){
								gezen=gezen->sonraki;
									if(gezen->harf== h) sonuc2=0;
									if(gezen->frekans== f) sonuc1=0;	
							}
								if(gezen->harf > h) sonuc=0;//sýralý girmesi için kontrol ediyorum
								
								else{
									sonuc=1;
								}
									if(sonuc==0)	printf("\nharf sirasina gore harf giriniz hatali girdiniz.");
									else if(sonuc1==0)	printf("\nlistedeki frekans degerlerinden farkli bir frekans degeri girin");
									else if(sonuc2==0)	printf("\nlistedeki harf degerlerinden farkli bir harf girin");
									else if(sonuc==1 && sonuc1==1 && sonuc2==1){
										gezen=ilk;
											while(gezen->sonraki!=NULL){
												gezen=gezen->sonraki;
										}
									gezen->sonraki=yerac(f,h);
										yaz();
								}
				}
			
				
					else if(secim==2){//kullanýcý harf ve frekans deðerini silmek istediðinde bu blok çalýþacak
						printf("hangi harfi silelim?");
						scanf("%c",&silincek);
							gezen=ilk;
								if(gezen->harf==silincek){
									ilk=gezen->sonraki;
									free(gezen);
								}
								else{
									gezen=ilk;
									while(gezen->sonraki->harf!=silincek){
										gezen=gezen->sonraki;
											}
									gezen->sonraki=gezen->sonraki->sonraki;
									}
									yaz();
								}
					
								printf("\ntekrar icin e cikmak icin herhangi bir harfi tuslayin");
								tekrar=getch();
					}while(tekrar=='e' || tekrar=='E');
						if(tekrar!='e' || tekrar!='E') printf("\nprogram bitti");
							//Sorunun B þýkký olarak devamý:
						printf("\nistediginiz harf sayisini girin: ");scanf("%d",&n);
								gezen=ilk;
									while(gezen->sonraki!=NULL){
										gezen=gezen->sonraki;
									}
									gezen->sonraki=ilk;
									//iþime yaramasý için yani sýralý harfleri seçebilmek için dairesel baðlý liste yaparak kullanacaðým
										for(int i=0;i<n;i++){
											for(int j=0;j<gezen->frekans;j++)
												printf("%c",gezen->harf);
											gezen=gezen->sonraki;
										}
										gezen=ilk;
							//Sorunun C þýkký olarak devamý :fakat baþarýsýz
										char *ifade,kveri;
										int sayfrekans=0,k=0,i=0;
										ifade=(char *)malloc(5*sizeof(char));
										ifade=(char *)realloc(ifade,sizeof(char));fflush(stdin);
										printf("\n\tveriyi giriniz:");gets(ifade);
												while(*(ifade+k)!=NULL){
													for(int j=i;*(ifade+j)==*(ifade+(j+1));j++){
														sayfrekans++;
														kveri=*(ifade+j);
														}k++;
													/*	gezen=ilk;
														while(gezen->sonraki!=ilk){
															if(kveri==gezen->harf && sayfrekans+1==gezen->frekans) printf("\nuygun");
															
														}*/
														printf("%d - %c\n",sayfrekans+1,kveri);
														i=sayfrekans-1;
														sayfrekans=0;
														//bu blokta kullanýcýdan veriyi aldým fakat alýnan veride hangi harften kaç adet olduðunu net olarak bulamadým.
														//bu yüzden baðlý listede kontrol saðlayamadým 
											}
											}
												
													
										
				
					
			
