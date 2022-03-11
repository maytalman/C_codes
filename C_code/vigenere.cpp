#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
	int main(){
		char tablo[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'},*anahtar,*sozcuk;
		int s,k=0,t=0,a;
		anahtar=(char *)malloc(10*sizeof(char));
		anahtar=(char *)realloc(anahtar,sizeof(char));
		sozcuk=(char *)malloc(10*sizeof(char));
		sozcuk=(char *)realloc(sozcuk,sizeof(char));
		printf("\n\t saklanacak sozcukler (lutfen kucuk harflerle ve bosluksuz yaziniz!) : ");gets(sozcuk); 
		printf("\n\t anahtar (lutfen kucuk harflerle ve bosluksuz yaziniz!): ");gets(anahtar);
		a=strlen(anahtar);
		s=strlen(sozcuk);
		int sozcu[s],anahta[s];char sonuc[s];
	if(s==a){
		for(int i=0;i<s;i++){	
			for(int j=0;j<26;j++){
				if(tablo[j]==sozcuk[i]){
					sozcu[k]=j+1;
					k++;
					break;
				}		
		}
	}
	printf("\n sozcugun tabloya gore numara karsiligi:");
		for(int i=0;i<s;i++){
			printf(" %d ",sozcu[i]);
		}
		k=0;
	for(int i=0;i<s;i++){	
			for(int j=0;j<26;j++){
				if(tablo[j]==anahtar[i]){
					anahta[k]=j+1;
					k++;
					break;
				}		
		}
	}
	printf("\n anahtarin tabloya gore numara karsiligi:");
		for(int i=0;i<a;i++){
			printf(" %d ",anahta[i]);
		}
		for(int i=0;i<s;i++)
			sozcu[i]=sozcu[i]+anahta[i];
			printf("\n toplamlari: ");
		for(int i=0;i<s;i++)
			printf("%d ",sozcu[i]);
						for(int i=0;i<s;i++){
							for(int j=0;j<26;j++){
								if(sozcu[i]==j){
								sonuc[t]=tablo[j-1];
								t++;
							}
								if(sozcu[i]>26){
									sozcu[i]=sozcu[i]%26;
										if(sozcu[i]==j){
											sonuc[t]=tablo[j-1];
											t++;
											}
									}
								}
						}
		printf("\nsifreli hali :");
			for(int i=0;i<s;i++){
				printf("%c ",sonuc[i]);
			} k=0;
}
if(a<s){
	printf("\nsozcugunuz : ");
	for(int i=0;i<s;i++){
		printf("%c",sozcuk[i]);
	}
	 t=0;
		for(int i=0;i<s;i++){
			int j=i;
				if(j>a || j==a){
					j=j-a;	
						anahtar[t]=anahtar[j];
						t++;
						}
				else{
						anahtar[t]=anahtar[j];
						t++;
				}
			}
		printf("\nanahtarin sozcuge gore restoresi: ");
		for(int i=0;i<t;i++){
			printf("%c",anahtar[i]);
		}
		
						for(int i=0;i<s;i++){	
							for(int j=0;j<26;j++){
								if(tablo[j]==sozcuk[i]){
									sozcu[k]=j+1;
									k++;
									break;
								}		
						}
					}
					printf("\nsozcugun tabloya gore numara karsiligi: ");
						for(int i=0;i<s;i++){
								if(sozcu[i]<10)
									printf(" 0%d ",sozcu[i]);
								else
									printf(" %d ",sozcu[i]);
						}		
						k=0;
						for(int i=0;i<t;i++){
							for(int j=0;j<26;j++){
								if(tablo[j]==anahtar[i]){
									anahta[k]=j+1;
									k++;
									break;
								}
							}
						}
					printf("\nanahtarin tabloya gore numara kasiligi: ");
						for(int i=0;i<t;i++){
								if(anahta[i]<10)
									printf(" 0%d ",anahta[i]);	
								else
									printf(" %d ",anahta[i]);
						}
									for(int i=0;i<s;i++)
										sozcu[i]+=anahta[i];
											printf("\ntabloya gore numaralarin toplamlari:\t");
											for(int i=0;i<s;i++){
												if(sozcu[i]<10)
													printf(" 0%d ",sozcu[i]);
												else
													printf(" %d ",sozcu[i]);
											} k=0;
													for(int i=0;i<s;i++){
														for(int j=0;j<26;j++){
															if(sozcu[i]==j){
																sonuc[k]=tablo[j-1];
																k++;
															}
															if(sozcu[i]>=26){
																sozcu[i]=sozcu[i]%26;
																	if(sozcu[i]==j){
																		sonuc[k]=tablo[j-1];
																		k++;
																	}
																}
															}
														}
														printf("\n\tMetnin sifreli hali : ");
															for(int i=0;i<s;i++){
																sonuc[i]-=32;
																printf("%c",sonuc[i]);
															}
														
	}
	free(anahtar);
	free(sozcuk);
}
