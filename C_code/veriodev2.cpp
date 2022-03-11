#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define size 25
	struct dugum{
		char film[25];
		float puan;
		struct dugum *next;
	};
	struct dugum2{
		char film[25];
		float puan;
		struct dugum2 *next;
	};
	typedef dugum inputStack;
	typedef dugum2 tempStack;
	inputStack *top=NULL,*iter=NULL,*alt=NULL,*temp=NULL;
	tempStack *top2=NULL,*iter2=NULL,*alt2=NULL,*temp2=NULL;
		void push (char muvi[],int s,float p){
			if(top==NULL){
				top=new inputStack;
				strcpy(top->film,muvi);
				top->puan=p;
				top->next=NULL;
				alt=top;
			}
					inputStack *ekle=new inputStack;
					strcpy(ekle->film,muvi);
					ekle->puan=p;
					top->next=ekle;
					ekle->next=NULL;
					top=ekle;
		}
			void push2 (char muvi[],int s,float p){
			if(top2==NULL){
				top2=new tempStack;
				strcpy(top2->film,muvi);
				top2->puan=p;
				top2->next=NULL;
				alt2=top2;
			}
					tempStack *ekle2=new tempStack;
					strcpy(ekle2->film,muvi);
					ekle2->puan=p;
					top2->next=ekle2;
					ekle2->next=NULL;
					top2=ekle2;
		}
		void pop(){
			iter=alt->next;
				while(iter->next->next!=NULL){
					iter=iter->next;
				}
				top=iter;
				temp=iter->next;
				free(temp);
				top->next=NULL;
		}
			void pop2(){
			iter2=alt2->next;
				while(iter2->next->next!=NULL){
					iter2=iter2->next;
				}
				top2=iter2;
				temp2=iter2->next;
				free(temp2);
				top2->next=NULL;
		}
		inputStack sortstack(){
			dugum *temp3;
		float min;
			for(int k=0;k<12;k++){
				min=top->puan;
				iter=alt->next;
			while(iter->next!=NULL){
				if(iter->puan<min)
					min=iter->puan;
				else{
					iter=iter->next;	
					break;
			}
			iter=iter->next;
			}
			printf("%f\n",min);
				
	}exit(1);
				while(top->puan!= min){
					temp3=top;
					push2(temp3->film,strlen(temp3->film),temp3->puan);
					pop();
				}
				if(top->puan==min){
					temp=top;
					pop();
					while(top2!=NULL){
							temp2=top2;
							pop2();
							push(temp2->film,strlen(temp2->film),temp2->puan);
					}
				
					push2(temp->film,strlen(temp->film),temp->puan);
				}
		
				
	}
		void yazdir(){
			iter=alt->next;
			while(iter->next!=NULL){
				printf("%s %.1f\n ",iter->film,iter->puan); 
				iter=iter->next;
			}
					printf("%s %.1f ",iter->film,iter->puan);
		}
		void yazdir2(){
			iter2=alt2->next;
			while(iter2->next!=NULL){
				printf("%s %.1f\n ",iter2->film,iter2->puan); 
				iter2=iter2->next;
			}
					printf("%s %.1f ",iter2->film,iter2->puan);
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
					push(ad[k],strlen(ad[k]),imdb[k]);
			}
					yazdir();
					printf("\n\n");
					sortstack();perror("gectin");
				
					
	}
