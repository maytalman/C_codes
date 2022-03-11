#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
struct list{
	int deger;
	struct list *onceki;
	struct list *sonraki;
};
int main(){
	srand(time(NULL));	
	int nbr1;
	list *ilk=NULL,*ptr=NULL,*gecici=NULL;
	FILE *fp1;
	fp1 = fopen ("bir.txt","w");
	for(int i=0;i<5;i++){
		nbr1=rand()%10;
		fprintf(fp1,"%d ",nbr1);
		}
	fclose(fp1);
	fp1 = fopen("bir.txt","r");
	for(int i=0;i<5;i++){
		if(ilk==NULL){
			ilk = (list *)malloc(1*sizeof(list));			
			fscanf(fp1,"%d",&ilk->deger);			
			ilk->onceki=NULL;			
			ilk->sonraki=NULL;	
		}
		else{
			gecici = (list *)malloc(1*sizeof(list));
			fscanf(fp1,"%d",&gecici->deger);			
			gecici->onceki=NULL;			
			gecici->sonraki=NULL;
			ptr=ilk;
			while (ptr!=NULL){
			    if (ptr->deger < gecici->deger)
				   ptr = ptr->sonraki;
				else
			       break;
			}
			if (ptr==NULL){
				ptr=ilk; 
					while (ptr->sonraki!=NULL){
					ptr=ptr->sonraki;
				}
				ptr->sonraki = gecici;
				gecici->onceki = ptr;
				gecici = NULL;
			}
			else if (ptr==ilk){
				gecici->sonraki=ptr;
				ptr->onceki=gecici;				
				ilk=gecici;
				gecici=NULL;
			}
			else{
			gecici->sonraki = ptr;
			gecici->onceki  = ptr->onceki;
			ptr->onceki->sonraki = gecici;
			ptr->onceki = gecici;
			gecici=NULL;	
			}	
		}	
	}
	ptr=ilk;
	while (ptr!=NULL){  
	printf("Deger[%d] Adres[%x]  =>  onceki[%x] sonraki[%x] \n",ptr->deger, ptr,ptr->onceki,ptr->sonraki); 		
	ptr=ptr->sonraki; 
	}
	ptr = ilk;
	while (ptr!=NULL){  
		gecici = ptr;	
		ptr = ptr->sonraki;
		free(gecici);
	}
	fclose(fp1);	
}
