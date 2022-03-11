#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct dugum{
	int no;
	char name,surname;
	struct dugum *next;
};
typedef dugum node;
node *ilk=NULL,*iter=NULL,*temp=NULL;
		
		
	void Listele(int no,char name,char surname){
		node *ekle=(node *) malloc(sizeof(node));
		ekle->no=no;
		ekle->name=name;
		ekle->surname=surname;
		ekle->next=NULL;
		
			if(ilk== NULL){
						ilk=ekle;
						iter=ilk;
						}
			else{
				iter=ilk;
				while(iter->next!=NULL){
					iter=iter->next;
				}
				iter->next=ekle;	
	}
}	

/*	int AraBul(node *ilk,int bul){
		int step=0;
		iter=ilk;
			while(iter!=NULL){
				if()
			}
		return step;
	}*/
	void Yaz(){
		iter=ilk;
		while(iter->next!=NULL){
			printf("%d %s %s",iter->no,iter->name,iter->surname);
			iter=iter->next;
		}
		printf("%d %s %s",iter->no,iter->name,iter->surname);
	}

	int Encoktekrar(node *ilk,int uzunluk){
		int dizi[uzunluk],tut[uzunluk][2],adet=0,elemansay=0,i=0,k=0;
		node *gecici;
		iter=ilk;
			while(iter!=NULL){//baðlý listeyi bir diziye attým.
				dizi[i]=iter->no;
				iter=iter->next;
				i++;
			} 
					for(int i=0;i<uzunluk;i++){//bu yol ile hangi sayýdan kaç adet olduðunu bir dizide tutacaðým.
						adet=1;
						for(int j=i+1;j<uzunluk;j++){
							if(dizi[i]%10==dizi[j]%10){
								adet++;
								dizi[j]=-1;
							}
						}
					if(i==uzunluk-1){
						tut[k][0]=dizi[i]%10;
						tut[k][1]=adet;
						k++;
						elemansay++;
						}
					if(dizi[i]!=-1){
						tut[k][0]=dizi[i]%10;
						tut[k][1]=adet;
						k++;elemansay++;
					}
				
				}
					for(int a=0;a<elemansay-1;a++){
						printf("%d %d \n",tut[a][0],tut[a][1]);
					}
					//tekrar sayýlarýný büyükten küçüðe sýralýyorum
					int gecici1,gecici2;
					for(int a=0;a<elemansay-1;a++){
						for(int b=a+1;b<elemansay-1;b++){
							if(tut[b][1]>tut[a][1]){
							gecici1=tut[a][1];
							gecici2=tut[a][0];
							tut[a][1]=tut[b][1];
							tut[a][0]=tut[b][0];
							tut[b][0]=gecici2;
							tut[b][1]=gecici1;
							
							}
						}
					}
				
					for(int a=0;a<elemansay-1;a++){
						printf("%d -%d \n",tut[a][0],tut[a][1]);	
				}
				
						
		}
	
	
int main(){
	FILE *dosya;
	dosya=fopen("dosya.txt","r");
	int k=0;char x;
	while(!feof(dosya)){
		fscanf(dosya,"%c",&x);
		if(x==' ')
		k++;
	}
	fclose(dosya);
	k=k/2;
		dosya=fopen("dosya1.txt","r");
		char ad[k][10],soyad[k][10];
		int no[k],i=0,t=0;	
			if((dosya=fopen("dosya.txt","r"))!=NULL){
				for(i=0;i<k;i++){
					fscanf(dosya,"%d %s %s",&no[i],&ad[i],&soyad[i]);
				//	printf("\n%d %s %s ",no[i],ad[i],soyad[i]);
					Listele(no[i],ad[i][10],soyad[i][10]);
				}	
		//	int a=Length(ilk);printf("%d",a);
		//	Encoktekrar(ilk,a);		
					
					}
					fclose(dosya);
					Yaz();
		int secim,num;
		char a,b;
		printf("Ekleme yapmak icin :1\n");
		printf("Eleman aramak icin :2\n");
		printf("Eleman silmek icin :3\n");
		printf("<<<<<<<<<<<<<<<<<<<<<<<\n");
		printf("SECIM YAPINIZ...:");scanf("%d",&secim);
		printf("<<<<<<<<<<<<<<<<<<<<<<<<\n");
			switch(secim)
			{
				case 1 :printf("Eklemek istediðiniz numara bilgisini giriniz : ");
						scanf("%d",&num);
						printf("Eklemek istediðiniz Ad Soyad bilgisini giriniz : ");
						scanf("%s %s",&a,&b);
						Yaz();
					break;
				
				case 2 :printf("Aramak istediðiniz numara bilgisini giriniz : ");
						scanf("%d",&num);
				
					break;
				
				
			//	case 3 :printf("carpimin sonucu=%d",x*y);break;
				
			}
		Yaz();
		}
