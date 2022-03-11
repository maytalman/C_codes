#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct dugum{
	int data;
	struct dugum *next;
};
	typedef dugum node;
	node *start=NULL,*iter=NULL,*temp=NULL;
		node *yerac(int x){
			node *ekle=(node *)malloc(sizeof(node));
			ekle->data=x;
			ekle->next=NULL;
		}
			void sonaekle(int x){
				iter=start;
				if(start==NULL)
					start=yerac(x);
				else{
					while(iter->next!=NULL){
						iter=iter->next;
					}
					iter->next=yerac(x);
				}
			}
			void basaekle(int x){
				if(start==NULL)
					start=yerac(x);
				else{
					iter=start;
					temp=yerac(x);
					temp->next=start;
					start=temp;
				}
				
			}
			void arayaekle(int x,int y){
				iter=start;
					while(iter->next->data!=x){
						iter=iter->next;
					}
					temp=iter->next;
					iter->next=yerac(y);
					iter=iter->next;
					iter->next=temp;
			}
			void yazdir(){
				iter=start;
				while(iter->next!=NULL){
					printf("%d- ",iter->data);
					iter=iter->next;
				}
				printf("%d- ",iter->data);
			}
			int main(){
				for(int i=0;i<3;i++){
					sonaekle(i);
				}
				yazdir();
				int a,b,c;
				printf("basa eklenecek eleman: ");scanf("%d",&a);
				basaekle(a);
				yazdir();
				printf("arayaekle nereye ne : ");scanf("%d%d",&b,&c);
				arayaekle(b,c);
				yazdir();
				
			}
			
			
			
			
