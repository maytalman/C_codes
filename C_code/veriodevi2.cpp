#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
	struct dugum{
		char film[25];
		float puan;
		struct dugum *next;
	};

	typedef dugum node;
	node *inputStack=NULL,*tmpStack=NULL;
		node *yerac(char *n,float p){
			node *ekle=new node;
			ekle->next=NULL;
			ekle->puan=p;
			strcpy(ekle->film,n);
				return ekle;
		}
		node *push (node *top,node *ekle){
			ekle->next=top;
			top=ekle;
					return ekle;
		}
		node *pop(node *x){
			if(x!=NULL){
				node *yeni=x->next;
				return yeni;
			}
		}
		node *sortstack(node *inputStack,node *tmpStack){
			while(inputStack !=NULL){
				node *temp=inputStack;
				inputStack=pop(inputStack);
					while(tmpStack!=NULL && tmpStack->puan > temp->puan){
						inputStack=push(inputStack,yerac(tmpStack->film,tmpStack->puan));
						tmpStack=pop(tmpStack);
					}
					tmpStack=push(tmpStack,temp);
			}
			return tmpStack;
		}
			
		void yazdir(node *x){
			while(x != NULL){
				printf("%s %f\n",x->film,x->puan);
				x=pop(x);
			}
		
		}
			int main(){
				int i=0;
				char arr[30],ad[12][25],*str,*str2;
				float imdb[12];
				FILE *dosya;
				dosya=fopen("deneme5.txt","r");
				str=fgets(arr,30,dosya);
				if((dosya=fopen("deneme5.txt","r"))!=NULL){
					while(str!=NULL){
						str2=strtok(arr," ");
						strcpy(ad[i],str2);
						str2=strtok(NULL," ");
						str2=strtok(NULL,"\n");
						sscanf(str2,"%f",&imdb[i]);
						i++;
							str=fgets(arr,30,dosya);
					}
			}
			else printf("bos");
			
				for(int k=1;k<=12;k++){
					inputStack=push(inputStack,yerac(ad[k],imdb[k]));
				}
					yazdir(inputStack);
					printf("\n\n");
					tmpStack=sortstack(inputStack,tmpStack);
					printf("siralamadan sonraki hali:\n");
					yazdir(tmpStack);
				
					
	}
