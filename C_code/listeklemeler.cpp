#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
	struct dugum{
		int veri;
		struct dugum *sonraki;
	};
	typedef dugum node;
	node *ilk=NULL,*gecici=NULL,*gezen=NULL;
		void yazdir(){
			gezen=ilk;
			while(gezen->sonraki!=NULL){
				printf("%d=>",gezen->veri);
				gezen=gezen->sonraki;
			}
			printf("%d",gezen->veri);
		}
			void sonaekle(int n){
				node *ekle=(node *)malloc(sizeof(node));
				ekle->veri=n;
				ekle->sonraki=NULL;
					if(ilk == NULL)
					ilk=ekle;
					else{
						gezen=ilk;
						while(gezen->sonraki!=NULL){
							gezen=gezen->sonraki;
						}
						gezen->sonraki=ekle;
					}
			}
				void basaekle(int n){
					node *b=(node *)malloc(sizeof(node));
					b->veri=n;
					b->sonraki=ilk;
					ilk=b;
				}
					void arayaekle(int x,int y){
						gezen=ilk;
						while(gezen->sonraki->veri!=x){
							gezen=gezen->sonraki;
						}
						gecici=gezen->sonraki;
						gezen->sonraki=(node *)malloc(sizeof(node));
						gezen->sonraki->veri=y;
						gezen=gezen->sonraki;
						gezen->sonraki=gecici;
					}
				int main(){
					int a,o,s,i=0;
					while(i!=5){
						printf("\tsayi girin: ");scanf("%d",&a);
						if(a%2==0)
						sonaekle(a);
						else
						basaekle(a);
						i++;
						yazdir();
					}
					printf("\n\thangi sayinin önüne eklensin : ");scanf("%d",&o);
					printf("\n\thangi sayi eklensin : ");scanf("%d",&s);
					arayaekle(o,s);
					yazdir();
					
				}
	

		
