#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
/* bu vatandaþ bi baðlý listede kullanýcýnýn söylediði elemandan itibaren baþa alýyor
	struct dugum{
		int veri;
		struct dugum *sonraki;
	};
	typedef dugum node;
	node *ilk=NULL,*gezen=NULL,*gecici=NULL;
	
	node *yerac(int x){
		node *ekle=(node *)malloc(sizeof(node));
		ekle->veri=x;
		ekle->sonraki=NULL;
	}
	
	void yaz(){
		gezen=ilk;
			while(gezen->sonraki!=NULL){
				printf("%d => ",gezen->veri);
				gezen=gezen->sonraki;
			}
				printf("%d",gezen->veri);
	}
		int main(){
			int a;
			for(int i=0;i<6;i++){
				if(ilk==NULL){
					ilk=yerac(i+1);
					gezen=ilk;
				}
				else{
					gezen->sonraki=yerac(i+1);
					gezen=gezen->sonraki;
				}
			}
			yaz();
			printf("\nhangi sayidan itibaren basa alinsin");scanf("%d",&a);
				gezen=ilk;
					while(gezen->sonraki!=NULL){
						gezen=gezen->sonraki;
					}
					gezen->sonraki=ilk;
						gezen=ilk;
						while(gezen->sonraki->sonraki!=ilk){
							if(gezen->sonraki->veri==a){
								ilk=gezen->sonraki;
								gezen->sonraki=NULL;
								break;
							}
							else
								gezen=gezen->sonraki;
						}
					yaz();
			*/
/* bu vatandaþ alýnan baðlý listenin ortasýndaki elemani siliyor
		struct dugum{
			int veri;
			struct dugum *sonraki;
		};
		typedef dugum node;
			node *ilk=NULL,*gezen=NULL,*gecici=NULL;
			
			node *yerac(int x){
				node *ekle=(node *)malloc(sizeof(node));
				ekle->veri=x;
				ekle->sonraki=NULL;
			}				
			void yaz(){
				gezen=ilk;
					while(gezen->sonraki!=NULL){
						printf("%d => ",gezen->veri);
						gezen=gezen->sonraki;
					}
						printf("%d",gezen->veri);
			}
			int main(){
				int a,kanak=1;
					for(int i=0;i<11;i++){
						if(ilk==NULL){
							ilk=yerac(i);
							gezen=ilk;
						}
						else{
							gezen->sonraki=yerac(i);
							gezen=gezen->sonraki;
						}
						a=i+1;
					}
					yaz();
						if(a%2==0)
							printf("ortasi yok");
						else{
							a=(a+1)/2;
							gezen=ilk;
								while(gezen->sonraki!=NULL){
									kanak++;     
									if(kanak==a){
										gecici=gezen->sonraki;
										gezen->sonraki=gezen->sonraki->sonraki;
										free(gecici);
									}
									else
									gezen=gezen->sonraki;
								}
						}
						printf("\n");
						yaz();
			}*/
/* bu vatandaþ bi listeyi komple silen rekürsif fonksiyonlu bir program kodu
				struct dugum{
					int veri;
					struct dugum *sonraki;
				};
				typedef dugum node;
				node *ilk=NULL,*gezen=NULL,*gecici=NULL;
				node *yerac(int x){
					node *ekle=(node *)malloc(sizeof(node));
					ekle->veri=x;
					ekle->sonraki=NULL;
				}
				void yaz(){
					gezen=ilk;
						while(gezen->sonraki!=NULL){
							printf("%d => ",gezen->veri);
							gezen=gezen->sonraki;
						}
							printf("%d",gezen->veri);
				}
				void *sil(int kanak){
					if(kanak==0){
						return 0;	
					}
					else{
						gezen=ilk;
						ilk=gezen->sonraki;
						free(gezen);	
				}
				return sil(kanak-1);			
			}
					int main(){
						int say=0;
						for(int i=0;i<10;i++){
							if(ilk==NULL){
								ilk=yerac(i+1);
								gezen=ilk;
								say=1;
							}
							else{
								gezen->sonraki=yerac(i+1);
								gezen=gezen->sonraki;	
								say++;
							}
						}
						yaz();
						sil(say);
						printf("\n");
						if(ilk==NULL)
							printf("\nliste bosaltildi...");
					}
			*/
/* bu vatandaþ kullanýcýnýn girdiði integer tipli sayýlarý sýralý olarak baðlý listeye ekliyor
						struct dugum{
							int veri;
							struct dugum *sonraki;
						};		
						typedef dugum node;
						node *ilk=NULL,*gezen=NULL,*gecici=NULL;
						node *yerac(int x){
							node *ekle=(node *)malloc(sizeof(node));
							ekle->veri=x;
							ekle->sonraki=NULL;
						}
						void yaz(){
							gezen=ilk;
								while(gezen->sonraki!=NULL){
									printf("%d => ",gezen->veri);
									gezen=gezen->sonraki;
								}
									printf("%d",gezen->veri);
						}
							int main(){
								int dvm,a,tut;
								node *gecici2=NULL;
								do{
									printf("sayi girin : ");scanf("%d",&a);
									printf("\ndevam '1' ");scanf("%d",&dvm);
									if(ilk==NULL){
										ilk=yerac(a);
										gecici=ilk;
									}
									else{
										gecici=yerac(a);
										gezen=ilk;
											while(gezen!=NULL){
												if(gezen->veri < gecici->veri){
													tut=gezen->veri;
													gezen=gezen->sonraki;
												}	
												else
													break;
											}
											if(gezen==NULL){
												gezen=ilk;
												while(gezen->sonraki!=NULL){
													gezen=gezen->sonraki;
												}
													gezen->sonraki=gecici;
													gecici->sonraki=NULL;
											}
											else if(gezen==ilk){
												gecici->sonraki=gezen;
												ilk=gecici;
												gecici=NULL;
											}
											else{
												gecici2=gezen;
												gezen=ilk;
													while(gezen->sonraki!=NULL){
														gezen=gezen->sonraki;
															if(gezen->veri==tut){
																gezen->sonraki=gecici;
																gecici->sonraki=gecici2->sonraki;
																gecici2=NULL;
																gecici=NULL;
															}
													}
											}
										
									}
								
								}while(dvm==1);
								yaz();
								
							}
		*/
	/*listeyi ters yazdýran rekürsif kod
		
								struct dugum{
									int veri;
									struct dugum *sonraki;
								};
								typedef dugum node;
								node *ilk=NULL,*gezen=NULL,*gecici=NULL;
								
								node *yerac(int x){
									node *ekle=(node *)malloc(sizeof(node));
									ekle->veri=x;
									ekle->sonraki=NULL;
									}				
								void yaz(){
									gezen=ilk;
										while(gezen->sonraki!=NULL){
											printf("%d => ",gezen->veri);
											gezen=gezen->sonraki;
										}
											printf("%d",gezen->veri);
								}
								node *ters(node *ilk){
									if(ilk->sonraki==NULL){
										printf("%d",ilk->veri);
										return 0;
									}
									else{
										gezen=ilk;
											while(gezen->sonraki->sonraki!=NULL){
												gezen=gezen->sonraki;
											}
											printf("%d => ",gezen->sonraki->veri);
											gezen->sonraki=NULL;
											
									}
									return ters(&*ilk);
								}
									int main(){
										for(int i=0;i<5;i++){
											if(ilk==NULL){
												ilk=yerac(i);
												gezen=ilk;
											}
											else{
												gezen->sonraki=yerac(i);
												gezen=gezen->sonraki;
											}
										}
										yaz();
										printf("\n");
										ters(&*ilk);
									
									}
									*/
/*tekleri bir baðlý listeye çiftleri bir baðlý listeye alan program kodu
										struct dugum{
											int veri;
											struct dugum *sonraki;
										};
										typedef dugum node;
										node *ilk=NULL,*gezen=NULL,*gecici=NULL;
										
										node *yerac(int x){
											node *ekle=(node *)malloc(sizeof(node));
											ekle->veri=x;
											ekle->sonraki=NULL;
											}				
										void yaz(){
											gezen=ilk;
												while(gezen->sonraki!=NULL){
													printf("%d => ",gezen->veri);
													gezen=gezen->sonraki;
												}
													printf("%d",gezen->veri);
										}
											struct dugum2{
												int veri;
												struct dugum2 *sonraki;
											};
											typedef dugum2 node2;
											node *ilk2=NULL,*gezen2=NULL,*gecici2=NULL;
											
											node *yerac2(int x){
												node2 *ekle=(node2 *)malloc(sizeof(node2));
												ekle->veri=x;
												ekle->sonraki=NULL;
												}				
											void yaz2(){
												gezen2=ilk2;
													while(gezen2->sonraki!=NULL){
														printf("%d => ",gezen2->veri);
														gezen2=gezen2->sonraki;
													}
														printf("%d",gezen2->veri);
											}	
												int main(){
													for(int i=0;i<10;i++){
														if(i%2==0){
															if(ilk==NULL){
																ilk=yerac(i);
																gezen=ilk;
															}
															else{
																gezen->sonraki=yerac(i);
																gezen=gezen->sonraki;
															}
														}
														else{
															if(ilk2==NULL){
																ilk2=yerac2(i);
																gezen2=ilk2;
															}
															else{
																gezen2->sonraki=yerac2(i);
																gezen2=gezen2->sonraki;
															}
														}
													}
													yaz();
													printf("\n");
													yaz2();
												}*/
/*20 elemanlý bir diziyi selection sortla sýralayan ve kaç kez takas yapýldýðýný bulan kod
												int takas(int *x,int *y){
													int gecici;
														gecici=*x;
														*x=*y;
														*y=gecici;
												}
													int main(){
														srand(time(0));
														int *dizi,*maks,kanak=0;
														dizi=(int *)malloc(sizeof(int)*20);
														for(int i=0;i<20;i++){
															printf("%d - ",*(dizi+i)=0+rand()%50);
														}
														printf("\n");
														for(int i=0;i<20;i++){
															maks=&*(dizi+i);
															for(int j=i;j<20;j++){
																if(*maks < *(dizi+j))
																	maks=&*(dizi+j);
															}
																if(*maks!=*(dizi+i)){
																	kanak++;
																takas(&*maks,&*(dizi+i));
															}
														}
														for(int i=0;i<20;i++){
															printf("%d - ",*(dizi+i));
														}
														printf("%d kez takas yapildi.",kanak);
																
												}
*/
/*ciftleri sondan tekleri baþtan ekleyen program kodu
													
													struct dugum{
														int veri;
														struct dugum *sonraki;
													};
													typedef dugum node;
													node *ilk=NULL,*gezen=NULL,*gecici=NULL;
													node *yerac(int x){
														node *ekle=(node *)malloc(sizeof(node));
														ekle->veri=x;
														ekle->sonraki=NULL;
													}
													void yaz(){
														gezen=ilk;
														while(gezen->sonraki!=NULL){
															printf("%d=> ",gezen->veri);
															gezen=gezen->sonraki;
														}
														printf("%d",gezen->veri);
													}
													node *basaekle(int x){
														if(ilk==NULL){
															ilk=yerac(x);
														}
														else{
															gecici=yerac(x);
															gecici->sonraki=ilk;
															ilk=gecici;
														}
													}
													node *sonaekle(int x){
														if(ilk==NULL){
															ilk=yerac(x);
														}
														else{
															gezen=ilk;
																while(gezen->sonraki!=NULL){
																	gezen=gezen->sonraki;
																}
																gezen->sonraki=yerac(x);
																gezen=gezen->sonraki;
																gezen->sonraki=NULL;
														}
													}
														int main(){
															for(int i=0;i<10;i++){
																if(i%2==0)
																	sonaekle(i);
																else
																	basaekle(i);
															}
															yaz();
														}
														*/
